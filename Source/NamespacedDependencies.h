// Namespaced Header

#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(SIGMAPOINT, symbol)
#endif


// Classes
#ifndef GDataACLAdditionalRole
#define GDataACLAdditionalRole __NS_SYMBOL(GDataACLAdditionalRole)
#endif

#ifndef GDataACLKeyedRole
#define GDataACLKeyedRole __NS_SYMBOL(GDataACLKeyedRole)
#endif

#ifndef GDataACLRole
#define GDataACLRole __NS_SYMBOL(GDataACLRole)
#endif

#ifndef GDataACLRoleBase
#define GDataACLRoleBase __NS_SYMBOL(GDataACLRoleBase)
#endif

#ifndef GDataACLScope
#define GDataACLScope __NS_SYMBOL(GDataACLScope)
#endif

#ifndef GDataAccessLevelProperty
#define GDataAccessLevelProperty __NS_SYMBOL(GDataAccessLevelProperty)
#endif

#ifndef GDataAdditionalGuests
#define GDataAdditionalGuests __NS_SYMBOL(GDataAdditionalGuests)
#endif

#ifndef GDataAnalyticsAggregateGroup
#define GDataAnalyticsAggregateGroup __NS_SYMBOL(GDataAnalyticsAggregateGroup)
#endif

#ifndef GDataAnalyticsConstants
#define GDataAnalyticsConstants __NS_SYMBOL(GDataAnalyticsConstants)
#endif

#ifndef GDataAnalyticsCustomVariable
#define GDataAnalyticsCustomVariable __NS_SYMBOL(GDataAnalyticsCustomVariable)
#endif

#ifndef GDataAnalyticsDataSource
#define GDataAnalyticsDataSource __NS_SYMBOL(GDataAnalyticsDataSource)
#endif

#ifndef GDataAnalyticsDefinition
#define GDataAnalyticsDefinition __NS_SYMBOL(GDataAnalyticsDefinition)
#endif

#ifndef GDataAnalyticsDestination
#define GDataAnalyticsDestination __NS_SYMBOL(GDataAnalyticsDestination)
#endif

#ifndef GDataAnalyticsDimension
#define GDataAnalyticsDimension __NS_SYMBOL(GDataAnalyticsDimension)
#endif

#ifndef GDataAnalyticsEndDate
#define GDataAnalyticsEndDate __NS_SYMBOL(GDataAnalyticsEndDate)
#endif

#ifndef GDataAnalyticsEngagement
#define GDataAnalyticsEngagement __NS_SYMBOL(GDataAnalyticsEngagement)
#endif

#ifndef GDataAnalyticsGoal
#define GDataAnalyticsGoal __NS_SYMBOL(GDataAnalyticsGoal)
#endif

#ifndef GDataAnalyticsMetric
#define GDataAnalyticsMetric __NS_SYMBOL(GDataAnalyticsMetric)
#endif

#ifndef GDataAnalyticsProperty
#define GDataAnalyticsProperty __NS_SYMBOL(GDataAnalyticsProperty)
#endif

#ifndef GDataAnalyticsSegment
#define GDataAnalyticsSegment __NS_SYMBOL(GDataAnalyticsSegment)
#endif

#ifndef GDataAnalyticsStartDate
#define GDataAnalyticsStartDate __NS_SYMBOL(GDataAnalyticsStartDate)
#endif

#ifndef GDataAnalyticsStep
#define GDataAnalyticsStep __NS_SYMBOL(GDataAnalyticsStep)
#endif

#ifndef GDataAnalyticsTableID
#define GDataAnalyticsTableID __NS_SYMBOL(GDataAnalyticsTableID)
#endif

#ifndef GDataAnalyticsTableName
#define GDataAnalyticsTableName __NS_SYMBOL(GDataAnalyticsTableName)
#endif

#ifndef GDataAnyoneCanAddSelfProperty
#define GDataAnyoneCanAddSelfProperty __NS_SYMBOL(GDataAnyoneCanAddSelfProperty)
#endif

#ifndef GDataAtomAccept
#define GDataAtomAccept __NS_SYMBOL(GDataAtomAccept)
#endif

#ifndef GDataAtomAuthor
#define GDataAtomAuthor __NS_SYMBOL(GDataAtomAuthor)
#endif

#ifndef GDataAtomCategoryGroup
#define GDataAtomCategoryGroup __NS_SYMBOL(GDataAtomCategoryGroup)
#endif

#ifndef GDataAtomCollection
#define GDataAtomCollection __NS_SYMBOL(GDataAtomCollection)
#endif

#ifndef GDataAtomContent
#define GDataAtomContent __NS_SYMBOL(GDataAtomContent)
#endif

#ifndef GDataAtomContributor
#define GDataAtomContributor __NS_SYMBOL(GDataAtomContributor)
#endif

#ifndef GDataAtomID
#define GDataAtomID __NS_SYMBOL(GDataAtomID)
#endif

#ifndef GDataAtomIcon
#define GDataAtomIcon __NS_SYMBOL(GDataAtomIcon)
#endif

#ifndef GDataAtomLogo
#define GDataAtomLogo __NS_SYMBOL(GDataAtomLogo)
#endif

#ifndef GDataAtomPubControl
#define GDataAtomPubControl __NS_SYMBOL(GDataAtomPubControl)
#endif

#ifndef GDataAtomPubDraft
#define GDataAtomPubDraft __NS_SYMBOL(GDataAtomPubDraft)
#endif

#ifndef GDataAtomPubEditedDate
#define GDataAtomPubEditedDate __NS_SYMBOL(GDataAtomPubEditedDate)
#endif

#ifndef GDataAtomPublishedDate
#define GDataAtomPublishedDate __NS_SYMBOL(GDataAtomPublishedDate)
#endif

#ifndef GDataAtomRights
#define GDataAtomRights __NS_SYMBOL(GDataAtomRights)
#endif

#ifndef GDataAtomServiceDocument
#define GDataAtomServiceDocument __NS_SYMBOL(GDataAtomServiceDocument)
#endif

#ifndef GDataAtomSubtitle
#define GDataAtomSubtitle __NS_SYMBOL(GDataAtomSubtitle)
#endif

#ifndef GDataAtomSummary
#define GDataAtomSummary __NS_SYMBOL(GDataAtomSummary)
#endif

#ifndef GDataAtomTitle
#define GDataAtomTitle __NS_SYMBOL(GDataAtomTitle)
#endif

#ifndef GDataAtomUpdatedDate
#define GDataAtomUpdatedDate __NS_SYMBOL(GDataAtomUpdatedDate)
#endif

#ifndef GDataAtomWorkspace
#define GDataAtomWorkspace __NS_SYMBOL(GDataAtomWorkspace)
#endif

#ifndef GDataAttendeeStatus
#define GDataAttendeeStatus __NS_SYMBOL(GDataAttendeeStatus)
#endif

#ifndef GDataAttendeeType
#define GDataAttendeeType __NS_SYMBOL(GDataAttendeeType)
#endif

#ifndef GDataAttribute
#define GDataAttribute __NS_SYMBOL(GDataAttribute)
#endif

#ifndef GDataAuthenticationFetcher
#define GDataAuthenticationFetcher __NS_SYMBOL(GDataAuthenticationFetcher)
#endif

#ifndef GDataBatchID
#define GDataBatchID __NS_SYMBOL(GDataBatchID)
#endif

#ifndef GDataBatchInterrupted
#define GDataBatchInterrupted __NS_SYMBOL(GDataBatchInterrupted)
#endif

#ifndef GDataBatchOperation
#define GDataBatchOperation __NS_SYMBOL(GDataBatchOperation)
#endif

#ifndef GDataBatchStatus
#define GDataBatchStatus __NS_SYMBOL(GDataBatchStatus)
#endif

#ifndef GDataBloggerConstants
#define GDataBloggerConstants __NS_SYMBOL(GDataBloggerConstants)
#endif

#ifndef GDataBookConstants
#define GDataBookConstants __NS_SYMBOL(GDataBookConstants)
#endif

#ifndef GDataBoolValueConstruct
#define GDataBoolValueConstruct __NS_SYMBOL(GDataBoolValueConstruct)
#endif

#ifndef GDataCalendarBusy
#define GDataCalendarBusy __NS_SYMBOL(GDataCalendarBusy)
#endif

#ifndef GDataCalendarSettingsProperty
#define GDataCalendarSettingsProperty __NS_SYMBOL(GDataCalendarSettingsProperty)
#endif

#ifndef GDataCalendarTimeRange
#define GDataCalendarTimeRange __NS_SYMBOL(GDataCalendarTimeRange)
#endif

#ifndef GDataCalendarWhen
#define GDataCalendarWhen __NS_SYMBOL(GDataCalendarWhen)
#endif

#ifndef GDataCategory
#define GDataCategory __NS_SYMBOL(GDataCategory)
#endif

#ifndef GDataCategoryFilter
#define GDataCategoryFilter __NS_SYMBOL(GDataCategoryFilter)
#endif

#ifndef GDataCodeSearchFile
#define GDataCodeSearchFile __NS_SYMBOL(GDataCodeSearchFile)
#endif

#ifndef GDataCodeSearchMatch
#define GDataCodeSearchMatch __NS_SYMBOL(GDataCodeSearchMatch)
#endif

#ifndef GDataCodeSearchPackage
#define GDataCodeSearchPackage __NS_SYMBOL(GDataCodeSearchPackage)
#endif

#ifndef GDataColorProperty
#define GDataColorProperty __NS_SYMBOL(GDataColorProperty)
#endif

#ifndef GDataColumnCount
#define GDataColumnCount __NS_SYMBOL(GDataColumnCount)
#endif

#ifndef GDataComment
#define GDataComment __NS_SYMBOL(GDataComment)
#endif

#ifndef GDataCommission
#define GDataCommission __NS_SYMBOL(GDataCommission)
#endif

#ifndef GDataContactBillingInformation
#define GDataContactBillingInformation __NS_SYMBOL(GDataContactBillingInformation)
#endif

#ifndef GDataContactBirthday
#define GDataContactBirthday __NS_SYMBOL(GDataContactBirthday)
#endif

#ifndef GDataContactCalendarLink
#define GDataContactCalendarLink __NS_SYMBOL(GDataContactCalendarLink)
#endif

#ifndef GDataContactConstants
#define GDataContactConstants __NS_SYMBOL(GDataContactConstants)
#endif

#ifndef GDataContactDirectoryServer
#define GDataContactDirectoryServer __NS_SYMBOL(GDataContactDirectoryServer)
#endif

#ifndef GDataContactEvent
#define GDataContactEvent __NS_SYMBOL(GDataContactEvent)
#endif

#ifndef GDataContactExternalID
#define GDataContactExternalID __NS_SYMBOL(GDataContactExternalID)
#endif

#ifndef GDataContactGender
#define GDataContactGender __NS_SYMBOL(GDataContactGender)
#endif

#ifndef GDataContactHobby
#define GDataContactHobby __NS_SYMBOL(GDataContactHobby)
#endif

#ifndef GDataContactInitials
#define GDataContactInitials __NS_SYMBOL(GDataContactInitials)
#endif

#ifndef GDataContactJot
#define GDataContactJot __NS_SYMBOL(GDataContactJot)
#endif

#ifndef GDataContactLanguage
#define GDataContactLanguage __NS_SYMBOL(GDataContactLanguage)
#endif

#ifndef GDataContactLink
#define GDataContactLink __NS_SYMBOL(GDataContactLink)
#endif

#ifndef GDataContactMaidenName
#define GDataContactMaidenName __NS_SYMBOL(GDataContactMaidenName)
#endif

#ifndef GDataContactMileage
#define GDataContactMileage __NS_SYMBOL(GDataContactMileage)
#endif

#ifndef GDataContactNickname
#define GDataContactNickname __NS_SYMBOL(GDataContactNickname)
#endif

#ifndef GDataContactOccupation
#define GDataContactOccupation __NS_SYMBOL(GDataContactOccupation)
#endif

#ifndef GDataContactPriority
#define GDataContactPriority __NS_SYMBOL(GDataContactPriority)
#endif

#ifndef GDataContactRelation
#define GDataContactRelation __NS_SYMBOL(GDataContactRelation)
#endif

#ifndef GDataContactSensitivity
#define GDataContactSensitivity __NS_SYMBOL(GDataContactSensitivity)
#endif

#ifndef GDataContactShortName
#define GDataContactShortName __NS_SYMBOL(GDataContactShortName)
#endif

#ifndef GDataContactSubject
#define GDataContactSubject __NS_SYMBOL(GDataContactSubject)
#endif

#ifndef GDataContactSystemGroup
#define GDataContactSystemGroup __NS_SYMBOL(GDataContactSystemGroup)
#endif

#ifndef GDataContactUserDefinedField
#define GDataContactUserDefinedField __NS_SYMBOL(GDataContactUserDefinedField)
#endif

#ifndef GDataContactWebsiteLink
#define GDataContactWebsiteLink __NS_SYMBOL(GDataContactWebsiteLink)
#endif

#ifndef GDataContactYomiName
#define GDataContactYomiName __NS_SYMBOL(GDataContactYomiName)
#endif

#ifndef GDataCostBasis
#define GDataCostBasis __NS_SYMBOL(GDataCostBasis)
#endif

#ifndef GDataCustomProperty
#define GDataCustomProperty __NS_SYMBOL(GDataCustomProperty)
#endif

#ifndef GDataDCCreator
#define GDataDCCreator __NS_SYMBOL(GDataDCCreator)
#endif

#ifndef GDataDCDate
#define GDataDCDate __NS_SYMBOL(GDataDCDate)
#endif

#ifndef GDataDCDescription
#define GDataDCDescription __NS_SYMBOL(GDataDCDescription)
#endif

#ifndef GDataDCFormat
#define GDataDCFormat __NS_SYMBOL(GDataDCFormat)
#endif

#ifndef GDataDCIdentifier
#define GDataDCIdentifier __NS_SYMBOL(GDataDCIdentifier)
#endif

#ifndef GDataDCLanguage
#define GDataDCLanguage __NS_SYMBOL(GDataDCLanguage)
#endif

#ifndef GDataDCPublisher
#define GDataDCPublisher __NS_SYMBOL(GDataDCPublisher)
#endif

#ifndef GDataDCSubject
#define GDataDCSubject __NS_SYMBOL(GDataDCSubject)
#endif

#ifndef GDataDCTitle
#define GDataDCTitle __NS_SYMBOL(GDataDCTitle)
#endif

#ifndef GDataDateTime
#define GDataDateTime __NS_SYMBOL(GDataDateTime)
#endif

#ifndef GDataDaysGain
#define GDataDaysGain __NS_SYMBOL(GDataDaysGain)
#endif

#ifndef GDataDeleted
#define GDataDeleted __NS_SYMBOL(GDataDeleted)
#endif

#ifndef GDataDocChangestamp
#define GDataDocChangestamp __NS_SYMBOL(GDataDocChangestamp)
#endif

#ifndef GDataDocConstants
#define GDataDocConstants __NS_SYMBOL(GDataDocConstants)
#endif

#ifndef GDataDocDescription
#define GDataDocDescription __NS_SYMBOL(GDataDocDescription)
#endif

#ifndef GDataDocExportFormat
#define GDataDocExportFormat __NS_SYMBOL(GDataDocExportFormat)
#endif

#ifndef GDataDocFeature
#define GDataDocFeature __NS_SYMBOL(GDataDocFeature)
#endif

#ifndef GDataDocFeatureName
#define GDataDocFeatureName __NS_SYMBOL(GDataDocFeatureName)
#endif

#ifndef GDataDocFeatureRate
#define GDataDocFeatureRate __NS_SYMBOL(GDataDocFeatureRate)
#endif

#ifndef GDataDocFilename
#define GDataDocFilename __NS_SYMBOL(GDataDocFilename)
#endif

#ifndef GDataDocImportFormat
#define GDataDocImportFormat __NS_SYMBOL(GDataDocImportFormat)
#endif

#ifndef GDataDocLargestChangestamp
#define GDataDocLargestChangestamp __NS_SYMBOL(GDataDocLargestChangestamp)
#endif

#ifndef GDataDocLastCommented
#define GDataDocLastCommented __NS_SYMBOL(GDataDocLastCommented)
#endif

#ifndef GDataDocMD5Checksum
#define GDataDocMD5Checksum __NS_SYMBOL(GDataDocMD5Checksum)
#endif

#ifndef GDataDocMaxUploadSize
#define GDataDocMaxUploadSize __NS_SYMBOL(GDataDocMaxUploadSize)
#endif

#ifndef GDataDocPublish
#define GDataDocPublish __NS_SYMBOL(GDataDocPublish)
#endif

#ifndef GDataDocPublishAuto
#define GDataDocPublishAuto __NS_SYMBOL(GDataDocPublishAuto)
#endif

#ifndef GDataDocPublishOutsideDomain
#define GDataDocPublishOutsideDomain __NS_SYMBOL(GDataDocPublishOutsideDomain)
#endif

#ifndef GDataDocRemoved
#define GDataDocRemoved __NS_SYMBOL(GDataDocRemoved)
#endif

#ifndef GDataDocSuggestedFilename
#define GDataDocSuggestedFilename __NS_SYMBOL(GDataDocSuggestedFilename)
#endif

#ifndef GDataDocTransferFormat
#define GDataDocTransferFormat __NS_SYMBOL(GDataDocTransferFormat)
#endif

#ifndef GDataETagAttribute
#define GDataETagAttribute __NS_SYMBOL(GDataETagAttribute)
#endif

#ifndef GDataEXIFTag
#define GDataEXIFTag __NS_SYMBOL(GDataEXIFTag)
#endif

#ifndef GDataEXIFTags
#define GDataEXIFTags __NS_SYMBOL(GDataEXIFTags)
#endif

#ifndef GDataEmail
#define GDataEmail __NS_SYMBOL(GDataEmail)
#endif

#ifndef GDataEntryACL
#define GDataEntryACL __NS_SYMBOL(GDataEntryACL)
#endif

#ifndef GDataEntryAnalyticsAccount
#define GDataEntryAnalyticsAccount __NS_SYMBOL(GDataEntryAnalyticsAccount)
#endif

#ifndef GDataEntryAnalyticsData
#define GDataEntryAnalyticsData __NS_SYMBOL(GDataEntryAnalyticsData)
#endif

#ifndef GDataEntryBase
#define GDataEntryBase __NS_SYMBOL(GDataEntryBase)
#endif

#ifndef GDataEntryBlog
#define GDataEntryBlog __NS_SYMBOL(GDataEntryBlog)
#endif

#ifndef GDataEntryBlogComment
#define GDataEntryBlogComment __NS_SYMBOL(GDataEntryBlogComment)
#endif

#ifndef GDataEntryBlogPost
#define GDataEntryBlogPost __NS_SYMBOL(GDataEntryBlogPost)
#endif

#ifndef GDataEntryCalendar
#define GDataEntryCalendar __NS_SYMBOL(GDataEntryCalendar)
#endif

#ifndef GDataEntryCalendarEvent
#define GDataEntryCalendarEvent __NS_SYMBOL(GDataEntryCalendarEvent)
#endif

#ifndef GDataEntryCalendarSettings
#define GDataEntryCalendarSettings __NS_SYMBOL(GDataEntryCalendarSettings)
#endif

#ifndef GDataEntryCodeSearch
#define GDataEntryCodeSearch __NS_SYMBOL(GDataEntryCodeSearch)
#endif

#ifndef GDataEntryCollection
#define GDataEntryCollection __NS_SYMBOL(GDataEntryCollection)
#endif

#ifndef GDataEntryContact
#define GDataEntryContact __NS_SYMBOL(GDataEntryContact)
#endif

#ifndef GDataEntryContactBase
#define GDataEntryContactBase __NS_SYMBOL(GDataEntryContactBase)
#endif

#ifndef GDataEntryContactGroup
#define GDataEntryContactGroup __NS_SYMBOL(GDataEntryContactGroup)
#endif

#ifndef GDataEntryContactProfile
#define GDataEntryContactProfile __NS_SYMBOL(GDataEntryContactProfile)
#endif

#ifndef GDataEntryContent
#define GDataEntryContent __NS_SYMBOL(GDataEntryContent)
#endif

#ifndef GDataEntryDocBase
#define GDataEntryDocBase __NS_SYMBOL(GDataEntryDocBase)
#endif

#ifndef GDataEntryDocChange
#define GDataEntryDocChange __NS_SYMBOL(GDataEntryDocChange)
#endif

#ifndef GDataEntryDocListMetadata
#define GDataEntryDocListMetadata __NS_SYMBOL(GDataEntryDocListMetadata)
#endif

#ifndef GDataEntryDocRevision
#define GDataEntryDocRevision __NS_SYMBOL(GDataEntryDocRevision)
#endif

#ifndef GDataEntryDrawingDoc
#define GDataEntryDrawingDoc __NS_SYMBOL(GDataEntryDrawingDoc)
#endif

#ifndef GDataEntryEvent
#define GDataEntryEvent __NS_SYMBOL(GDataEntryEvent)
#endif

#ifndef GDataEntryFileDoc
#define GDataEntryFileDoc __NS_SYMBOL(GDataEntryFileDoc)
#endif

#ifndef GDataEntryFinancePortfolio
#define GDataEntryFinancePortfolio __NS_SYMBOL(GDataEntryFinancePortfolio)
#endif

#ifndef GDataEntryFinancePosition
#define GDataEntryFinancePosition __NS_SYMBOL(GDataEntryFinancePosition)
#endif

#ifndef GDataEntryFinanceTransaction
#define GDataEntryFinanceTransaction __NS_SYMBOL(GDataEntryFinanceTransaction)
#endif

#ifndef GDataEntryFolderDoc
#define GDataEntryFolderDoc __NS_SYMBOL(GDataEntryFolderDoc)
#endif

#ifndef GDataEntryFreeBusy
#define GDataEntryFreeBusy __NS_SYMBOL(GDataEntryFreeBusy)
#endif

#ifndef GDataEntryFreeBusyBase
#define GDataEntryFreeBusyBase __NS_SYMBOL(GDataEntryFreeBusyBase)
#endif

#ifndef GDataEntryGroupFreeBusy
#define GDataEntryGroupFreeBusy __NS_SYMBOL(GDataEntryGroupFreeBusy)
#endif

#ifndef GDataEntryLink
#define GDataEntryLink __NS_SYMBOL(GDataEntryLink)
#endif

#ifndef GDataEntryMap
#define GDataEntryMap __NS_SYMBOL(GDataEntryMap)
#endif

#ifndef GDataEntryMapFeature
#define GDataEntryMapFeature __NS_SYMBOL(GDataEntryMapFeature)
#endif

#ifndef GDataEntryMapVersion
#define GDataEntryMapVersion __NS_SYMBOL(GDataEntryMapVersion)
#endif

#ifndef GDataEntryMessage
#define GDataEntryMessage __NS_SYMBOL(GDataEntryMessage)
#endif

#ifndef GDataEntryPDFDoc
#define GDataEntryPDFDoc __NS_SYMBOL(GDataEntryPDFDoc)
#endif

#ifndef GDataEntryPhoto
#define GDataEntryPhoto __NS_SYMBOL(GDataEntryPhoto)
#endif

#ifndef GDataEntryPhotoAlbum
#define GDataEntryPhotoAlbum __NS_SYMBOL(GDataEntryPhotoAlbum)
#endif

#ifndef GDataEntryPhotoBase
#define GDataEntryPhotoBase __NS_SYMBOL(GDataEntryPhotoBase)
#endif

#ifndef GDataEntryPhotoComment
#define GDataEntryPhotoComment __NS_SYMBOL(GDataEntryPhotoComment)
#endif

#ifndef GDataEntryPhotoTag
#define GDataEntryPhotoTag __NS_SYMBOL(GDataEntryPhotoTag)
#endif

#ifndef GDataEntryPhotoUser
#define GDataEntryPhotoUser __NS_SYMBOL(GDataEntryPhotoUser)
#endif

#ifndef GDataEntryPresentationDoc
#define GDataEntryPresentationDoc __NS_SYMBOL(GDataEntryPresentationDoc)
#endif

#ifndef GDataEntrySite
#define GDataEntrySite __NS_SYMBOL(GDataEntrySite)
#endif

#ifndef GDataEntrySiteCrawlIssue
#define GDataEntrySiteCrawlIssue __NS_SYMBOL(GDataEntrySiteCrawlIssue)
#endif

#ifndef GDataEntrySiteDoc
#define GDataEntrySiteDoc __NS_SYMBOL(GDataEntrySiteDoc)
#endif

#ifndef GDataEntrySiteMessage
#define GDataEntrySiteMessage __NS_SYMBOL(GDataEntrySiteMessage)
#endif

#ifndef GDataEntrySitemapBase
#define GDataEntrySitemapBase __NS_SYMBOL(GDataEntrySitemapBase)
#endif

#ifndef GDataEntrySitemapMobile
#define GDataEntrySitemapMobile __NS_SYMBOL(GDataEntrySitemapMobile)
#endif

#ifndef GDataEntrySitemapNews
#define GDataEntrySitemapNews __NS_SYMBOL(GDataEntrySitemapNews)
#endif

#ifndef GDataEntrySitemapRegular
#define GDataEntrySitemapRegular __NS_SYMBOL(GDataEntrySitemapRegular)
#endif

#ifndef GDataEntrySpreadsheet
#define GDataEntrySpreadsheet __NS_SYMBOL(GDataEntrySpreadsheet)
#endif

#ifndef GDataEntrySpreadsheetCell
#define GDataEntrySpreadsheetCell __NS_SYMBOL(GDataEntrySpreadsheetCell)
#endif

#ifndef GDataEntrySpreadsheetDoc
#define GDataEntrySpreadsheetDoc __NS_SYMBOL(GDataEntrySpreadsheetDoc)
#endif

#ifndef GDataEntrySpreadsheetList
#define GDataEntrySpreadsheetList __NS_SYMBOL(GDataEntrySpreadsheetList)
#endif

#ifndef GDataEntrySpreadsheetRecord
#define GDataEntrySpreadsheetRecord __NS_SYMBOL(GDataEntrySpreadsheetRecord)
#endif

#ifndef GDataEntrySpreadsheetTable
#define GDataEntrySpreadsheetTable __NS_SYMBOL(GDataEntrySpreadsheetTable)
#endif

#ifndef GDataEntryStandardDoc
#define GDataEntryStandardDoc __NS_SYMBOL(GDataEntryStandardDoc)
#endif

#ifndef GDataEntryTableDoc
#define GDataEntryTableDoc __NS_SYMBOL(GDataEntryTableDoc)
#endif

#ifndef GDataEntryVolume
#define GDataEntryVolume __NS_SYMBOL(GDataEntryVolume)
#endif

#ifndef GDataEntryWorksheet
#define GDataEntryWorksheet __NS_SYMBOL(GDataEntryWorksheet)
#endif

#ifndef GDataEntryYouTubeCaptionTrack
#define GDataEntryYouTubeCaptionTrack __NS_SYMBOL(GDataEntryYouTubeCaptionTrack)
#endif

#ifndef GDataEntryYouTubeChannel
#define GDataEntryYouTubeChannel __NS_SYMBOL(GDataEntryYouTubeChannel)
#endif

#ifndef GDataEntryYouTubeComment
#define GDataEntryYouTubeComment __NS_SYMBOL(GDataEntryYouTubeComment)
#endif

#ifndef GDataEntryYouTubeComplaint
#define GDataEntryYouTubeComplaint __NS_SYMBOL(GDataEntryYouTubeComplaint)
#endif

#ifndef GDataEntryYouTubeFavorite
#define GDataEntryYouTubeFavorite __NS_SYMBOL(GDataEntryYouTubeFavorite)
#endif

#ifndef GDataEntryYouTubeFeedLinkBase
#define GDataEntryYouTubeFeedLinkBase __NS_SYMBOL(GDataEntryYouTubeFeedLinkBase)
#endif

#ifndef GDataEntryYouTubeFriend
#define GDataEntryYouTubeFriend __NS_SYMBOL(GDataEntryYouTubeFriend)
#endif

#ifndef GDataEntryYouTubePlaylist
#define GDataEntryYouTubePlaylist __NS_SYMBOL(GDataEntryYouTubePlaylist)
#endif

#ifndef GDataEntryYouTubePlaylistLink
#define GDataEntryYouTubePlaylistLink __NS_SYMBOL(GDataEntryYouTubePlaylistLink)
#endif

#ifndef GDataEntryYouTubeRating
#define GDataEntryYouTubeRating __NS_SYMBOL(GDataEntryYouTubeRating)
#endif

#ifndef GDataEntryYouTubeSubscription
#define GDataEntryYouTubeSubscription __NS_SYMBOL(GDataEntryYouTubeSubscription)
#endif

#ifndef GDataEntryYouTubeUpload
#define GDataEntryYouTubeUpload __NS_SYMBOL(GDataEntryYouTubeUpload)
#endif

#ifndef GDataEntryYouTubeUserEvent
#define GDataEntryYouTubeUserEvent __NS_SYMBOL(GDataEntryYouTubeUserEvent)
#endif

#ifndef GDataEntryYouTubeUserProfile
#define GDataEntryYouTubeUserProfile __NS_SYMBOL(GDataEntryYouTubeUserProfile)
#endif

#ifndef GDataEntryYouTubeVideo
#define GDataEntryYouTubeVideo __NS_SYMBOL(GDataEntryYouTubeVideo)
#endif

#ifndef GDataEntryYouTubeVideoMessage
#define GDataEntryYouTubeVideoMessage __NS_SYMBOL(GDataEntryYouTubeVideoMessage)
#endif

#ifndef GDataEventStatus
#define GDataEventStatus __NS_SYMBOL(GDataEventStatus)
#endif

#ifndef GDataExtendedProperty
#define GDataExtendedProperty __NS_SYMBOL(GDataExtendedProperty)
#endif

#ifndef GDataExtensionDeclaration
#define GDataExtensionDeclaration __NS_SYMBOL(GDataExtensionDeclaration)
#endif

#ifndef GDataFeedACL
#define GDataFeedACL __NS_SYMBOL(GDataFeedACL)
#endif

#ifndef GDataFeedAnalyticsAccount
#define GDataFeedAnalyticsAccount __NS_SYMBOL(GDataFeedAnalyticsAccount)
#endif

#ifndef GDataFeedAnalyticsData
#define GDataFeedAnalyticsData __NS_SYMBOL(GDataFeedAnalyticsData)
#endif

#ifndef GDataFeedBase
#define GDataFeedBase __NS_SYMBOL(GDataFeedBase)
#endif

#ifndef GDataFeedBlog
#define GDataFeedBlog __NS_SYMBOL(GDataFeedBlog)
#endif

#ifndef GDataFeedBlogComment
#define GDataFeedBlogComment __NS_SYMBOL(GDataFeedBlogComment)
#endif

#ifndef GDataFeedBlogPost
#define GDataFeedBlogPost __NS_SYMBOL(GDataFeedBlogPost)
#endif

#ifndef GDataFeedCalendar
#define GDataFeedCalendar __NS_SYMBOL(GDataFeedCalendar)
#endif

#ifndef GDataFeedCalendarEvent
#define GDataFeedCalendarEvent __NS_SYMBOL(GDataFeedCalendarEvent)
#endif

#ifndef GDataFeedCalendarSettings
#define GDataFeedCalendarSettings __NS_SYMBOL(GDataFeedCalendarSettings)
#endif

#ifndef GDataFeedCodeSearch
#define GDataFeedCodeSearch __NS_SYMBOL(GDataFeedCodeSearch)
#endif

#ifndef GDataFeedCollection
#define GDataFeedCollection __NS_SYMBOL(GDataFeedCollection)
#endif

#ifndef GDataFeedContact
#define GDataFeedContact __NS_SYMBOL(GDataFeedContact)
#endif

#ifndef GDataFeedContactGroup
#define GDataFeedContactGroup __NS_SYMBOL(GDataFeedContactGroup)
#endif

#ifndef GDataFeedContactProfile
#define GDataFeedContactProfile __NS_SYMBOL(GDataFeedContactProfile)
#endif

#ifndef GDataFeedDocChange
#define GDataFeedDocChange __NS_SYMBOL(GDataFeedDocChange)
#endif

#ifndef GDataFeedDocList
#define GDataFeedDocList __NS_SYMBOL(GDataFeedDocList)
#endif

#ifndef GDataFeedDocRevision
#define GDataFeedDocRevision __NS_SYMBOL(GDataFeedDocRevision)
#endif

#ifndef GDataFeedEvent
#define GDataFeedEvent __NS_SYMBOL(GDataFeedEvent)
#endif

#ifndef GDataFeedFinancePortfolio
#define GDataFeedFinancePortfolio __NS_SYMBOL(GDataFeedFinancePortfolio)
#endif

#ifndef GDataFeedFinancePosition
#define GDataFeedFinancePosition __NS_SYMBOL(GDataFeedFinancePosition)
#endif

#ifndef GDataFeedFinanceTransaction
#define GDataFeedFinanceTransaction __NS_SYMBOL(GDataFeedFinanceTransaction)
#endif

#ifndef GDataFeedFreeBusy
#define GDataFeedFreeBusy __NS_SYMBOL(GDataFeedFreeBusy)
#endif

#ifndef GDataFeedGroupFreeBusy
#define GDataFeedGroupFreeBusy __NS_SYMBOL(GDataFeedGroupFreeBusy)
#endif

#ifndef GDataFeedLink
#define GDataFeedLink __NS_SYMBOL(GDataFeedLink)
#endif

#ifndef GDataFeedMap
#define GDataFeedMap __NS_SYMBOL(GDataFeedMap)
#endif

#ifndef GDataFeedMapFeature
#define GDataFeedMapFeature __NS_SYMBOL(GDataFeedMapFeature)
#endif

#ifndef GDataFeedMapVersion
#define GDataFeedMapVersion __NS_SYMBOL(GDataFeedMapVersion)
#endif

#ifndef GDataFeedMessage
#define GDataFeedMessage __NS_SYMBOL(GDataFeedMessage)
#endif

#ifndef GDataFeedPhoto
#define GDataFeedPhoto __NS_SYMBOL(GDataFeedPhoto)
#endif

#ifndef GDataFeedPhotoAlbum
#define GDataFeedPhotoAlbum __NS_SYMBOL(GDataFeedPhotoAlbum)
#endif

#ifndef GDataFeedPhotoBase
#define GDataFeedPhotoBase __NS_SYMBOL(GDataFeedPhotoBase)
#endif

#ifndef GDataFeedPhotoUser
#define GDataFeedPhotoUser __NS_SYMBOL(GDataFeedPhotoUser)
#endif

#ifndef GDataFeedSite
#define GDataFeedSite __NS_SYMBOL(GDataFeedSite)
#endif

#ifndef GDataFeedSiteCrawlIssue
#define GDataFeedSiteCrawlIssue __NS_SYMBOL(GDataFeedSiteCrawlIssue)
#endif

#ifndef GDataFeedSiteKeyword
#define GDataFeedSiteKeyword __NS_SYMBOL(GDataFeedSiteKeyword)
#endif

#ifndef GDataFeedSiteMessage
#define GDataFeedSiteMessage __NS_SYMBOL(GDataFeedSiteMessage)
#endif

#ifndef GDataFeedSitemap
#define GDataFeedSitemap __NS_SYMBOL(GDataFeedSitemap)
#endif

#ifndef GDataFeedSpreadsheet
#define GDataFeedSpreadsheet __NS_SYMBOL(GDataFeedSpreadsheet)
#endif

#ifndef GDataFeedSpreadsheetCell
#define GDataFeedSpreadsheetCell __NS_SYMBOL(GDataFeedSpreadsheetCell)
#endif

#ifndef GDataFeedSpreadsheetList
#define GDataFeedSpreadsheetList __NS_SYMBOL(GDataFeedSpreadsheetList)
#endif

#ifndef GDataFeedSpreadsheetRecord
#define GDataFeedSpreadsheetRecord __NS_SYMBOL(GDataFeedSpreadsheetRecord)
#endif

#ifndef GDataFeedSpreadsheetTable
#define GDataFeedSpreadsheetTable __NS_SYMBOL(GDataFeedSpreadsheetTable)
#endif

#ifndef GDataFeedVolume
#define GDataFeedVolume __NS_SYMBOL(GDataFeedVolume)
#endif

#ifndef GDataFeedWorksheet
#define GDataFeedWorksheet __NS_SYMBOL(GDataFeedWorksheet)
#endif

#ifndef GDataFeedYouTubeCaptionTrack
#define GDataFeedYouTubeCaptionTrack __NS_SYMBOL(GDataFeedYouTubeCaptionTrack)
#endif

#ifndef GDataFeedYouTubeChannel
#define GDataFeedYouTubeChannel __NS_SYMBOL(GDataFeedYouTubeChannel)
#endif

#ifndef GDataFeedYouTubeComment
#define GDataFeedYouTubeComment __NS_SYMBOL(GDataFeedYouTubeComment)
#endif

#ifndef GDataFeedYouTubeComplaint
#define GDataFeedYouTubeComplaint __NS_SYMBOL(GDataFeedYouTubeComplaint)
#endif

#ifndef GDataFeedYouTubeFavorite
#define GDataFeedYouTubeFavorite __NS_SYMBOL(GDataFeedYouTubeFavorite)
#endif

#ifndef GDataFeedYouTubeFriend
#define GDataFeedYouTubeFriend __NS_SYMBOL(GDataFeedYouTubeFriend)
#endif

#ifndef GDataFeedYouTubePlaylist
#define GDataFeedYouTubePlaylist __NS_SYMBOL(GDataFeedYouTubePlaylist)
#endif

#ifndef GDataFeedYouTubePlaylistLink
#define GDataFeedYouTubePlaylistLink __NS_SYMBOL(GDataFeedYouTubePlaylistLink)
#endif

#ifndef GDataFeedYouTubeRating
#define GDataFeedYouTubeRating __NS_SYMBOL(GDataFeedYouTubeRating)
#endif

#ifndef GDataFeedYouTubeSubscription
#define GDataFeedYouTubeSubscription __NS_SYMBOL(GDataFeedYouTubeSubscription)
#endif

#ifndef GDataFeedYouTubeUserEvent
#define GDataFeedYouTubeUserEvent __NS_SYMBOL(GDataFeedYouTubeUserEvent)
#endif

#ifndef GDataFeedYouTubeUserProfile
#define GDataFeedYouTubeUserProfile __NS_SYMBOL(GDataFeedYouTubeUserProfile)
#endif

#ifndef GDataFeedYouTubeVideo
#define GDataFeedYouTubeVideo __NS_SYMBOL(GDataFeedYouTubeVideo)
#endif

#ifndef GDataFeedYouTubeVideoMessage
#define GDataFeedYouTubeVideoMessage __NS_SYMBOL(GDataFeedYouTubeVideoMessage)
#endif

#ifndef GDataFieldsAttribute
#define GDataFieldsAttribute __NS_SYMBOL(GDataFieldsAttribute)
#endif

#ifndef GDataFinanceSymbol
#define GDataFinanceSymbol __NS_SYMBOL(GDataFinanceSymbol)
#endif

#ifndef GDataFinanceTransactionData
#define GDataFinanceTransactionData __NS_SYMBOL(GDataFinanceTransactionData)
#endif

#ifndef GDataGain
#define GDataGain __NS_SYMBOL(GDataGain)
#endif

#ifndef GDataGenerator
#define GDataGenerator __NS_SYMBOL(GDataGenerator)
#endif

#ifndef GDataGeo
#define GDataGeo __NS_SYMBOL(GDataGeo)
#endif

#ifndef GDataGeoPt
#define GDataGeoPt __NS_SYMBOL(GDataGeoPt)
#endif

#ifndef GDataGeoRSSFeatureName
#define GDataGeoRSSFeatureName __NS_SYMBOL(GDataGeoRSSFeatureName)
#endif

#ifndef GDataGeoRSSPoint
#define GDataGeoRSSPoint __NS_SYMBOL(GDataGeoRSSPoint)
#endif

#ifndef GDataGeoRSSRadius
#define GDataGeoRSSRadius __NS_SYMBOL(GDataGeoRSSRadius)
#endif

#ifndef GDataGeoRSSWhere
#define GDataGeoRSSWhere __NS_SYMBOL(GDataGeoRSSWhere)
#endif

#ifndef GDataGeoW3CPoint
#define GDataGeoW3CPoint __NS_SYMBOL(GDataGeoW3CPoint)
#endif

#ifndef GDataGroupMembershipInfo
#define GDataGroupMembershipInfo __NS_SYMBOL(GDataGroupMembershipInfo)
#endif

#ifndef GDataGuestsCanInviteOthersProperty
#define GDataGuestsCanInviteOthersProperty __NS_SYMBOL(GDataGuestsCanInviteOthersProperty)
#endif

#ifndef GDataGuestsCanModifyProperty
#define GDataGuestsCanModifyProperty __NS_SYMBOL(GDataGuestsCanModifyProperty)
#endif

#ifndef GDataGuestsCanSeeGuestsProperty
#define GDataGuestsCanSeeGuestsProperty __NS_SYMBOL(GDataGuestsCanSeeGuestsProperty)
#endif

#ifndef GDataHiddenProperty
#define GDataHiddenProperty __NS_SYMBOL(GDataHiddenProperty)
#endif

#ifndef GDataICalUIDProperty
#define GDataICalUIDProperty __NS_SYMBOL(GDataICalUIDProperty)
#endif

#ifndef GDataIM
#define GDataIM __NS_SYMBOL(GDataIM)
#endif

#ifndef GDataImplicitValueConstruct
#define GDataImplicitValueConstruct __NS_SYMBOL(GDataImplicitValueConstruct)
#endif

#ifndef GDataInReplyTo
#define GDataInReplyTo __NS_SYMBOL(GDataInReplyTo)
#endif

#ifndef GDataKindAttribute
#define GDataKindAttribute __NS_SYMBOL(GDataKindAttribute)
#endif

#ifndef GDataLastModifiedBy
#define GDataLastModifiedBy __NS_SYMBOL(GDataLastModifiedBy)
#endif

#ifndef GDataLastModifiedByMe
#define GDataLastModifiedByMe __NS_SYMBOL(GDataLastModifiedByMe)
#endif

#ifndef GDataLastViewed
#define GDataLastViewed __NS_SYMBOL(GDataLastViewed)
#endif

#ifndef GDataLink
#define GDataLink __NS_SYMBOL(GDataLink)
#endif

#ifndef GDataMapConstants
#define GDataMapConstants __NS_SYMBOL(GDataMapConstants)
#endif

#ifndef GDataMarketValue
#define GDataMarketValue __NS_SYMBOL(GDataMarketValue)
#endif

#ifndef GDataMediaCategory
#define GDataMediaCategory __NS_SYMBOL(GDataMediaCategory)
#endif

#ifndef GDataMediaContent
#define GDataMediaContent __NS_SYMBOL(GDataMediaContent)
#endif

#ifndef GDataMediaCredit
#define GDataMediaCredit __NS_SYMBOL(GDataMediaCredit)
#endif

#ifndef GDataMediaDescription
#define GDataMediaDescription __NS_SYMBOL(GDataMediaDescription)
#endif

#ifndef GDataMediaGroup
#define GDataMediaGroup __NS_SYMBOL(GDataMediaGroup)
#endif

#ifndef GDataMediaKeywords
#define GDataMediaKeywords __NS_SYMBOL(GDataMediaKeywords)
#endif

#ifndef GDataMediaPlayer
#define GDataMediaPlayer __NS_SYMBOL(GDataMediaPlayer)
#endif

#ifndef GDataMediaRating
#define GDataMediaRating __NS_SYMBOL(GDataMediaRating)
#endif

#ifndef GDataMediaRestriction
#define GDataMediaRestriction __NS_SYMBOL(GDataMediaRestriction)
#endif

#ifndef GDataMediaThumbnail
#define GDataMediaThumbnail __NS_SYMBOL(GDataMediaThumbnail)
#endif

#ifndef GDataMediaTitle
#define GDataMediaTitle __NS_SYMBOL(GDataMediaTitle)
#endif

#ifndef GDataMoney
#define GDataMoney __NS_SYMBOL(GDataMoney)
#endif

#ifndef GDataMoneyElementBase
#define GDataMoneyElementBase __NS_SYMBOL(GDataMoneyElementBase)
#endif

#ifndef GDataName
#define GDataName __NS_SYMBOL(GDataName)
#endif

#ifndef GDataNameAdditional
#define GDataNameAdditional __NS_SYMBOL(GDataNameAdditional)
#endif

#ifndef GDataNameElement
#define GDataNameElement __NS_SYMBOL(GDataNameElement)
#endif

#ifndef GDataNameFamily
#define GDataNameFamily __NS_SYMBOL(GDataNameFamily)
#endif

#ifndef GDataNameFull
#define GDataNameFull __NS_SYMBOL(GDataNameFull)
#endif

#ifndef GDataNameGiven
#define GDataNameGiven __NS_SYMBOL(GDataNameGiven)
#endif

#ifndef GDataNamePrefix
#define GDataNamePrefix __NS_SYMBOL(GDataNamePrefix)
#endif

#ifndef GDataNameSuffix
#define GDataNameSuffix __NS_SYMBOL(GDataNameSuffix)
#endif

#ifndef GDataNameValueConstruct
#define GDataNameValueConstruct __NS_SYMBOL(GDataNameValueConstruct)
#endif

#ifndef GDataNormalPlayTime
#define GDataNormalPlayTime __NS_SYMBOL(GDataNormalPlayTime)
#endif

#ifndef GDataObject
#define GDataObject __NS_SYMBOL(GDataObject)
#endif

#ifndef GDataOpenSearchItemsPerPage
#define GDataOpenSearchItemsPerPage __NS_SYMBOL(GDataOpenSearchItemsPerPage)
#endif

#ifndef GDataOpenSearchStartIndex
#define GDataOpenSearchStartIndex __NS_SYMBOL(GDataOpenSearchStartIndex)
#endif

#ifndef GDataOpenSearchTotalResults
#define GDataOpenSearchTotalResults __NS_SYMBOL(GDataOpenSearchTotalResults)
#endif

#ifndef GDataOrgDepartment
#define GDataOrgDepartment __NS_SYMBOL(GDataOrgDepartment)
#endif

#ifndef GDataOrgJobDescription
#define GDataOrgJobDescription __NS_SYMBOL(GDataOrgJobDescription)
#endif

#ifndef GDataOrgSymbol
#define GDataOrgSymbol __NS_SYMBOL(GDataOrgSymbol)
#endif

#ifndef GDataOrgTitle
#define GDataOrgTitle __NS_SYMBOL(GDataOrgTitle)
#endif

#ifndef GDataOrganization
#define GDataOrganization __NS_SYMBOL(GDataOrganization)
#endif

#ifndef GDataOrganizationName
#define GDataOrganizationName __NS_SYMBOL(GDataOrganizationName)
#endif

#ifndef GDataOriginalEvent
#define GDataOriginalEvent __NS_SYMBOL(GDataOriginalEvent)
#endif

#ifndef GDataOverrideNameProperty
#define GDataOverrideNameProperty __NS_SYMBOL(GDataOverrideNameProperty)
#endif

#ifndef GDataPerson
#define GDataPerson __NS_SYMBOL(GDataPerson)
#endif

#ifndef GDataPersonEmail
#define GDataPersonEmail __NS_SYMBOL(GDataPersonEmail)
#endif

#ifndef GDataPersonName
#define GDataPersonName __NS_SYMBOL(GDataPersonName)
#endif

#ifndef GDataPersonURI
#define GDataPersonURI __NS_SYMBOL(GDataPersonURI)
#endif

#ifndef GDataPhoneNumber
#define GDataPhoneNumber __NS_SYMBOL(GDataPhoneNumber)
#endif

#ifndef GDataPhotoAccess
#define GDataPhotoAccess __NS_SYMBOL(GDataPhotoAccess)
#endif

#ifndef GDataPhotoAlbumDesc
#define GDataPhotoAlbumDesc __NS_SYMBOL(GDataPhotoAlbumDesc)
#endif

#ifndef GDataPhotoAlbumID
#define GDataPhotoAlbumID __NS_SYMBOL(GDataPhotoAlbumID)
#endif

#ifndef GDataPhotoAlbumTitle
#define GDataPhotoAlbumTitle __NS_SYMBOL(GDataPhotoAlbumTitle)
#endif

#ifndef GDataPhotoBytesUsed
#define GDataPhotoBytesUsed __NS_SYMBOL(GDataPhotoBytesUsed)
#endif

#ifndef GDataPhotoChecksum
#define GDataPhotoChecksum __NS_SYMBOL(GDataPhotoChecksum)
#endif

#ifndef GDataPhotoCommentCount
#define GDataPhotoCommentCount __NS_SYMBOL(GDataPhotoCommentCount)
#endif

#ifndef GDataPhotoCommentingEnabled
#define GDataPhotoCommentingEnabled __NS_SYMBOL(GDataPhotoCommentingEnabled)
#endif

#ifndef GDataPhotoConstants
#define GDataPhotoConstants __NS_SYMBOL(GDataPhotoConstants)
#endif

#ifndef GDataPhotoGPhotoID
#define GDataPhotoGPhotoID __NS_SYMBOL(GDataPhotoGPhotoID)
#endif

#ifndef GDataPhotoHeight
#define GDataPhotoHeight __NS_SYMBOL(GDataPhotoHeight)
#endif

#ifndef GDataPhotoLocation
#define GDataPhotoLocation __NS_SYMBOL(GDataPhotoLocation)
#endif

#ifndef GDataPhotoMaxPhotosPerAlbum
#define GDataPhotoMaxPhotosPerAlbum __NS_SYMBOL(GDataPhotoMaxPhotosPerAlbum)
#endif

#ifndef GDataPhotoNickname
#define GDataPhotoNickname __NS_SYMBOL(GDataPhotoNickname)
#endif

#ifndef GDataPhotoNumberLeft
#define GDataPhotoNumberLeft __NS_SYMBOL(GDataPhotoNumberLeft)
#endif

#ifndef GDataPhotoNumberUsed
#define GDataPhotoNumberUsed __NS_SYMBOL(GDataPhotoNumberUsed)
#endif

#ifndef GDataPhotoPhotoID
#define GDataPhotoPhotoID __NS_SYMBOL(GDataPhotoPhotoID)
#endif

#ifndef GDataPhotoQuotaLimit
#define GDataPhotoQuotaLimit __NS_SYMBOL(GDataPhotoQuotaLimit)
#endif

#ifndef GDataPhotoQuotaUsed
#define GDataPhotoQuotaUsed __NS_SYMBOL(GDataPhotoQuotaUsed)
#endif

#ifndef GDataPhotoRotation
#define GDataPhotoRotation __NS_SYMBOL(GDataPhotoRotation)
#endif

#ifndef GDataPhotoSize
#define GDataPhotoSize __NS_SYMBOL(GDataPhotoSize)
#endif

#ifndef GDataPhotoSnippet
#define GDataPhotoSnippet __NS_SYMBOL(GDataPhotoSnippet)
#endif

#ifndef GDataPhotoSnippetType
#define GDataPhotoSnippetType __NS_SYMBOL(GDataPhotoSnippetType)
#endif

#ifndef GDataPhotoThumbnail
#define GDataPhotoThumbnail __NS_SYMBOL(GDataPhotoThumbnail)
#endif

#ifndef GDataPhotoTimestamp
#define GDataPhotoTimestamp __NS_SYMBOL(GDataPhotoTimestamp)
#endif

#ifndef GDataPhotoTruncated
#define GDataPhotoTruncated __NS_SYMBOL(GDataPhotoTruncated)
#endif

#ifndef GDataPhotoUser
#define GDataPhotoUser __NS_SYMBOL(GDataPhotoUser)
#endif

#ifndef GDataPhotoVideoStatus
#define GDataPhotoVideoStatus __NS_SYMBOL(GDataPhotoVideoStatus)
#endif

#ifndef GDataPhotoWeight
#define GDataPhotoWeight __NS_SYMBOL(GDataPhotoWeight)
#endif

#ifndef GDataPhotoWidth
#define GDataPhotoWidth __NS_SYMBOL(GDataPhotoWidth)
#endif

#ifndef GDataPortfolioBase
#define GDataPortfolioBase __NS_SYMBOL(GDataPortfolioBase)
#endif

#ifndef GDataPortfolioData
#define GDataPortfolioData __NS_SYMBOL(GDataPortfolioData)
#endif

#ifndef GDataPositionData
#define GDataPositionData __NS_SYMBOL(GDataPositionData)
#endif

#ifndef GDataPostalAddress
#define GDataPostalAddress __NS_SYMBOL(GDataPostalAddress)
#endif

#ifndef GDataPostalAddressAgent
#define GDataPostalAddressAgent __NS_SYMBOL(GDataPostalAddressAgent)
#endif

#ifndef GDataPostalAddressCity
#define GDataPostalAddressCity __NS_SYMBOL(GDataPostalAddressCity)
#endif

#ifndef GDataPostalAddressCountry
#define GDataPostalAddressCountry __NS_SYMBOL(GDataPostalAddressCountry)
#endif

#ifndef GDataPostalAddressFormattedAddress
#define GDataPostalAddressFormattedAddress __NS_SYMBOL(GDataPostalAddressFormattedAddress)
#endif

#ifndef GDataPostalAddressHouseName
#define GDataPostalAddressHouseName __NS_SYMBOL(GDataPostalAddressHouseName)
#endif

#ifndef GDataPostalAddressNeighborhood
#define GDataPostalAddressNeighborhood __NS_SYMBOL(GDataPostalAddressNeighborhood)
#endif

#ifndef GDataPostalAddressPOBox
#define GDataPostalAddressPOBox __NS_SYMBOL(GDataPostalAddressPOBox)
#endif

#ifndef GDataPostalAddressPostCode
#define GDataPostalAddressPostCode __NS_SYMBOL(GDataPostalAddressPostCode)
#endif

#ifndef GDataPostalAddressRegion
#define GDataPostalAddressRegion __NS_SYMBOL(GDataPostalAddressRegion)
#endif

#ifndef GDataPostalAddressStreet
#define GDataPostalAddressStreet __NS_SYMBOL(GDataPostalAddressStreet)
#endif

#ifndef GDataPostalAddressSubregion
#define GDataPostalAddressSubregion __NS_SYMBOL(GDataPostalAddressSubregion)
#endif

#ifndef GDataPrice
#define GDataPrice __NS_SYMBOL(GDataPrice)
#endif

#ifndef GDataPrivateCopyProperty
#define GDataPrivateCopyProperty __NS_SYMBOL(GDataPrivateCopyProperty)
#endif

#ifndef GDataQuery
#define GDataQuery __NS_SYMBOL(GDataQuery)
#endif

#ifndef GDataQueryAnalytics
#define GDataQueryAnalytics __NS_SYMBOL(GDataQueryAnalytics)
#endif

#ifndef GDataQueryBooks
#define GDataQueryBooks __NS_SYMBOL(GDataQueryBooks)
#endif

#ifndef GDataQueryCalendar
#define GDataQueryCalendar __NS_SYMBOL(GDataQueryCalendar)
#endif

#ifndef GDataQueryContact
#define GDataQueryContact __NS_SYMBOL(GDataQueryContact)
#endif

#ifndef GDataQueryDocs
#define GDataQueryDocs __NS_SYMBOL(GDataQueryDocs)
#endif

#ifndef GDataQueryFinance
#define GDataQueryFinance __NS_SYMBOL(GDataQueryFinance)
#endif

#ifndef GDataQueryGooglePhotos
#define GDataQueryGooglePhotos __NS_SYMBOL(GDataQueryGooglePhotos)
#endif

#ifndef GDataQueryMaps
#define GDataQueryMaps __NS_SYMBOL(GDataQueryMaps)
#endif

#ifndef GDataQuerySpreadsheet
#define GDataQuerySpreadsheet __NS_SYMBOL(GDataQuerySpreadsheet)
#endif

#ifndef GDataQueryYouTube
#define GDataQueryYouTube __NS_SYMBOL(GDataQueryYouTube)
#endif

#ifndef GDataQuickAddProperty
#define GDataQuickAddProperty __NS_SYMBOL(GDataQuickAddProperty)
#endif

#ifndef GDataQuotaBytesTotal
#define GDataQuotaBytesTotal __NS_SYMBOL(GDataQuotaBytesTotal)
#endif

#ifndef GDataQuotaBytesUsed
#define GDataQuotaBytesUsed __NS_SYMBOL(GDataQuotaBytesUsed)
#endif

#ifndef GDataQuotaBytesUsedInTrash
#define GDataQuotaBytesUsedInTrash __NS_SYMBOL(GDataQuotaBytesUsedInTrash)
#endif

#ifndef GDataRating
#define GDataRating __NS_SYMBOL(GDataRating)
#endif

#ifndef GDataRecurrence
#define GDataRecurrence __NS_SYMBOL(GDataRecurrence)
#endif

#ifndef GDataRecurrenceException
#define GDataRecurrenceException __NS_SYMBOL(GDataRecurrenceException)
#endif

#ifndef GDataReminder
#define GDataReminder __NS_SYMBOL(GDataReminder)
#endif

#ifndef GDataResourceID
#define GDataResourceID __NS_SYMBOL(GDataResourceID)
#endif

#ifndef GDataResourceProperty
#define GDataResourceProperty __NS_SYMBOL(GDataResourceProperty)
#endif

#ifndef GDataRowColumnCount
#define GDataRowColumnCount __NS_SYMBOL(GDataRowColumnCount)
#endif

#ifndef GDataRowCount
#define GDataRowCount __NS_SYMBOL(GDataRowCount)
#endif

#ifndef GDataSelectedProperty
#define GDataSelectedProperty __NS_SYMBOL(GDataSelectedProperty)
#endif

#ifndef GDataSendEventNotifications
#define GDataSendEventNotifications __NS_SYMBOL(GDataSendEventNotifications)
#endif

#ifndef GDataSequenceProperty
#define GDataSequenceProperty __NS_SYMBOL(GDataSequenceProperty)
#endif

#ifndef GDataServerError
#define GDataServerError __NS_SYMBOL(GDataServerError)
#endif

#ifndef GDataServerErrorGroup
#define GDataServerErrorGroup __NS_SYMBOL(GDataServerErrorGroup)
#endif

#ifndef GDataServiceBase
#define GDataServiceBase __NS_SYMBOL(GDataServiceBase)
#endif

#ifndef GDataServiceGoogle
#define GDataServiceGoogle __NS_SYMBOL(GDataServiceGoogle)
#endif

#ifndef GDataServiceGoogleAnalytics
#define GDataServiceGoogleAnalytics __NS_SYMBOL(GDataServiceGoogleAnalytics)
#endif

#ifndef GDataServiceGoogleBlogger
#define GDataServiceGoogleBlogger __NS_SYMBOL(GDataServiceGoogleBlogger)
#endif

#ifndef GDataServiceGoogleBooks
#define GDataServiceGoogleBooks __NS_SYMBOL(GDataServiceGoogleBooks)
#endif

#ifndef GDataServiceGoogleCalendar
#define GDataServiceGoogleCalendar __NS_SYMBOL(GDataServiceGoogleCalendar)
#endif

#ifndef GDataServiceGoogleContact
#define GDataServiceGoogleContact __NS_SYMBOL(GDataServiceGoogleContact)
#endif

#ifndef GDataServiceGoogleDocs
#define GDataServiceGoogleDocs __NS_SYMBOL(GDataServiceGoogleDocs)
#endif

#ifndef GDataServiceGoogleFinance
#define GDataServiceGoogleFinance __NS_SYMBOL(GDataServiceGoogleFinance)
#endif

#ifndef GDataServiceGoogleMaps
#define GDataServiceGoogleMaps __NS_SYMBOL(GDataServiceGoogleMaps)
#endif

#ifndef GDataServiceGooglePhotos
#define GDataServiceGooglePhotos __NS_SYMBOL(GDataServiceGooglePhotos)
#endif

#ifndef GDataServiceGoogleSpreadsheet
#define GDataServiceGoogleSpreadsheet __NS_SYMBOL(GDataServiceGoogleSpreadsheet)
#endif

#ifndef GDataServiceGoogleWebmasterTools
#define GDataServiceGoogleWebmasterTools __NS_SYMBOL(GDataServiceGoogleWebmasterTools)
#endif

#ifndef GDataServiceGoogleYouTube
#define GDataServiceGoogleYouTube __NS_SYMBOL(GDataServiceGoogleYouTube)
#endif

#ifndef GDataServiceTicket
#define GDataServiceTicket __NS_SYMBOL(GDataServiceTicket)
#endif

#ifndef GDataServiceTicketBase
#define GDataServiceTicketBase __NS_SYMBOL(GDataServiceTicketBase)
#endif

#ifndef GDataSharedWithMe
#define GDataSharedWithMe __NS_SYMBOL(GDataSharedWithMe)
#endif

#ifndef GDataSiteCrawlIssueDateDetected
#define GDataSiteCrawlIssueDateDetected __NS_SYMBOL(GDataSiteCrawlIssueDateDetected)
#endif

#ifndef GDataSiteCrawlIssueDetail
#define GDataSiteCrawlIssueDetail __NS_SYMBOL(GDataSiteCrawlIssueDetail)
#endif

#ifndef GDataSiteCrawlIssueLinkedFrom
#define GDataSiteCrawlIssueLinkedFrom __NS_SYMBOL(GDataSiteCrawlIssueLinkedFrom)
#endif

#ifndef GDataSiteCrawlIssueType
#define GDataSiteCrawlIssueType __NS_SYMBOL(GDataSiteCrawlIssueType)
#endif

#ifndef GDataSiteCrawlIssueURL
#define GDataSiteCrawlIssueURL __NS_SYMBOL(GDataSiteCrawlIssueURL)
#endif

#ifndef GDataSiteCrawlRate
#define GDataSiteCrawlRate __NS_SYMBOL(GDataSiteCrawlRate)
#endif

#ifndef GDataSiteCrawlType
#define GDataSiteCrawlType __NS_SYMBOL(GDataSiteCrawlType)
#endif

#ifndef GDataSiteCrawledDate
#define GDataSiteCrawledDate __NS_SYMBOL(GDataSiteCrawledDate)
#endif

#ifndef GDataSiteEnhancedImageSearch
#define GDataSiteEnhancedImageSearch __NS_SYMBOL(GDataSiteEnhancedImageSearch)
#endif

#ifndef GDataSiteGeoLocation
#define GDataSiteGeoLocation __NS_SYMBOL(GDataSiteGeoLocation)
#endif

#ifndef GDataSiteIndexed
#define GDataSiteIndexed __NS_SYMBOL(GDataSiteIndexed)
#endif

#ifndef GDataSiteKeyword
#define GDataSiteKeyword __NS_SYMBOL(GDataSiteKeyword)
#endif

#ifndef GDataSiteMessageBody
#define GDataSiteMessageBody __NS_SYMBOL(GDataSiteMessageBody)
#endif

#ifndef GDataSiteMessageDate
#define GDataSiteMessageDate __NS_SYMBOL(GDataSiteMessageDate)
#endif

#ifndef GDataSiteMessageLanguage
#define GDataSiteMessageLanguage __NS_SYMBOL(GDataSiteMessageLanguage)
#endif

#ifndef GDataSiteMessageRead
#define GDataSiteMessageRead __NS_SYMBOL(GDataSiteMessageRead)
#endif

#ifndef GDataSiteMessageSubject
#define GDataSiteMessageSubject __NS_SYMBOL(GDataSiteMessageSubject)
#endif

#ifndef GDataSitePreferredDomain
#define GDataSitePreferredDomain __NS_SYMBOL(GDataSitePreferredDomain)
#endif

#ifndef GDataSiteVerificationMethod
#define GDataSiteVerificationMethod __NS_SYMBOL(GDataSiteVerificationMethod)
#endif

#ifndef GDataSiteVerified
#define GDataSiteVerified __NS_SYMBOL(GDataSiteVerified)
#endif

#ifndef GDataSitemapLastDownloaded
#define GDataSitemapLastDownloaded __NS_SYMBOL(GDataSitemapLastDownloaded)
#endif

#ifndef GDataSitemapMarkupLanguage
#define GDataSitemapMarkupLanguage __NS_SYMBOL(GDataSitemapMarkupLanguage)
#endif

#ifndef GDataSitemapMobile
#define GDataSitemapMobile __NS_SYMBOL(GDataSitemapMobile)
#endif

#ifndef GDataSitemapMobileMarkupLanguage
#define GDataSitemapMobileMarkupLanguage __NS_SYMBOL(GDataSitemapMobileMarkupLanguage)
#endif

#ifndef GDataSitemapNews
#define GDataSitemapNews __NS_SYMBOL(GDataSitemapNews)
#endif

#ifndef GDataSitemapNewsPublicationLabel
#define GDataSitemapNewsPublicationLabel __NS_SYMBOL(GDataSitemapNewsPublicationLabel)
#endif

#ifndef GDataSitemapPublicationLabel
#define GDataSitemapPublicationLabel __NS_SYMBOL(GDataSitemapPublicationLabel)
#endif

#ifndef GDataSitemapStatus
#define GDataSitemapStatus __NS_SYMBOL(GDataSitemapStatus)
#endif

#ifndef GDataSitemapType
#define GDataSitemapType __NS_SYMBOL(GDataSitemapType)
#endif

#ifndef GDataSitemapURLCount
#define GDataSitemapURLCount __NS_SYMBOL(GDataSitemapURLCount)
#endif

#ifndef GDataSpreadsheetCell
#define GDataSpreadsheetCell __NS_SYMBOL(GDataSpreadsheetCell)
#endif

#ifndef GDataSpreadsheetColumn
#define GDataSpreadsheetColumn __NS_SYMBOL(GDataSpreadsheetColumn)
#endif

#ifndef GDataSpreadsheetConstants
#define GDataSpreadsheetConstants __NS_SYMBOL(GDataSpreadsheetConstants)
#endif

#ifndef GDataSpreadsheetCustomElement
#define GDataSpreadsheetCustomElement __NS_SYMBOL(GDataSpreadsheetCustomElement)
#endif

#ifndef GDataSpreadsheetData
#define GDataSpreadsheetData __NS_SYMBOL(GDataSpreadsheetData)
#endif

#ifndef GDataSpreadsheetField
#define GDataSpreadsheetField __NS_SYMBOL(GDataSpreadsheetField)
#endif

#ifndef GDataSpreadsheetHeader
#define GDataSpreadsheetHeader __NS_SYMBOL(GDataSpreadsheetHeader)
#endif

#ifndef GDataStructuredPostalAddress
#define GDataStructuredPostalAddress __NS_SYMBOL(GDataStructuredPostalAddress)
#endif

#ifndef GDataSuppressReplyNotificationsProperty
#define GDataSuppressReplyNotificationsProperty __NS_SYMBOL(GDataSuppressReplyNotificationsProperty)
#endif

#ifndef GDataSyncEventProperty
#define GDataSyncEventProperty __NS_SYMBOL(GDataSyncEventProperty)
#endif

#ifndef GDataTextConstruct
#define GDataTextConstruct __NS_SYMBOL(GDataTextConstruct)
#endif

#ifndef GDataThreadingCount
#define GDataThreadingCount __NS_SYMBOL(GDataThreadingCount)
#endif

#ifndef GDataThreadingLink
#define GDataThreadingLink __NS_SYMBOL(GDataThreadingLink)
#endif

#ifndef GDataThreadingTotal
#define GDataThreadingTotal __NS_SYMBOL(GDataThreadingTotal)
#endif

#ifndef GDataThreadingUpdated
#define GDataThreadingUpdated __NS_SYMBOL(GDataThreadingUpdated)
#endif

#ifndef GDataTimeZoneProperty
#define GDataTimeZoneProperty __NS_SYMBOL(GDataTimeZoneProperty)
#endif

#ifndef GDataTimesCleanedProperty
#define GDataTimesCleanedProperty __NS_SYMBOL(GDataTimesCleanedProperty)
#endif

#ifndef GDataTransparency
#define GDataTransparency __NS_SYMBOL(GDataTransparency)
#endif

#ifndef GDataUtilities
#define GDataUtilities __NS_SYMBOL(GDataUtilities)
#endif

#ifndef GDataValueConstruct
#define GDataValueConstruct __NS_SYMBOL(GDataValueConstruct)
#endif

#ifndef GDataValueElementConstruct
#define GDataValueElementConstruct __NS_SYMBOL(GDataValueElementConstruct)
#endif

#ifndef GDataVisibility
#define GDataVisibility __NS_SYMBOL(GDataVisibility)
#endif

#ifndef GDataVolumeContentVersion
#define GDataVolumeContentVersion __NS_SYMBOL(GDataVolumeContentVersion)
#endif

#ifndef GDataVolumeEmbeddability
#define GDataVolumeEmbeddability __NS_SYMBOL(GDataVolumeEmbeddability)
#endif

#ifndef GDataVolumeOpenAccess
#define GDataVolumeOpenAccess __NS_SYMBOL(GDataVolumeOpenAccess)
#endif

#ifndef GDataVolumePrice
#define GDataVolumePrice __NS_SYMBOL(GDataVolumePrice)
#endif

#ifndef GDataVolumePromotion
#define GDataVolumePromotion __NS_SYMBOL(GDataVolumePromotion)
#endif

#ifndef GDataVolumeReadingPosition
#define GDataVolumeReadingPosition __NS_SYMBOL(GDataVolumeReadingPosition)
#endif

#ifndef GDataVolumeReview
#define GDataVolumeReview __NS_SYMBOL(GDataVolumeReview)
#endif

#ifndef GDataVolumeViewability
#define GDataVolumeViewability __NS_SYMBOL(GDataVolumeViewability)
#endif

#ifndef GDataWebContent
#define GDataWebContent __NS_SYMBOL(GDataWebContent)
#endif

#ifndef GDataWebContentGadgetPref
#define GDataWebContentGadgetPref __NS_SYMBOL(GDataWebContentGadgetPref)
#endif

#ifndef GDataWebmasterToolsConstants
#define GDataWebmasterToolsConstants __NS_SYMBOL(GDataWebmasterToolsConstants)
#endif

#ifndef GDataWhen
#define GDataWhen __NS_SYMBOL(GDataWhen)
#endif

#ifndef GDataWhere
#define GDataWhere __NS_SYMBOL(GDataWhere)
#endif

#ifndef GDataWho
#define GDataWho __NS_SYMBOL(GDataWho)
#endif

#ifndef GDataWorksheetName
#define GDataWorksheetName __NS_SYMBOL(GDataWorksheetName)
#endif

#ifndef GDataWritersCanInvite
#define GDataWritersCanInvite __NS_SYMBOL(GDataWritersCanInvite)
#endif

#ifndef GDataXMLDocument
#define GDataXMLDocument __NS_SYMBOL(GDataXMLDocument)
#endif

#ifndef GDataXMLElement
#define GDataXMLElement __NS_SYMBOL(GDataXMLElement)
#endif

#ifndef GDataXMLNode
#define GDataXMLNode __NS_SYMBOL(GDataXMLNode)
#endif

#ifndef GDataYouTubeAboutMe
#define GDataYouTubeAboutMe __NS_SYMBOL(GDataYouTubeAboutMe)
#endif

#ifndef GDataYouTubeAccessControl
#define GDataYouTubeAccessControl __NS_SYMBOL(GDataYouTubeAccessControl)
#endif

#ifndef GDataYouTubeAge
#define GDataYouTubeAge __NS_SYMBOL(GDataYouTubeAge)
#endif

#ifndef GDataYouTubeAspectRatio
#define GDataYouTubeAspectRatio __NS_SYMBOL(GDataYouTubeAspectRatio)
#endif

#ifndef GDataYouTubeBooks
#define GDataYouTubeBooks __NS_SYMBOL(GDataYouTubeBooks)
#endif

#ifndef GDataYouTubeCommentRating
#define GDataYouTubeCommentRating __NS_SYMBOL(GDataYouTubeCommentRating)
#endif

#ifndef GDataYouTubeCompany
#define GDataYouTubeCompany __NS_SYMBOL(GDataYouTubeCompany)
#endif

#ifndef GDataYouTubeConstants
#define GDataYouTubeConstants __NS_SYMBOL(GDataYouTubeConstants)
#endif

#ifndef GDataYouTubeCountHint
#define GDataYouTubeCountHint __NS_SYMBOL(GDataYouTubeCountHint)
#endif

#ifndef GDataYouTubeCountryAttribute
#define GDataYouTubeCountryAttribute __NS_SYMBOL(GDataYouTubeCountryAttribute)
#endif

#ifndef GDataYouTubeDerived
#define GDataYouTubeDerived __NS_SYMBOL(GDataYouTubeDerived)
#endif

#ifndef GDataYouTubeDuration
#define GDataYouTubeDuration __NS_SYMBOL(GDataYouTubeDuration)
#endif

#ifndef GDataYouTubeFirstName
#define GDataYouTubeFirstName __NS_SYMBOL(GDataYouTubeFirstName)
#endif

#ifndef GDataYouTubeFormatAttribute
#define GDataYouTubeFormatAttribute __NS_SYMBOL(GDataYouTubeFormatAttribute)
#endif

#ifndef GDataYouTubeGender
#define GDataYouTubeGender __NS_SYMBOL(GDataYouTubeGender)
#endif

#ifndef GDataYouTubeHobbies
#define GDataYouTubeHobbies __NS_SYMBOL(GDataYouTubeHobbies)
#endif

#ifndef GDataYouTubeHometown
#define GDataYouTubeHometown __NS_SYMBOL(GDataYouTubeHometown)
#endif

#ifndef GDataYouTubeIncomplete
#define GDataYouTubeIncomplete __NS_SYMBOL(GDataYouTubeIncomplete)
#endif

#ifndef GDataYouTubeLastName
#define GDataYouTubeLastName __NS_SYMBOL(GDataYouTubeLastName)
#endif

#ifndef GDataYouTubeLocation
#define GDataYouTubeLocation __NS_SYMBOL(GDataYouTubeLocation)
#endif

#ifndef GDataYouTubeMediaGroup
#define GDataYouTubeMediaGroup __NS_SYMBOL(GDataYouTubeMediaGroup)
#endif

#ifndef GDataYouTubeMovies
#define GDataYouTubeMovies __NS_SYMBOL(GDataYouTubeMovies)
#endif

#ifndef GDataYouTubeMusic
#define GDataYouTubeMusic __NS_SYMBOL(GDataYouTubeMusic)
#endif

#ifndef GDataYouTubeNameAttribute
#define GDataYouTubeNameAttribute __NS_SYMBOL(GDataYouTubeNameAttribute)
#endif

#ifndef GDataYouTubeNonEmbeddable
#define GDataYouTubeNonEmbeddable __NS_SYMBOL(GDataYouTubeNonEmbeddable)
#endif

#ifndef GDataYouTubeOccupation
#define GDataYouTubeOccupation __NS_SYMBOL(GDataYouTubeOccupation)
#endif

#ifndef GDataYouTubePlaylistID
#define GDataYouTubePlaylistID __NS_SYMBOL(GDataYouTubePlaylistID)
#endif

#ifndef GDataYouTubePlaylistTitle
#define GDataYouTubePlaylistTitle __NS_SYMBOL(GDataYouTubePlaylistTitle)
#endif

#ifndef GDataYouTubePosition
#define GDataYouTubePosition __NS_SYMBOL(GDataYouTubePosition)
#endif

#ifndef GDataYouTubePrivate
#define GDataYouTubePrivate __NS_SYMBOL(GDataYouTubePrivate)
#endif

#ifndef GDataYouTubePublicationState
#define GDataYouTubePublicationState __NS_SYMBOL(GDataYouTubePublicationState)
#endif

#ifndef GDataYouTubeQueryString
#define GDataYouTubeQueryString __NS_SYMBOL(GDataYouTubeQueryString)
#endif

#ifndef GDataYouTubeRating
#define GDataYouTubeRating __NS_SYMBOL(GDataYouTubeRating)
#endif

#ifndef GDataYouTubeRecordedDate
#define GDataYouTubeRecordedDate __NS_SYMBOL(GDataYouTubeRecordedDate)
#endif

#ifndef GDataYouTubeRelationship
#define GDataYouTubeRelationship __NS_SYMBOL(GDataYouTubeRelationship)
#endif

#ifndef GDataYouTubeSchool
#define GDataYouTubeSchool __NS_SYMBOL(GDataYouTubeSchool)
#endif

#ifndef GDataYouTubeSpam
#define GDataYouTubeSpam __NS_SYMBOL(GDataYouTubeSpam)
#endif

#ifndef GDataYouTubeStatistics
#define GDataYouTubeStatistics __NS_SYMBOL(GDataYouTubeStatistics)
#endif

#ifndef GDataYouTubeStatus
#define GDataYouTubeStatus __NS_SYMBOL(GDataYouTubeStatus)
#endif

#ifndef GDataYouTubeToken
#define GDataYouTubeToken __NS_SYMBOL(GDataYouTubeToken)
#endif

#ifndef GDataYouTubeTypeAttribute
#define GDataYouTubeTypeAttribute __NS_SYMBOL(GDataYouTubeTypeAttribute)
#endif

#ifndef GDataYouTubeUploadedDate
#define GDataYouTubeUploadedDate __NS_SYMBOL(GDataYouTubeUploadedDate)
#endif

#ifndef GDataYouTubeUsername
#define GDataYouTubeUsername __NS_SYMBOL(GDataYouTubeUsername)
#endif

#ifndef GDataYouTubeVideoID
#define GDataYouTubeVideoID __NS_SYMBOL(GDataYouTubeVideoID)
#endif

#ifndef GTMCachedURLResponse
#define GTMCachedURLResponse __NS_SYMBOL(GTMCachedURLResponse)
#endif

#ifndef GTMCookieStorage
#define GTMCookieStorage __NS_SYMBOL(GTMCookieStorage)
#endif

#ifndef GTMGatherInputStream
#define GTMGatherInputStream __NS_SYMBOL(GTMGatherInputStream)
#endif

#ifndef GTMHTTPFetchHistory
#define GTMHTTPFetchHistory __NS_SYMBOL(GTMHTTPFetchHistory)
#endif

#ifndef GTMHTTPFetcher
#define GTMHTTPFetcher __NS_SYMBOL(GTMHTTPFetcher)
#endif

#ifndef GTMHTTPFetcherService
#define GTMHTTPFetcherService __NS_SYMBOL(GTMHTTPFetcherService)
#endif

#ifndef GTMHTTPUploadFetcher
#define GTMHTTPUploadFetcher __NS_SYMBOL(GTMHTTPUploadFetcher)
#endif

#ifndef GTMMIMEDocument
#define GTMMIMEDocument __NS_SYMBOL(GTMMIMEDocument)
#endif

#ifndef GTMMIMEPart
#define GTMMIMEPart __NS_SYMBOL(GTMMIMEPart)
#endif

#ifndef GTMOAuth2Authentication
#define GTMOAuth2Authentication __NS_SYMBOL(GTMOAuth2Authentication)
#endif

#ifndef GTMOAuth2AuthorizationArgs
#define GTMOAuth2AuthorizationArgs __NS_SYMBOL(GTMOAuth2AuthorizationArgs)
#endif

#ifndef GTMOAuth2Keychain
#define GTMOAuth2Keychain __NS_SYMBOL(GTMOAuth2Keychain)
#endif

#ifndef GTMOAuth2SignIn
#define GTMOAuth2SignIn __NS_SYMBOL(GTMOAuth2SignIn)
#endif

#ifndef GTMOAuth2ViewControllerTouch
#define GTMOAuth2ViewControllerTouch __NS_SYMBOL(GTMOAuth2ViewControllerTouch)
#endif

#ifndef GTMReadMonitorInputStream
#define GTMReadMonitorInputStream __NS_SYMBOL(GTMReadMonitorInputStream)
#endif

#ifndef GTMURLCache
#define GTMURLCache __NS_SYMBOL(GTMURLCache)
#endif

// Functions
#ifndef GDataFrameworkVersion
#define GDataFrameworkVersion __NS_SYMBOL(GDataFrameworkVersion)
#endif

#ifndef GDataFrameworkVersionString
#define GDataFrameworkVersionString __NS_SYMBOL(GDataFrameworkVersionString)
#endif

#ifndef GTMAssertSelectorNilOrImplementedWithArgs
#define GTMAssertSelectorNilOrImplementedWithArgs __NS_SYMBOL(GTMAssertSelectorNilOrImplementedWithArgs)
#endif

#ifndef AreEqualOrBothNil
#define AreEqualOrBothNil __NS_SYMBOL(AreEqualOrBothNil)
#endif

#ifndef AreBoolsEqual
#define AreBoolsEqual __NS_SYMBOL(AreBoolsEqual)
#endif

#ifndef GTMCleanedUserAgentString
#define GTMCleanedUserAgentString __NS_SYMBOL(GTMCleanedUserAgentString)
#endif

#ifndef GTMSystemVersionString
#define GTMSystemVersionString __NS_SYMBOL(GTMSystemVersionString)
#endif

#ifndef GTMApplicationIdentifier
#define GTMApplicationIdentifier __NS_SYMBOL(GTMApplicationIdentifier)
#endif

// Externs
#ifndef kGDataContactPriorityHigh
#define kGDataContactPriorityHigh __NS_SYMBOL(kGDataContactPriorityHigh)
#endif

#ifndef kGDataContactPriorityLow
#define kGDataContactPriorityLow __NS_SYMBOL(kGDataContactPriorityLow)
#endif

#ifndef kGDataContactPriorityNormal
#define kGDataContactPriorityNormal __NS_SYMBOL(kGDataContactPriorityNormal)
#endif

#ifndef kGDataContactSensitivityConfidential
#define kGDataContactSensitivityConfidential __NS_SYMBOL(kGDataContactSensitivityConfidential)
#endif

#ifndef kGDataContactSensitivityNormal
#define kGDataContactSensitivityNormal __NS_SYMBOL(kGDataContactSensitivityNormal)
#endif

#ifndef kGDataContactSensitivityPersonal
#define kGDataContactSensitivityPersonal __NS_SYMBOL(kGDataContactSensitivityPersonal)
#endif

#ifndef kGDataContactSensitivityPrivate
#define kGDataContactSensitivityPrivate __NS_SYMBOL(kGDataContactSensitivityPrivate)
#endif

#ifndef kGDataContactJotHome
#define kGDataContactJotHome __NS_SYMBOL(kGDataContactJotHome)
#endif

#ifndef kGDataContactJotKeywords
#define kGDataContactJotKeywords __NS_SYMBOL(kGDataContactJotKeywords)
#endif

#ifndef kGDataContactJotOther
#define kGDataContactJotOther __NS_SYMBOL(kGDataContactJotOther)
#endif

#ifndef kGDataContactJotUser
#define kGDataContactJotUser __NS_SYMBOL(kGDataContactJotUser)
#endif

#ifndef kGDataContactJotWork
#define kGDataContactJotWork __NS_SYMBOL(kGDataContactJotWork)
#endif

#ifndef kGDataContactExternalIDAccount
#define kGDataContactExternalIDAccount __NS_SYMBOL(kGDataContactExternalIDAccount)
#endif

#ifndef kGDataContactExternalIDCustomer
#define kGDataContactExternalIDCustomer __NS_SYMBOL(kGDataContactExternalIDCustomer)
#endif

#ifndef kGDataContactExternalIDNetwork
#define kGDataContactExternalIDNetwork __NS_SYMBOL(kGDataContactExternalIDNetwork)
#endif

#ifndef kGDataContactExternalIDOrganization
#define kGDataContactExternalIDOrganization __NS_SYMBOL(kGDataContactExternalIDOrganization)
#endif

#ifndef kGDataContactRelationAssistant
#define kGDataContactRelationAssistant __NS_SYMBOL(kGDataContactRelationAssistant)
#endif

#ifndef kGDataContactRelationBrother
#define kGDataContactRelationBrother __NS_SYMBOL(kGDataContactRelationBrother)
#endif

#ifndef kGDataContactRelationChild
#define kGDataContactRelationChild __NS_SYMBOL(kGDataContactRelationChild)
#endif

#ifndef kGDataContactRelationDomesticPartner
#define kGDataContactRelationDomesticPartner __NS_SYMBOL(kGDataContactRelationDomesticPartner)
#endif

#ifndef kGDataContactRelationFather
#define kGDataContactRelationFather __NS_SYMBOL(kGDataContactRelationFather)
#endif

#ifndef kGDataContactRelationFriend
#define kGDataContactRelationFriend __NS_SYMBOL(kGDataContactRelationFriend)
#endif

#ifndef kGDataContactRelationManager
#define kGDataContactRelationManager __NS_SYMBOL(kGDataContactRelationManager)
#endif

#ifndef kGDataContactRelationMother
#define kGDataContactRelationMother __NS_SYMBOL(kGDataContactRelationMother)
#endif

#ifndef kGDataContactRelationParent
#define kGDataContactRelationParent __NS_SYMBOL(kGDataContactRelationParent)
#endif

#ifndef kGDataContactRelationPartner
#define kGDataContactRelationPartner __NS_SYMBOL(kGDataContactRelationPartner)
#endif

#ifndef kGDataContactRelationReferredBy
#define kGDataContactRelationReferredBy __NS_SYMBOL(kGDataContactRelationReferredBy)
#endif

#ifndef kGDataContactRelationRelative
#define kGDataContactRelationRelative __NS_SYMBOL(kGDataContactRelationRelative)
#endif

#ifndef kGDataContactRelationSister
#define kGDataContactRelationSister __NS_SYMBOL(kGDataContactRelationSister)
#endif

#ifndef kGDataContactRelationSpouse
#define kGDataContactRelationSpouse __NS_SYMBOL(kGDataContactRelationSpouse)
#endif

#ifndef kGDataContactEventAnniversary
#define kGDataContactEventAnniversary __NS_SYMBOL(kGDataContactEventAnniversary)
#endif

#ifndef kGDataContactEventOther
#define kGDataContactEventOther __NS_SYMBOL(kGDataContactEventOther)
#endif

#ifndef kGDataContactGenderFemale
#define kGDataContactGenderFemale __NS_SYMBOL(kGDataContactGenderFemale)
#endif

#ifndef kGDataContactGenderMale
#define kGDataContactGenderMale __NS_SYMBOL(kGDataContactGenderMale)
#endif

#ifndef kGDataContactCalendarLinkHome
#define kGDataContactCalendarLinkHome __NS_SYMBOL(kGDataContactCalendarLinkHome)
#endif

#ifndef kGDataContactCalendarLinkWork
#define kGDataContactCalendarLinkWork __NS_SYMBOL(kGDataContactCalendarLinkWork)
#endif

#ifndef kGDataContactCalendarLinkFreeBusy
#define kGDataContactCalendarLinkFreeBusy __NS_SYMBOL(kGDataContactCalendarLinkFreeBusy)
#endif

#ifndef kGDataContactWebsiteLinkBlog
#define kGDataContactWebsiteLinkBlog __NS_SYMBOL(kGDataContactWebsiteLinkBlog)
#endif

#ifndef kGDataContactWebsiteLinkFTP
#define kGDataContactWebsiteLinkFTP __NS_SYMBOL(kGDataContactWebsiteLinkFTP)
#endif

#ifndef kGDataContactWebsiteLinkHome
#define kGDataContactWebsiteLinkHome __NS_SYMBOL(kGDataContactWebsiteLinkHome)
#endif

#ifndef kGDataContactWebsiteLinkHomePage
#define kGDataContactWebsiteLinkHomePage __NS_SYMBOL(kGDataContactWebsiteLinkHomePage)
#endif

#ifndef kGDataContactWebsiteLinkOther
#define kGDataContactWebsiteLinkOther __NS_SYMBOL(kGDataContactWebsiteLinkOther)
#endif

#ifndef kGDataContactWebsiteLinkProfile
#define kGDataContactWebsiteLinkProfile __NS_SYMBOL(kGDataContactWebsiteLinkProfile)
#endif

#ifndef kGDataContactWebsiteLinkWork
#define kGDataContactWebsiteLinkWork __NS_SYMBOL(kGDataContactWebsiteLinkWork)
#endif

#ifndef kGDataGoogleContactDefaultThinFeed
#define kGDataGoogleContactDefaultThinFeed __NS_SYMBOL(kGDataGoogleContactDefaultThinFeed)
#endif

#ifndef kGDataGoogleContactDefaultFullFeed
#define kGDataGoogleContactDefaultFullFeed __NS_SYMBOL(kGDataGoogleContactDefaultFullFeed)
#endif

#ifndef kGDataGoogleContactGroupDefaultThinFeed
#define kGDataGoogleContactGroupDefaultThinFeed __NS_SYMBOL(kGDataGoogleContactGroupDefaultThinFeed)
#endif

#ifndef kGDataGoogleContactGroupDefaultFullFeed
#define kGDataGoogleContactGroupDefaultFullFeed __NS_SYMBOL(kGDataGoogleContactGroupDefaultFullFeed)
#endif

#ifndef kGDataPostalAddressHome
#define kGDataPostalAddressHome __NS_SYMBOL(kGDataPostalAddressHome)
#endif

#ifndef kGDataPostalAddressWork
#define kGDataPostalAddressWork __NS_SYMBOL(kGDataPostalAddressWork)
#endif

#ifndef kGDataPostalAddressOther
#define kGDataPostalAddressOther __NS_SYMBOL(kGDataPostalAddressOther)
#endif

#ifndef kGDataPostalAddressLetters
#define kGDataPostalAddressLetters __NS_SYMBOL(kGDataPostalAddressLetters)
#endif

#ifndef kGDataPostalAddressParcels
#define kGDataPostalAddressParcels __NS_SYMBOL(kGDataPostalAddressParcels)
#endif

#ifndef kGDataPostalAddressNeither
#define kGDataPostalAddressNeither __NS_SYMBOL(kGDataPostalAddressNeither)
#endif

#ifndef kGDataPostalAddressBoth
#define kGDataPostalAddressBoth __NS_SYMBOL(kGDataPostalAddressBoth)
#endif

#ifndef kGDataPostalAddressGeneral
#define kGDataPostalAddressGeneral __NS_SYMBOL(kGDataPostalAddressGeneral)
#endif

#ifndef kGDataPostalAddressLocal
#define kGDataPostalAddressLocal __NS_SYMBOL(kGDataPostalAddressLocal)
#endif

#ifndef kGDataXMLXPathDefaultNamespacePrefix
#define kGDataXMLXPathDefaultNamespacePrefix __NS_SYMBOL(kGDataXMLXPathDefaultNamespacePrefix)
#endif

#ifndef kGDataBloggerDefaultServiceVersion
#define kGDataBloggerDefaultServiceVersion __NS_SYMBOL(kGDataBloggerDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceBlogger
#define kGDataNamespaceBlogger __NS_SYMBOL(kGDataNamespaceBlogger)
#endif

#ifndef kGDataCategoryBloggerPost
#define kGDataCategoryBloggerPost __NS_SYMBOL(kGDataCategoryBloggerPost)
#endif

#ifndef kGDataCategoryBloggerComment
#define kGDataCategoryBloggerComment __NS_SYMBOL(kGDataCategoryBloggerComment)
#endif

#ifndef kGDataLinkBloggerReplies
#define kGDataLinkBloggerReplies __NS_SYMBOL(kGDataLinkBloggerReplies)
#endif

#ifndef kGDataLinkBloggerEnclosure
#define kGDataLinkBloggerEnclosure __NS_SYMBOL(kGDataLinkBloggerEnclosure)
#endif

#ifndef kGDataLinkBloggerSettings
#define kGDataLinkBloggerSettings __NS_SYMBOL(kGDataLinkBloggerSettings)
#endif

#ifndef kGDataLinkBloggerTemplate
#define kGDataLinkBloggerTemplate __NS_SYMBOL(kGDataLinkBloggerTemplate)
#endif

#ifndef kGDataAnalyticsDefaultServiceVersion
#define kGDataAnalyticsDefaultServiceVersion __NS_SYMBOL(kGDataAnalyticsDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceAnalyticsDXP
#define kGDataNamespaceAnalyticsDXP __NS_SYMBOL(kGDataNamespaceAnalyticsDXP)
#endif

#ifndef kGDataNamespaceAnalyticsDXPPrefix
#define kGDataNamespaceAnalyticsDXPPrefix __NS_SYMBOL(kGDataNamespaceAnalyticsDXPPrefix)
#endif

#ifndef kGDataNamespaceAnalyticsGA
#define kGDataNamespaceAnalyticsGA __NS_SYMBOL(kGDataNamespaceAnalyticsGA)
#endif

#ifndef kGDataNamespaceAnalyticsGAPrefix
#define kGDataNamespaceAnalyticsGAPrefix __NS_SYMBOL(kGDataNamespaceAnalyticsGAPrefix)
#endif

#ifndef kGDataMetricTypeCurrency
#define kGDataMetricTypeCurrency __NS_SYMBOL(kGDataMetricTypeCurrency)
#endif

#ifndef kGDataMetricTypeFloat
#define kGDataMetricTypeFloat __NS_SYMBOL(kGDataMetricTypeFloat)
#endif

#ifndef kGDataMetricTypeInteger
#define kGDataMetricTypeInteger __NS_SYMBOL(kGDataMetricTypeInteger)
#endif

#ifndef kGDataMapsDefaultServiceVersion
#define kGDataMapsDefaultServiceVersion __NS_SYMBOL(kGDataMapsDefaultServiceVersion)
#endif

#ifndef kGDataMetricTypePercent
#define kGDataMetricTypePercent __NS_SYMBOL(kGDataMetricTypePercent)
#endif

#ifndef kGDataMetricTypeTime
#define kGDataMetricTypeTime __NS_SYMBOL(kGDataMetricTypeTime)
#endif

#ifndef kGDataNamespaceKML
#define kGDataNamespaceKML __NS_SYMBOL(kGDataNamespaceKML)
#endif

#ifndef kGDataMetricTypeUSCurrency
#define kGDataMetricTypeUSCurrency __NS_SYMBOL(kGDataMetricTypeUSCurrency)
#endif

#ifndef kGDataNamespaceKMLPrefix
#define kGDataNamespaceKMLPrefix __NS_SYMBOL(kGDataNamespaceKMLPrefix)
#endif

#ifndef kGDataCategoryMap
#define kGDataCategoryMap __NS_SYMBOL(kGDataCategoryMap)
#endif

#ifndef kGDataMatchTypeExact
#define kGDataMatchTypeExact __NS_SYMBOL(kGDataMatchTypeExact)
#endif

#ifndef kGDataCategoryMapFeature
#define kGDataCategoryMapFeature __NS_SYMBOL(kGDataCategoryMapFeature)
#endif

#ifndef kGDataMatchTypeHead
#define kGDataMatchTypeHead __NS_SYMBOL(kGDataMatchTypeHead)
#endif

#ifndef kGDataCategoryMapVersion
#define kGDataCategoryMapVersion __NS_SYMBOL(kGDataCategoryMapVersion)
#endif

#ifndef kGDataMatchTypeRegex
#define kGDataMatchTypeRegex __NS_SYMBOL(kGDataMatchTypeRegex)
#endif

#ifndef kGDataLinkMapView
#define kGDataLinkMapView __NS_SYMBOL(kGDataLinkMapView)
#endif

#ifndef kGDataMapPropertyAPIVisible
#define kGDataMapPropertyAPIVisible __NS_SYMBOL(kGDataMapPropertyAPIVisible)
#endif

#ifndef kGDataGoogleBooksMinViewabilityFull
#define kGDataGoogleBooksMinViewabilityFull __NS_SYMBOL(kGDataGoogleBooksMinViewabilityFull)
#endif

#ifndef kGDataGoogleBooksMinViewabilityNone
#define kGDataGoogleBooksMinViewabilityNone __NS_SYMBOL(kGDataGoogleBooksMinViewabilityNone)
#endif

#ifndef kGDataGoogleBooksMinViewabilityPartial
#define kGDataGoogleBooksMinViewabilityPartial __NS_SYMBOL(kGDataGoogleBooksMinViewabilityPartial)
#endif

#ifndef kGDataPhotosServiceV2
#define kGDataPhotosServiceV2 __NS_SYMBOL(kGDataPhotosServiceV2)
#endif

#ifndef kGDataPhotosDefaultServiceVersion
#define kGDataPhotosDefaultServiceVersion __NS_SYMBOL(kGDataPhotosDefaultServiceVersion)
#endif

#ifndef kGDataNamespacePhotos
#define kGDataNamespacePhotos __NS_SYMBOL(kGDataNamespacePhotos)
#endif

#ifndef kGDataNamespacePhotosPrefix
#define kGDataNamespacePhotosPrefix __NS_SYMBOL(kGDataNamespacePhotosPrefix)
#endif

#ifndef kGDataNamespacePhotosEXIF
#define kGDataNamespacePhotosEXIF __NS_SYMBOL(kGDataNamespacePhotosEXIF)
#endif

#ifndef kGDataNamespacePhotosEXIFPrefix
#define kGDataNamespacePhotosEXIFPrefix __NS_SYMBOL(kGDataNamespacePhotosEXIFPrefix)
#endif

#ifndef kGDataCategoryPhotosPhoto
#define kGDataCategoryPhotosPhoto __NS_SYMBOL(kGDataCategoryPhotosPhoto)
#endif

#ifndef kGDataCategoryPhotosAlbum
#define kGDataCategoryPhotosAlbum __NS_SYMBOL(kGDataCategoryPhotosAlbum)
#endif

#ifndef kGDataCategoryPhotosUser
#define kGDataCategoryPhotosUser __NS_SYMBOL(kGDataCategoryPhotosUser)
#endif

#ifndef kGDataCategoryPhotosTag
#define kGDataCategoryPhotosTag __NS_SYMBOL(kGDataCategoryPhotosTag)
#endif

#ifndef kGDataCategoryPhotosComment
#define kGDataCategoryPhotosComment __NS_SYMBOL(kGDataCategoryPhotosComment)
#endif

#ifndef kGDataCategoryPhotosPerson
#define kGDataCategoryPhotosPerson __NS_SYMBOL(kGDataCategoryPhotosPerson)
#endif

#ifndef kGDataPhotoSnippetTypePhotoDescription
#define kGDataPhotoSnippetTypePhotoDescription __NS_SYMBOL(kGDataPhotoSnippetTypePhotoDescription)
#endif

#ifndef kGDataPhotoSnippetTypePhotoTags
#define kGDataPhotoSnippetTypePhotoTags __NS_SYMBOL(kGDataPhotoSnippetTypePhotoTags)
#endif

#ifndef kGDataPhotoSnippetTypeAlbumTitle
#define kGDataPhotoSnippetTypeAlbumTitle __NS_SYMBOL(kGDataPhotoSnippetTypeAlbumTitle)
#endif

#ifndef kGDataPhotoSnippetTypeAlbumDescription
#define kGDataPhotoSnippetTypeAlbumDescription __NS_SYMBOL(kGDataPhotoSnippetTypeAlbumDescription)
#endif

#ifndef kGDataPhotoSnippetTypeAlbumLocation
#define kGDataPhotoSnippetTypeAlbumLocation __NS_SYMBOL(kGDataPhotoSnippetTypeAlbumLocation)
#endif

#ifndef kGDataContactServiceV2
#define kGDataContactServiceV2 __NS_SYMBOL(kGDataContactServiceV2)
#endif

#ifndef kGDataContactServiceV3
#define kGDataContactServiceV3 __NS_SYMBOL(kGDataContactServiceV3)
#endif

#ifndef kGDataContactDefaultServiceVersion
#define kGDataContactDefaultServiceVersion __NS_SYMBOL(kGDataContactDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceContact
#define kGDataNamespaceContact __NS_SYMBOL(kGDataNamespaceContact)
#endif

#ifndef kGDataNamespaceContactPrefix
#define kGDataNamespaceContactPrefix __NS_SYMBOL(kGDataNamespaceContactPrefix)
#endif

#ifndef kGDataCategoryContact
#define kGDataCategoryContact __NS_SYMBOL(kGDataCategoryContact)
#endif

#ifndef kGDataCategoryContactGroup
#define kGDataCategoryContactGroup __NS_SYMBOL(kGDataCategoryContactGroup)
#endif

#ifndef kGDataCategoryContactProfile
#define kGDataCategoryContactProfile __NS_SYMBOL(kGDataCategoryContactProfile)
#endif

#ifndef kGDataContactHome
#define kGDataContactHome __NS_SYMBOL(kGDataContactHome)
#endif

#ifndef kGDataContactWork
#define kGDataContactWork __NS_SYMBOL(kGDataContactWork)
#endif

#ifndef kGDataContactOther
#define kGDataContactOther __NS_SYMBOL(kGDataContactOther)
#endif

#ifndef kGDataContactPhotoRel
#define kGDataContactPhotoRel __NS_SYMBOL(kGDataContactPhotoRel)
#endif

#ifndef kGDataContactEditPhotoRel
#define kGDataContactEditPhotoRel __NS_SYMBOL(kGDataContactEditPhotoRel)
#endif

#ifndef kGDataBatchOperationInsert
#define kGDataBatchOperationInsert __NS_SYMBOL(kGDataBatchOperationInsert)
#endif

#ifndef kGDataBatchOperationUpdate
#define kGDataBatchOperationUpdate __NS_SYMBOL(kGDataBatchOperationUpdate)
#endif

#ifndef kGDataBatchOperationDelete
#define kGDataBatchOperationDelete __NS_SYMBOL(kGDataBatchOperationDelete)
#endif

#ifndef kGDataBatchOperationQuery
#define kGDataBatchOperationQuery __NS_SYMBOL(kGDataBatchOperationQuery)
#endif

#ifndef kGDataRoleNone
#define kGDataRoleNone __NS_SYMBOL(kGDataRoleNone)
#endif

#ifndef kGDataRolePeeker
#define kGDataRolePeeker __NS_SYMBOL(kGDataRolePeeker)
#endif

#ifndef kGDataRoleReader
#define kGDataRoleReader __NS_SYMBOL(kGDataRoleReader)
#endif

#ifndef kGDataRoleWriter
#define kGDataRoleWriter __NS_SYMBOL(kGDataRoleWriter)
#endif

#ifndef kGDataRoleOwner
#define kGDataRoleOwner __NS_SYMBOL(kGDataRoleOwner)
#endif

#ifndef kGDataRoleCommenter
#define kGDataRoleCommenter __NS_SYMBOL(kGDataRoleCommenter)
#endif

#ifndef kGDataSpreadsheetServiceV2
#define kGDataSpreadsheetServiceV2 __NS_SYMBOL(kGDataSpreadsheetServiceV2)
#endif

#ifndef kGDataSpreadsheetServiceV3
#define kGDataSpreadsheetServiceV3 __NS_SYMBOL(kGDataSpreadsheetServiceV3)
#endif

#ifndef kGDataSpreadsheetDefaultServiceVersion
#define kGDataSpreadsheetDefaultServiceVersion __NS_SYMBOL(kGDataSpreadsheetDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceGSpread
#define kGDataNamespaceGSpread __NS_SYMBOL(kGDataNamespaceGSpread)
#endif

#ifndef kGDataNamespaceGSpreadPrefix
#define kGDataNamespaceGSpreadPrefix __NS_SYMBOL(kGDataNamespaceGSpreadPrefix)
#endif

#ifndef kGDataNamespaceGSpreadCustom
#define kGDataNamespaceGSpreadCustom __NS_SYMBOL(kGDataNamespaceGSpreadCustom)
#endif

#ifndef kGDataNamespaceGSpreadCustomPrefix
#define kGDataNamespaceGSpreadCustomPrefix __NS_SYMBOL(kGDataNamespaceGSpreadCustomPrefix)
#endif

#ifndef kGDataNamespaceGViz
#define kGDataNamespaceGViz __NS_SYMBOL(kGDataNamespaceGViz)
#endif

#ifndef kGDataNamespaceGVizPrefix
#define kGDataNamespaceGVizPrefix __NS_SYMBOL(kGDataNamespaceGVizPrefix)
#endif

#ifndef kGDataLinkWorksheetsFeed
#define kGDataLinkWorksheetsFeed __NS_SYMBOL(kGDataLinkWorksheetsFeed)
#endif

#ifndef kGDataLinkTablesFeed
#define kGDataLinkTablesFeed __NS_SYMBOL(kGDataLinkTablesFeed)
#endif

#ifndef kGDataLinkListFeed
#define kGDataLinkListFeed __NS_SYMBOL(kGDataLinkListFeed)
#endif

#ifndef kGDataLinkCellsFeed
#define kGDataLinkCellsFeed __NS_SYMBOL(kGDataLinkCellsFeed)
#endif

#ifndef kGDataLinkSource
#define kGDataLinkSource __NS_SYMBOL(kGDataLinkSource)
#endif

#ifndef kGDataLinkRecordsFeed
#define kGDataLinkRecordsFeed __NS_SYMBOL(kGDataLinkRecordsFeed)
#endif

#ifndef kGDataLinkGviz
#define kGDataLinkGviz __NS_SYMBOL(kGDataLinkGviz)
#endif

#ifndef kGDataCategorySchemeSpreadsheet
#define kGDataCategorySchemeSpreadsheet __NS_SYMBOL(kGDataCategorySchemeSpreadsheet)
#endif

#ifndef kGDataCategorySpreadsheet
#define kGDataCategorySpreadsheet __NS_SYMBOL(kGDataCategorySpreadsheet)
#endif

#ifndef kGDataCategorySpreadsheetCell
#define kGDataCategorySpreadsheetCell __NS_SYMBOL(kGDataCategorySpreadsheetCell)
#endif

#ifndef kGDataCategorySpreadsheetList
#define kGDataCategorySpreadsheetList __NS_SYMBOL(kGDataCategorySpreadsheetList)
#endif

#ifndef kGDataCategorySpreadsheetRecord
#define kGDataCategorySpreadsheetRecord __NS_SYMBOL(kGDataCategorySpreadsheetRecord)
#endif

#ifndef kGDataCategorySpreadsheetTable
#define kGDataCategorySpreadsheetTable __NS_SYMBOL(kGDataCategorySpreadsheetTable)
#endif

#ifndef kGDataBooksDefaultServiceVersion
#define kGDataBooksDefaultServiceVersion __NS_SYMBOL(kGDataBooksDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceBooks
#define kGDataNamespaceBooks __NS_SYMBOL(kGDataNamespaceBooks)
#endif

#ifndef kGDataNamespaceBooksPrefix
#define kGDataNamespaceBooksPrefix __NS_SYMBOL(kGDataNamespaceBooksPrefix)
#endif

#ifndef kGDataCategoryBooksVolume
#define kGDataCategoryBooksVolume __NS_SYMBOL(kGDataCategoryBooksVolume)
#endif

#ifndef kGDataCategoryBooksCollection
#define kGDataCategoryBooksCollection __NS_SYMBOL(kGDataCategoryBooksCollection)
#endif

#ifndef kGDataBooksViewAllPages
#define kGDataBooksViewAllPages __NS_SYMBOL(kGDataBooksViewAllPages)
#endif

#ifndef kGDataBooksViewNoPages
#define kGDataBooksViewNoPages __NS_SYMBOL(kGDataBooksViewNoPages)
#endif

#ifndef kGDataBooksViewPartial
#define kGDataBooksViewPartial __NS_SYMBOL(kGDataBooksViewPartial)
#endif

#ifndef kGDataBooksViewUnknown
#define kGDataBooksViewUnknown __NS_SYMBOL(kGDataBooksViewUnknown)
#endif

#ifndef kGDataBooksEmbeddable
#define kGDataBooksEmbeddable __NS_SYMBOL(kGDataBooksEmbeddable)
#endif

#ifndef kGDataBooksNotEmbeddable
#define kGDataBooksNotEmbeddable __NS_SYMBOL(kGDataBooksNotEmbeddable)
#endif

#ifndef kGDataBooksEnabled
#define kGDataBooksEnabled __NS_SYMBOL(kGDataBooksEnabled)
#endif

#ifndef kGDataBooksDisabled
#define kGDataBooksDisabled __NS_SYMBOL(kGDataBooksDisabled)
#endif

#ifndef kGDataBooksActionChooseBookmark
#define kGDataBooksActionChooseBookmark __NS_SYMBOL(kGDataBooksActionChooseBookmark)
#endif

#ifndef kGDataBooksActionSearchInBook
#define kGDataBooksActionSearchInBook __NS_SYMBOL(kGDataBooksActionSearchInBook)
#endif

#ifndef kGDataBooksActionNextPage
#define kGDataBooksActionNextPage __NS_SYMBOL(kGDataBooksActionNextPage)
#endif

#ifndef kGDataBooksActionPrevPage
#define kGDataBooksActionPrevPage __NS_SYMBOL(kGDataBooksActionPrevPage)
#endif

#ifndef kGDataBooksActionScrollToPage
#define kGDataBooksActionScrollToPage __NS_SYMBOL(kGDataBooksActionScrollToPage)
#endif

#ifndef kGDataBooksActionSelectChapter
#define kGDataBooksActionSelectChapter __NS_SYMBOL(kGDataBooksActionSelectChapter)
#endif

#ifndef kGDataBooksInfoRel
#define kGDataBooksInfoRel __NS_SYMBOL(kGDataBooksInfoRel)
#endif

#ifndef kGDataBooksPreviewRel
#define kGDataBooksPreviewRel __NS_SYMBOL(kGDataBooksPreviewRel)
#endif

#ifndef kGDataBooksThumbnailRel
#define kGDataBooksThumbnailRel __NS_SYMBOL(kGDataBooksThumbnailRel)
#endif

#ifndef kGDataBooksAnnotationRel
#define kGDataBooksAnnotationRel __NS_SYMBOL(kGDataBooksAnnotationRel)
#endif

#ifndef kGDataBooksBuyLinkRel
#define kGDataBooksBuyLinkRel __NS_SYMBOL(kGDataBooksBuyLinkRel)
#endif

#ifndef kGDataBooksEPubDownloadRel
#define kGDataBooksEPubDownloadRel __NS_SYMBOL(kGDataBooksEPubDownloadRel)
#endif

#ifndef kGDataBooksEPubToken
#define kGDataBooksEPubToken __NS_SYMBOL(kGDataBooksEPubToken)
#endif

#ifndef kGDataBooksLabelsScheme
#define kGDataBooksLabelsScheme __NS_SYMBOL(kGDataBooksLabelsScheme)
#endif

#ifndef kGDataBooksTypeIDScheme
#define kGDataBooksTypeIDScheme __NS_SYMBOL(kGDataBooksTypeIDScheme)
#endif

#ifndef kGDataScopeTypeUser
#define kGDataScopeTypeUser __NS_SYMBOL(kGDataScopeTypeUser)
#endif

#ifndef kGDataScopeTypeDomain
#define kGDataScopeTypeDomain __NS_SYMBOL(kGDataScopeTypeDomain)
#endif

#ifndef kGDataScopeTypeDefault
#define kGDataScopeTypeDefault __NS_SYMBOL(kGDataScopeTypeDefault)
#endif

#ifndef kGDataScopeTypeGroup
#define kGDataScopeTypeGroup __NS_SYMBOL(kGDataScopeTypeGroup)
#endif

#ifndef kGDataDocsServiceV2
#define kGDataDocsServiceV2 __NS_SYMBOL(kGDataDocsServiceV2)
#endif

#ifndef kGDataDocsServiceV3
#define kGDataDocsServiceV3 __NS_SYMBOL(kGDataDocsServiceV3)
#endif

#ifndef kGDataDocsDefaultServiceVersion
#define kGDataDocsDefaultServiceVersion __NS_SYMBOL(kGDataDocsDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceDocuments
#define kGDataNamespaceDocuments __NS_SYMBOL(kGDataNamespaceDocuments)
#endif

#ifndef kGDataNamespaceDocumentsPrefix
#define kGDataNamespaceDocumentsPrefix __NS_SYMBOL(kGDataNamespaceDocumentsPrefix)
#endif

#ifndef kGDataCategoryDocFolders
#define kGDataCategoryDocFolders __NS_SYMBOL(kGDataCategoryDocFolders)
#endif

#ifndef kGDataCategoryDocParent
#define kGDataCategoryDocParent __NS_SYMBOL(kGDataCategoryDocParent)
#endif

#ifndef kGDataCategoryDrawingDoc
#define kGDataCategoryDrawingDoc __NS_SYMBOL(kGDataCategoryDrawingDoc)
#endif

#ifndef kGDataCategoryFolderDoc
#define kGDataCategoryFolderDoc __NS_SYMBOL(kGDataCategoryFolderDoc)
#endif

#ifndef kGDataCategoryFileDoc
#define kGDataCategoryFileDoc __NS_SYMBOL(kGDataCategoryFileDoc)
#endif

#ifndef kGDataCategoryPDFDoc
#define kGDataCategoryPDFDoc __NS_SYMBOL(kGDataCategoryPDFDoc)
#endif

#ifndef kGDataCategoryPresentationDoc
#define kGDataCategoryPresentationDoc __NS_SYMBOL(kGDataCategoryPresentationDoc)
#endif

#ifndef kGDataCategorySiteDoc
#define kGDataCategorySiteDoc __NS_SYMBOL(kGDataCategorySiteDoc)
#endif

#ifndef kGDataCategorySpreadsheetDoc
#define kGDataCategorySpreadsheetDoc __NS_SYMBOL(kGDataCategorySpreadsheetDoc)
#endif

#ifndef kGDataCategoryStandardDoc
#define kGDataCategoryStandardDoc __NS_SYMBOL(kGDataCategoryStandardDoc)
#endif

#ifndef kGDataCategoryTableDoc
#define kGDataCategoryTableDoc __NS_SYMBOL(kGDataCategoryTableDoc)
#endif

#ifndef kGDataCategoryDocChange
#define kGDataCategoryDocChange __NS_SYMBOL(kGDataCategoryDocChange)
#endif

#ifndef kGDataCategoryDocListMetadata
#define kGDataCategoryDocListMetadata __NS_SYMBOL(kGDataCategoryDocListMetadata)
#endif

#ifndef kGDataCategoryDocItem
#define kGDataCategoryDocItem __NS_SYMBOL(kGDataCategoryDocItem)
#endif

#ifndef kGDataCategoryDocRevision
#define kGDataCategoryDocRevision __NS_SYMBOL(kGDataCategoryDocRevision)
#endif

#ifndef kGDataCategoryLabelHasPathToRoot
#define kGDataCategoryLabelHasPathToRoot __NS_SYMBOL(kGDataCategoryLabelHasPathToRoot)
#endif

#ifndef kGDataDocsPublishedRel
#define kGDataDocsPublishedRel __NS_SYMBOL(kGDataDocsPublishedRel)
#endif

#ifndef kGDataDocsRevisionsRel
#define kGDataDocsRevisionsRel __NS_SYMBOL(kGDataDocsRevisionsRel)
#endif

#ifndef kGDataDocsThumbnailRel
#define kGDataDocsThumbnailRel __NS_SYMBOL(kGDataDocsThumbnailRel)
#endif

#ifndef kGDataDocsAlternateSelfRel
#define kGDataDocsAlternateSelfRel __NS_SYMBOL(kGDataDocsAlternateSelfRel)
#endif

#ifndef kGDataDocsRootFolderHref
#define kGDataDocsRootFolderHref __NS_SYMBOL(kGDataDocsRootFolderHref)
#endif

#ifndef kGDataDocsFeatureNameOCR
#define kGDataDocsFeatureNameOCR __NS_SYMBOL(kGDataDocsFeatureNameOCR)
#endif

#ifndef kGDataDocsFeatureNameTranslation
#define kGDataDocsFeatureNameTranslation __NS_SYMBOL(kGDataDocsFeatureNameTranslation)
#endif

#ifndef kGDataDocsFeatureNameUploadAny
#define kGDataDocsFeatureNameUploadAny __NS_SYMBOL(kGDataDocsFeatureNameUploadAny)
#endif

#ifndef kGDataWebmasterToolsServiceV2
#define kGDataWebmasterToolsServiceV2 __NS_SYMBOL(kGDataWebmasterToolsServiceV2)
#endif

#ifndef kGDataWebmasterToolsDefaultServiceVersion
#define kGDataWebmasterToolsDefaultServiceVersion __NS_SYMBOL(kGDataWebmasterToolsDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceWebmasterTools
#define kGDataNamespaceWebmasterTools __NS_SYMBOL(kGDataNamespaceWebmasterTools)
#endif

#ifndef kGDataNamespaceWebmasterToolsPrefix
#define kGDataNamespaceWebmasterToolsPrefix __NS_SYMBOL(kGDataNamespaceWebmasterToolsPrefix)
#endif

#ifndef kGDataCategorySiteInfo
#define kGDataCategorySiteInfo __NS_SYMBOL(kGDataCategorySiteInfo)
#endif

#ifndef kGDataCategorySitesFeed
#define kGDataCategorySitesFeed __NS_SYMBOL(kGDataCategorySitesFeed)
#endif

#ifndef kGDataCategorySitemapsFeed
#define kGDataCategorySitemapsFeed __NS_SYMBOL(kGDataCategorySitemapsFeed)
#endif

#ifndef kGDataCategorySitemapRegular
#define kGDataCategorySitemapRegular __NS_SYMBOL(kGDataCategorySitemapRegular)
#endif

#ifndef kGDataCategorySitemapMobile
#define kGDataCategorySitemapMobile __NS_SYMBOL(kGDataCategorySitemapMobile)
#endif

#ifndef kGDataCategorySitemapNews
#define kGDataCategorySitemapNews __NS_SYMBOL(kGDataCategorySitemapNews)
#endif

#ifndef kGDataCategorySiteMessage
#define kGDataCategorySiteMessage __NS_SYMBOL(kGDataCategorySiteMessage)
#endif

#ifndef kGDataCategorySiteMessagesFeed
#define kGDataCategorySiteMessagesFeed __NS_SYMBOL(kGDataCategorySiteMessagesFeed)
#endif

#ifndef kGDataCategorySiteKeyword
#define kGDataCategorySiteKeyword __NS_SYMBOL(kGDataCategorySiteKeyword)
#endif

#ifndef kGDataCategorySiteCrawlIssue
#define kGDataCategorySiteCrawlIssue __NS_SYMBOL(kGDataCategorySiteCrawlIssue)
#endif

#ifndef kGDataSiteVerificationRel
#define kGDataSiteVerificationRel __NS_SYMBOL(kGDataSiteVerificationRel)
#endif

#ifndef kGDataSiteSitemapsRel
#define kGDataSiteSitemapsRel __NS_SYMBOL(kGDataSiteSitemapsRel)
#endif

#ifndef kGDataSiteCrawlRateSlowest
#define kGDataSiteCrawlRateSlowest __NS_SYMBOL(kGDataSiteCrawlRateSlowest)
#endif

#ifndef kGDataSiteCrawlRateSlower
#define kGDataSiteCrawlRateSlower __NS_SYMBOL(kGDataSiteCrawlRateSlower)
#endif

#ifndef kGDataSiteCrawlRateNormal
#define kGDataSiteCrawlRateNormal __NS_SYMBOL(kGDataSiteCrawlRateNormal)
#endif

#ifndef kGDataSiteCrawlRateFaster
#define kGDataSiteCrawlRateFaster __NS_SYMBOL(kGDataSiteCrawlRateFaster)
#endif

#ifndef kGDataSiteCrawlRateFastest
#define kGDataSiteCrawlRateFastest __NS_SYMBOL(kGDataSiteCrawlRateFastest)
#endif

#ifndef kGDataSiteCrawlPreferredDomainNone
#define kGDataSiteCrawlPreferredDomainNone __NS_SYMBOL(kGDataSiteCrawlPreferredDomainNone)
#endif

#ifndef kGDataSiteCrawlPreferredDomainWWW
#define kGDataSiteCrawlPreferredDomainWWW __NS_SYMBOL(kGDataSiteCrawlPreferredDomainWWW)
#endif

#ifndef kGDataSiteCrawlPreferredDomainNoWWW
#define kGDataSiteCrawlPreferredDomainNoWWW __NS_SYMBOL(kGDataSiteCrawlPreferredDomainNoWWW)
#endif

#ifndef kGDataSiteKeywordInternal
#define kGDataSiteKeywordInternal __NS_SYMBOL(kGDataSiteKeywordInternal)
#endif

#ifndef kGDataSiteKeywordExternal
#define kGDataSiteKeywordExternal __NS_SYMBOL(kGDataSiteKeywordExternal)
#endif

#ifndef kGDataSiteCrawlTypeMobileCHTML
#define kGDataSiteCrawlTypeMobileCHTML __NS_SYMBOL(kGDataSiteCrawlTypeMobileCHTML)
#endif

#ifndef kGDataSiteCrawlTypeMobileXHTMLWML
#define kGDataSiteCrawlTypeMobileXHTMLWML __NS_SYMBOL(kGDataSiteCrawlTypeMobileXHTMLWML)
#endif

#ifndef kGDataSiteCrawlTypeNews
#define kGDataSiteCrawlTypeNews __NS_SYMBOL(kGDataSiteCrawlTypeNews)
#endif

#ifndef kGDataSiteCrawlTypeWeb
#define kGDataSiteCrawlTypeWeb __NS_SYMBOL(kGDataSiteCrawlTypeWeb)
#endif

#ifndef kGDataSiteCrawlIssueTypeHTTPError
#define kGDataSiteCrawlIssueTypeHTTPError __NS_SYMBOL(kGDataSiteCrawlIssueTypeHTTPError)
#endif

#ifndef kGDataSiteCrawlIssueTypeInSitemap
#define kGDataSiteCrawlIssueTypeInSitemap __NS_SYMBOL(kGDataSiteCrawlIssueTypeInSitemap)
#endif

#ifndef kGDataSiteCrawlIssueTypeNewsError
#define kGDataSiteCrawlIssueTypeNewsError __NS_SYMBOL(kGDataSiteCrawlIssueTypeNewsError)
#endif

#ifndef kGDataSiteCrawlIssueTypeNotFollowed
#define kGDataSiteCrawlIssueTypeNotFollowed __NS_SYMBOL(kGDataSiteCrawlIssueTypeNotFollowed)
#endif

#ifndef kGDataSiteCrawlIssueTypeNotFound
#define kGDataSiteCrawlIssueTypeNotFound __NS_SYMBOL(kGDataSiteCrawlIssueTypeNotFound)
#endif

#ifndef kGDataGooglePhotosImageSizeDownloadable
#define kGDataGooglePhotosImageSizeDownloadable __NS_SYMBOL(kGDataGooglePhotosImageSizeDownloadable)
#endif

#ifndef kGDataSiteCrawlIssueTypeRestrictedRobotsTxt
#define kGDataSiteCrawlIssueTypeRestrictedRobotsTxt __NS_SYMBOL(kGDataSiteCrawlIssueTypeRestrictedRobotsTxt)
#endif

#ifndef kGDataSiteCrawlIssueTypeTimedOut
#define kGDataSiteCrawlIssueTypeTimedOut __NS_SYMBOL(kGDataSiteCrawlIssueTypeTimedOut)
#endif

#ifndef kGDataSiteCrawlIssueTypeUnreachable
#define kGDataSiteCrawlIssueTypeUnreachable __NS_SYMBOL(kGDataSiteCrawlIssueTypeUnreachable)
#endif

#ifndef kGDataYouTubePubStateIncomplete
#define kGDataYouTubePubStateIncomplete __NS_SYMBOL(kGDataYouTubePubStateIncomplete)
#endif

#ifndef kGDataYouTubePubStateProcessing
#define kGDataYouTubePubStateProcessing __NS_SYMBOL(kGDataYouTubePubStateProcessing)
#endif

#ifndef kGDataYouTubePubStateRejected
#define kGDataYouTubePubStateRejected __NS_SYMBOL(kGDataYouTubePubStateRejected)
#endif

#ifndef kGDataYouTubePubStateFailed
#define kGDataYouTubePubStateFailed __NS_SYMBOL(kGDataYouTubePubStateFailed)
#endif

#ifndef kGDataYouTubePubStateDeleted
#define kGDataYouTubePubStateDeleted __NS_SYMBOL(kGDataYouTubePubStateDeleted)
#endif

#ifndef kGDataYouTubePubStateRestricted
#define kGDataYouTubePubStateRestricted __NS_SYMBOL(kGDataYouTubePubStateRestricted)
#endif

#ifndef kGDataSiteVerificationMethodMetatag
#define kGDataSiteVerificationMethodMetatag __NS_SYMBOL(kGDataSiteVerificationMethodMetatag)
#endif

#ifndef kGDataSiteVerificationMethodHTMLPage
#define kGDataSiteVerificationMethodHTMLPage __NS_SYMBOL(kGDataSiteVerificationMethodHTMLPage)
#endif

#ifndef kGDataEventWhereEventLocation
#define kGDataEventWhereEventLocation __NS_SYMBOL(kGDataEventWhereEventLocation)
#endif

#ifndef kGDataEventWhereAlternate
#define kGDataEventWhereAlternate __NS_SYMBOL(kGDataEventWhereAlternate)
#endif

#ifndef kGDataEventWhereParking
#define kGDataEventWhereParking __NS_SYMBOL(kGDataEventWhereParking)
#endif

#ifndef kGDataYouTubeAccessControlRate
#define kGDataYouTubeAccessControlRate __NS_SYMBOL(kGDataYouTubeAccessControlRate)
#endif

#ifndef kGDataYouTubeAccessControlComment
#define kGDataYouTubeAccessControlComment __NS_SYMBOL(kGDataYouTubeAccessControlComment)
#endif

#ifndef kGDataReminderMethodSMS
#define kGDataReminderMethodSMS __NS_SYMBOL(kGDataReminderMethodSMS)
#endif

#ifndef kGDataYouTubeAccessControlCommentVote
#define kGDataYouTubeAccessControlCommentVote __NS_SYMBOL(kGDataYouTubeAccessControlCommentVote)
#endif

#ifndef kGDataReminderMethodEmail
#define kGDataReminderMethodEmail __NS_SYMBOL(kGDataReminderMethodEmail)
#endif

#ifndef kGDataYouTubeAccessControlVideoRespond
#define kGDataYouTubeAccessControlVideoRespond __NS_SYMBOL(kGDataYouTubeAccessControlVideoRespond)
#endif

#ifndef kGDataReminderMethodAlert
#define kGDataReminderMethodAlert __NS_SYMBOL(kGDataReminderMethodAlert)
#endif

#ifndef kGDataYouTubeAccessControlEmbed
#define kGDataYouTubeAccessControlEmbed __NS_SYMBOL(kGDataYouTubeAccessControlEmbed)
#endif

#ifndef kGDataReminderMethodNone
#define kGDataReminderMethodNone __NS_SYMBOL(kGDataReminderMethodNone)
#endif

#ifndef kGDataYouTubeAccessControlList
#define kGDataYouTubeAccessControlList __NS_SYMBOL(kGDataYouTubeAccessControlList)
#endif

#ifndef kGDataReminderMethodAll
#define kGDataReminderMethodAll __NS_SYMBOL(kGDataReminderMethodAll)
#endif

#ifndef kGDataYouTubeAccessControlSyndicate
#define kGDataYouTubeAccessControlSyndicate __NS_SYMBOL(kGDataYouTubeAccessControlSyndicate)
#endif

#ifndef kGDataYouTubeAccessControlPermissionAllowed
#define kGDataYouTubeAccessControlPermissionAllowed __NS_SYMBOL(kGDataYouTubeAccessControlPermissionAllowed)
#endif

#ifndef kGDataYouTubeAccessControlPermissionDenied
#define kGDataYouTubeAccessControlPermissionDenied __NS_SYMBOL(kGDataYouTubeAccessControlPermissionDenied)
#endif

#ifndef kGDataYouTubeAccessControlPermissionModerated
#define kGDataYouTubeAccessControlPermissionModerated __NS_SYMBOL(kGDataYouTubeAccessControlPermissionModerated)
#endif

#ifndef kGDataRatingPrice
#define kGDataRatingPrice __NS_SYMBOL(kGDataRatingPrice)
#endif

#ifndef kGDataRatingQuality
#define kGDataRatingQuality __NS_SYMBOL(kGDataRatingQuality)
#endif

#ifndef kGDataIMProtocolAIM
#define kGDataIMProtocolAIM __NS_SYMBOL(kGDataIMProtocolAIM)
#endif

#ifndef kGDataIMProtocolGoogleTalk
#define kGDataIMProtocolGoogleTalk __NS_SYMBOL(kGDataIMProtocolGoogleTalk)
#endif

#ifndef kGDataIMProtocolICQ
#define kGDataIMProtocolICQ __NS_SYMBOL(kGDataIMProtocolICQ)
#endif

#ifndef kGDataIMProtocolJabber
#define kGDataIMProtocolJabber __NS_SYMBOL(kGDataIMProtocolJabber)
#endif

#ifndef kGDataIMProtocolMSN
#define kGDataIMProtocolMSN __NS_SYMBOL(kGDataIMProtocolMSN)
#endif

#ifndef kGDataIMProtocolNetMeeting
#define kGDataIMProtocolNetMeeting __NS_SYMBOL(kGDataIMProtocolNetMeeting)
#endif

#ifndef kGDataIMProtocolQQ
#define kGDataIMProtocolQQ __NS_SYMBOL(kGDataIMProtocolQQ)
#endif

#ifndef kGDataIMProtocolSkype
#define kGDataIMProtocolSkype __NS_SYMBOL(kGDataIMProtocolSkype)
#endif

#ifndef kGDataIMProtocolYahoo
#define kGDataIMProtocolYahoo __NS_SYMBOL(kGDataIMProtocolYahoo)
#endif

#ifndef kGDataFinanceDefaultServiceVersion
#define kGDataFinanceDefaultServiceVersion __NS_SYMBOL(kGDataFinanceDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceFinance
#define kGDataNamespaceFinance __NS_SYMBOL(kGDataNamespaceFinance)
#endif

#ifndef kGDataNamespaceFinancePrefix
#define kGDataNamespaceFinancePrefix __NS_SYMBOL(kGDataNamespaceFinancePrefix)
#endif

#ifndef kGDataCategoryFinancePortfolio
#define kGDataCategoryFinancePortfolio __NS_SYMBOL(kGDataCategoryFinancePortfolio)
#endif

#ifndef kGDataCategoryFinancePosition
#define kGDataCategoryFinancePosition __NS_SYMBOL(kGDataCategoryFinancePosition)
#endif

#ifndef kGDataCategoryFinanceTransaction
#define kGDataCategoryFinanceTransaction __NS_SYMBOL(kGDataCategoryFinanceTransaction)
#endif

#ifndef kGDataNamespaceDublinCore
#define kGDataNamespaceDublinCore __NS_SYMBOL(kGDataNamespaceDublinCore)
#endif

#ifndef kGDataNamespaceDublinCorePrefix
#define kGDataNamespaceDublinCorePrefix __NS_SYMBOL(kGDataNamespaceDublinCorePrefix)
#endif

#ifndef kGDataSpreadsheetModeInsert
#define kGDataSpreadsheetModeInsert __NS_SYMBOL(kGDataSpreadsheetModeInsert)
#endif

#ifndef kGDataSpreadsheetModeOverwrite
#define kGDataSpreadsheetModeOverwrite __NS_SYMBOL(kGDataSpreadsheetModeOverwrite)
#endif

#ifndef kGDataPhoneNumberAssistant
#define kGDataPhoneNumberAssistant __NS_SYMBOL(kGDataPhoneNumberAssistant)
#endif

#ifndef kGDataPhoneNumberCallback
#define kGDataPhoneNumberCallback __NS_SYMBOL(kGDataPhoneNumberCallback)
#endif

#ifndef kGDataPhoneNumberCar
#define kGDataPhoneNumberCar __NS_SYMBOL(kGDataPhoneNumberCar)
#endif

#ifndef kGDataPhoneNumberCompanyMain
#define kGDataPhoneNumberCompanyMain __NS_SYMBOL(kGDataPhoneNumberCompanyMain)
#endif

#ifndef kGDataPhoneNumberFax
#define kGDataPhoneNumberFax __NS_SYMBOL(kGDataPhoneNumberFax)
#endif

#ifndef kGDataPhoneNumberHome
#define kGDataPhoneNumberHome __NS_SYMBOL(kGDataPhoneNumberHome)
#endif

#ifndef kGDataPhoneNumberHomeFax
#define kGDataPhoneNumberHomeFax __NS_SYMBOL(kGDataPhoneNumberHomeFax)
#endif

#ifndef kGDataPhoneNumberISDN
#define kGDataPhoneNumberISDN __NS_SYMBOL(kGDataPhoneNumberISDN)
#endif

#ifndef kGDataPhoneNumberMobile
#define kGDataPhoneNumberMobile __NS_SYMBOL(kGDataPhoneNumberMobile)
#endif

#ifndef kGDataPhoneNumberOther
#define kGDataPhoneNumberOther __NS_SYMBOL(kGDataPhoneNumberOther)
#endif

#ifndef kGDataPhoneNumberOtherFax
#define kGDataPhoneNumberOtherFax __NS_SYMBOL(kGDataPhoneNumberOtherFax)
#endif

#ifndef kGDataPhoneNumberPager
#define kGDataPhoneNumberPager __NS_SYMBOL(kGDataPhoneNumberPager)
#endif

#ifndef kGDataPhoneNumberRadio
#define kGDataPhoneNumberRadio __NS_SYMBOL(kGDataPhoneNumberRadio)
#endif

#ifndef kGDataPhoneNumberTelex
#define kGDataPhoneNumberTelex __NS_SYMBOL(kGDataPhoneNumberTelex)
#endif

#ifndef kGDataPhoneNumberTTYTDD
#define kGDataPhoneNumberTTYTDD __NS_SYMBOL(kGDataPhoneNumberTTYTDD)
#endif

#ifndef kGDataPhoneNumberWork
#define kGDataPhoneNumberWork __NS_SYMBOL(kGDataPhoneNumberWork)
#endif

#ifndef kGDataPhoneNumberWorkFax
#define kGDataPhoneNumberWorkFax __NS_SYMBOL(kGDataPhoneNumberWorkFax)
#endif

#ifndef kGDataPhoneNumberWorkMobile
#define kGDataPhoneNumberWorkMobile __NS_SYMBOL(kGDataPhoneNumberWorkMobile)
#endif

#ifndef kGDataPhoneNumberWorkPager
#define kGDataPhoneNumberWorkPager __NS_SYMBOL(kGDataPhoneNumberWorkPager)
#endif

#ifndef kGDataCategoryWorksheet
#define kGDataCategoryWorksheet __NS_SYMBOL(kGDataCategoryWorksheet)
#endif

#ifndef kGDataCodeSearchDefaultServiceVersion
#define kGDataCodeSearchDefaultServiceVersion __NS_SYMBOL(kGDataCodeSearchDefaultServiceVersion)
#endif

#ifndef kGDataCategoryCodeSearch
#define kGDataCategoryCodeSearch __NS_SYMBOL(kGDataCategoryCodeSearch)
#endif

#ifndef kGDataNamespaceCodeSearch
#define kGDataNamespaceCodeSearch __NS_SYMBOL(kGDataNamespaceCodeSearch)
#endif

#ifndef kGDataNamespaceCodeSearchPrefix
#define kGDataNamespaceCodeSearchPrefix __NS_SYMBOL(kGDataNamespaceCodeSearchPrefix)
#endif

#ifndef kGDataCodeSearchFeed
#define kGDataCodeSearchFeed __NS_SYMBOL(kGDataCodeSearchFeed)
#endif

#ifndef kGDataSystemGroupIDMyContacts
#define kGDataSystemGroupIDMyContacts __NS_SYMBOL(kGDataSystemGroupIDMyContacts)
#endif

#ifndef kGDataSystemGroupIDFriends
#define kGDataSystemGroupIDFriends __NS_SYMBOL(kGDataSystemGroupIDFriends)
#endif

#ifndef kGDataSystemGroupIDFamily
#define kGDataSystemGroupIDFamily __NS_SYMBOL(kGDataSystemGroupIDFamily)
#endif

#ifndef kGDataSystemGroupIDCoworkers
#define kGDataSystemGroupIDCoworkers __NS_SYMBOL(kGDataSystemGroupIDCoworkers)
#endif

#ifndef kGDataMessage
#define kGDataMessage __NS_SYMBOL(kGDataMessage)
#endif

#ifndef kGDataMessageStarred
#define kGDataMessageStarred __NS_SYMBOL(kGDataMessageStarred)
#endif

#ifndef kGDataMessageUnread
#define kGDataMessageUnread __NS_SYMBOL(kGDataMessageUnread)
#endif

#ifndef kGDataMessageChat
#define kGDataMessageChat __NS_SYMBOL(kGDataMessageChat)
#endif

#ifndef kGDataMessageSpam
#define kGDataMessageSpam __NS_SYMBOL(kGDataMessageSpam)
#endif

#ifndef kGDataMessageSent
#define kGDataMessageSent __NS_SYMBOL(kGDataMessageSent)
#endif

#ifndef kGDataMessageInbox
#define kGDataMessageInbox __NS_SYMBOL(kGDataMessageInbox)
#endif

#ifndef kGDataYouTubeDefaultServiceVersion
#define kGDataYouTubeDefaultServiceVersion __NS_SYMBOL(kGDataYouTubeDefaultServiceVersion)
#endif

#ifndef kGDataNamespaceYouTube
#define kGDataNamespaceYouTube __NS_SYMBOL(kGDataNamespaceYouTube)
#endif

#ifndef kGDataNamespaceYouTubePrefix
#define kGDataNamespaceYouTubePrefix __NS_SYMBOL(kGDataNamespaceYouTubePrefix)
#endif

#ifndef kGDataCategoryYouTubeVideo
#define kGDataCategoryYouTubeVideo __NS_SYMBOL(kGDataCategoryYouTubeVideo)
#endif

#ifndef kGDataCategoryYouTubeCaptionTrack
#define kGDataCategoryYouTubeCaptionTrack __NS_SYMBOL(kGDataCategoryYouTubeCaptionTrack)
#endif

#ifndef kGDataCategoryYouTubeComplaint
#define kGDataCategoryYouTubeComplaint __NS_SYMBOL(kGDataCategoryYouTubeComplaint)
#endif

#ifndef kGDataCategoryYouTubeComment
#define kGDataCategoryYouTubeComment __NS_SYMBOL(kGDataCategoryYouTubeComment)
#endif

#ifndef kGDataCategoryYouTubePlaylistLink
#define kGDataCategoryYouTubePlaylistLink __NS_SYMBOL(kGDataCategoryYouTubePlaylistLink)
#endif

#ifndef kGDataCategoryYouTubeSubscription
#define kGDataCategoryYouTubeSubscription __NS_SYMBOL(kGDataCategoryYouTubeSubscription)
#endif

#ifndef kGDataCategoryYouTubeFavorite
#define kGDataCategoryYouTubeFavorite __NS_SYMBOL(kGDataCategoryYouTubeFavorite)
#endif

#ifndef kGDataCategoryYouTubeFriend
#define kGDataCategoryYouTubeFriend __NS_SYMBOL(kGDataCategoryYouTubeFriend)
#endif

#ifndef kGDataCategoryYouTubeRating
#define kGDataCategoryYouTubeRating __NS_SYMBOL(kGDataCategoryYouTubeRating)
#endif

#ifndef kGDataCategoryYouTubeUserProfile
#define kGDataCategoryYouTubeUserProfile __NS_SYMBOL(kGDataCategoryYouTubeUserProfile)
#endif

#ifndef kGDataCategoryYouTubeUserEvent
#define kGDataCategoryYouTubeUserEvent __NS_SYMBOL(kGDataCategoryYouTubeUserEvent)
#endif

#ifndef kGDataCategoryYouTubeChannel
#define kGDataCategoryYouTubeChannel __NS_SYMBOL(kGDataCategoryYouTubeChannel)
#endif

#ifndef kGDataCategoryYouTubePlaylist
#define kGDataCategoryYouTubePlaylist __NS_SYMBOL(kGDataCategoryYouTubePlaylist)
#endif

#ifndef kGDataCategoryYouTubeVideoMessage
#define kGDataCategoryYouTubeVideoMessage __NS_SYMBOL(kGDataCategoryYouTubeVideoMessage)
#endif

#ifndef kGDataSchemeYouTubeSubscription
#define kGDataSchemeYouTubeSubscription __NS_SYMBOL(kGDataSchemeYouTubeSubscription)
#endif

#ifndef kGDataSchemeYouTubeChannel
#define kGDataSchemeYouTubeChannel __NS_SYMBOL(kGDataSchemeYouTubeChannel)
#endif

#ifndef kGDataSchemeYouTubeContact
#define kGDataSchemeYouTubeContact __NS_SYMBOL(kGDataSchemeYouTubeContact)
#endif

#ifndef kGDataSchemeYouTubeChannelType
#define kGDataSchemeYouTubeChannelType __NS_SYMBOL(kGDataSchemeYouTubeChannelType)
#endif

#ifndef kGDataSchemeYouTubeTag
#define kGDataSchemeYouTubeTag __NS_SYMBOL(kGDataSchemeYouTubeTag)
#endif

#ifndef kGDataSchemeYouTubeKeyword
#define kGDataSchemeYouTubeKeyword __NS_SYMBOL(kGDataSchemeYouTubeKeyword)
#endif

#ifndef kGDataSchemeYouTubeCategory
#define kGDataSchemeYouTubeCategory __NS_SYMBOL(kGDataSchemeYouTubeCategory)
#endif

#ifndef kGDataSchemeYouTubeDeveloper
#define kGDataSchemeYouTubeDeveloper __NS_SYMBOL(kGDataSchemeYouTubeDeveloper)
#endif

#ifndef kGDataSchemeYouTubeUserEvents
#define kGDataSchemeYouTubeUserEvents __NS_SYMBOL(kGDataSchemeYouTubeUserEvents)
#endif

#ifndef kGDataSchemeYouTubeComplaintReasons
#define kGDataSchemeYouTubeComplaintReasons __NS_SYMBOL(kGDataSchemeYouTubeComplaintReasons)
#endif

#ifndef kGDataLinkYouTubePlaylist
#define kGDataLinkYouTubePlaylist __NS_SYMBOL(kGDataLinkYouTubePlaylist)
#endif

#ifndef kGDataLinkYouTubeUploads
#define kGDataLinkYouTubeUploads __NS_SYMBOL(kGDataLinkYouTubeUploads)
#endif

#ifndef kGDataLinkYouTubeFeatured
#define kGDataLinkYouTubeFeatured __NS_SYMBOL(kGDataLinkYouTubeFeatured)
#endif

#ifndef kGDataLinkYouTubeSubscriptions
#define kGDataLinkYouTubeSubscriptions __NS_SYMBOL(kGDataLinkYouTubeSubscriptions)
#endif

#ifndef kGDataLinkYouTubePlaylists
#define kGDataLinkYouTubePlaylists __NS_SYMBOL(kGDataLinkYouTubePlaylists)
#endif

#ifndef kGDataLinkYouTubeFriendsActivity
#define kGDataLinkYouTubeFriendsActivity __NS_SYMBOL(kGDataLinkYouTubeFriendsActivity)
#endif

#ifndef kGDataLinkYouTubeRecentActivity
#define kGDataLinkYouTubeRecentActivity __NS_SYMBOL(kGDataLinkYouTubeRecentActivity)
#endif

#ifndef kGDataLinkYouTubeFavorites
#define kGDataLinkYouTubeFavorites __NS_SYMBOL(kGDataLinkYouTubeFavorites)
#endif

#ifndef kGDataLinkYouTubeContacts
#define kGDataLinkYouTubeContacts __NS_SYMBOL(kGDataLinkYouTubeContacts)
#endif

#ifndef kGDataLinkYouTubeInbox
#define kGDataLinkYouTubeInbox __NS_SYMBOL(kGDataLinkYouTubeInbox)
#endif

#ifndef kGDataLinkYouTubeMobile
#define kGDataLinkYouTubeMobile __NS_SYMBOL(kGDataLinkYouTubeMobile)
#endif

#ifndef kGDataLinkYouTubeResponses
#define kGDataLinkYouTubeResponses __NS_SYMBOL(kGDataLinkYouTubeResponses)
#endif

#ifndef kGDataLinkYouTubeRatings
#define kGDataLinkYouTubeRatings __NS_SYMBOL(kGDataLinkYouTubeRatings)
#endif

#ifndef kGDataCategoryACL
#define kGDataCategoryACL __NS_SYMBOL(kGDataCategoryACL)
#endif

#ifndef kGDataLinkYouTubeCaptionTracks
#define kGDataLinkYouTubeCaptionTracks __NS_SYMBOL(kGDataLinkYouTubeCaptionTracks)
#endif

#ifndef kGDataLinkYouTubeComments
#define kGDataLinkYouTubeComments __NS_SYMBOL(kGDataLinkYouTubeComments)
#endif

#ifndef kGDataNamespaceACL
#define kGDataNamespaceACL __NS_SYMBOL(kGDataNamespaceACL)
#endif

#ifndef kGDataLinkYouTubeComplaints
#define kGDataLinkYouTubeComplaints __NS_SYMBOL(kGDataLinkYouTubeComplaints)
#endif

#ifndef kGDataNamespaceACLPrefix
#define kGDataNamespaceACLPrefix __NS_SYMBOL(kGDataNamespaceACLPrefix)
#endif

#ifndef kGDataLinkRelACL
#define kGDataLinkRelACL __NS_SYMBOL(kGDataLinkRelACL)
#endif

#ifndef kGDataLinkYouTubeRelated
#define kGDataLinkYouTubeRelated __NS_SYMBOL(kGDataLinkYouTubeRelated)
#endif

#ifndef kGDataLinkRelControlledObject
#define kGDataLinkRelControlledObject __NS_SYMBOL(kGDataLinkRelControlledObject)
#endif

#ifndef kGDataLinkYouTubeChannelContent
#define kGDataLinkYouTubeChannelContent __NS_SYMBOL(kGDataLinkYouTubeChannelContent)
#endif

#ifndef kGDataLinkYouTubeInReplyTo
#define kGDataLinkYouTubeInReplyTo __NS_SYMBOL(kGDataLinkYouTubeInReplyTo)
#endif

#ifndef kGDataLinkYouTubeVideoQuery
#define kGDataLinkYouTubeVideoQuery __NS_SYMBOL(kGDataLinkYouTubeVideoQuery)
#endif

#ifndef kGDataLinkYouTubeNewSubscriptionVideos
#define kGDataLinkYouTubeNewSubscriptionVideos __NS_SYMBOL(kGDataLinkYouTubeNewSubscriptionVideos)
#endif

#ifndef kGDataLinkYouTubeVlog
#define kGDataLinkYouTubeVlog __NS_SYMBOL(kGDataLinkYouTubeVlog)
#endif

#ifndef kGDataLinkYouTubeGetUploadToken
#define kGDataLinkYouTubeGetUploadToken __NS_SYMBOL(kGDataLinkYouTubeGetUploadToken)
#endif

#ifndef kGDataLinkYouTubeVideo
#define kGDataLinkYouTubeVideo __NS_SYMBOL(kGDataLinkYouTubeVideo)
#endif

#ifndef kGDataLinkYouTubeInsightViews
#define kGDataLinkYouTubeInsightViews __NS_SYMBOL(kGDataLinkYouTubeInsightViews)
#endif

#ifndef kGDataYouTubeUserEventVideoUploaded
#define kGDataYouTubeUserEventVideoUploaded __NS_SYMBOL(kGDataYouTubeUserEventVideoUploaded)
#endif

#ifndef kGDataYouTubeUserEventVideoRated
#define kGDataYouTubeUserEventVideoRated __NS_SYMBOL(kGDataYouTubeUserEventVideoRated)
#endif

#ifndef kGDataYouTubeUserEventVideoFavorited
#define kGDataYouTubeUserEventVideoFavorited __NS_SYMBOL(kGDataYouTubeUserEventVideoFavorited)
#endif

#ifndef kGDataYouTubeUserEventVideoShared
#define kGDataYouTubeUserEventVideoShared __NS_SYMBOL(kGDataYouTubeUserEventVideoShared)
#endif

#ifndef kGDataYouTubeUserEventVideoCommented
#define kGDataYouTubeUserEventVideoCommented __NS_SYMBOL(kGDataYouTubeUserEventVideoCommented)
#endif

#ifndef kGDataYouTubeUserEventUserSubscriptionAdded
#define kGDataYouTubeUserEventUserSubscriptionAdded __NS_SYMBOL(kGDataYouTubeUserEventUserSubscriptionAdded)
#endif

#ifndef kGDataYouTubeUserEventFriendAdded
#define kGDataYouTubeUserEventFriendAdded __NS_SYMBOL(kGDataYouTubeUserEventFriendAdded)
#endif

#ifndef kGDataYouTubeRatingValueLike
#define kGDataYouTubeRatingValueLike __NS_SYMBOL(kGDataYouTubeRatingValueLike)
#endif

#ifndef kGDataYouTubeRatingValueDislike
#define kGDataYouTubeRatingValueDislike __NS_SYMBOL(kGDataYouTubeRatingValueDislike)
#endif

#ifndef kGDataYouTubeDerivedSpeechRecogniion
#define kGDataYouTubeDerivedSpeechRecogniion __NS_SYMBOL(kGDataYouTubeDerivedSpeechRecogniion)
#endif

#ifndef kGDataYouTubeOrderByUpdated
#define kGDataYouTubeOrderByUpdated __NS_SYMBOL(kGDataYouTubeOrderByUpdated)
#endif

#ifndef kGDataYouTubeOrderByViewCount
#define kGDataYouTubeOrderByViewCount __NS_SYMBOL(kGDataYouTubeOrderByViewCount)
#endif

#ifndef kGDataYouTubeOrderByRating
#define kGDataYouTubeOrderByRating __NS_SYMBOL(kGDataYouTubeOrderByRating)
#endif

#ifndef kGDataYouTubeOrderByRelevance
#define kGDataYouTubeOrderByRelevance __NS_SYMBOL(kGDataYouTubeOrderByRelevance)
#endif

#ifndef kGDataYouTubePeriodToday
#define kGDataYouTubePeriodToday __NS_SYMBOL(kGDataYouTubePeriodToday)
#endif

#ifndef kGDataYouTubePeriodThisWeek
#define kGDataYouTubePeriodThisWeek __NS_SYMBOL(kGDataYouTubePeriodThisWeek)
#endif

#ifndef kGDataYouTubePeriodThisMonth
#define kGDataYouTubePeriodThisMonth __NS_SYMBOL(kGDataYouTubePeriodThisMonth)
#endif

#ifndef kGDataYouTubePeriodAllTime
#define kGDataYouTubePeriodAllTime __NS_SYMBOL(kGDataYouTubePeriodAllTime)
#endif

#ifndef kGDataYouTubeSafeSearchNone
#define kGDataYouTubeSafeSearchNone __NS_SYMBOL(kGDataYouTubeSafeSearchNone)
#endif

#ifndef kGDataYouTubeSafeSearchStrict
#define kGDataYouTubeSafeSearchStrict __NS_SYMBOL(kGDataYouTubeSafeSearchStrict)
#endif

#ifndef kGDataYouTubeSafeSearchModerate
#define kGDataYouTubeSafeSearchModerate __NS_SYMBOL(kGDataYouTubeSafeSearchModerate)
#endif

#ifndef kGDataYouTubeCaptionTrackFormatSubviewer
#define kGDataYouTubeCaptionTrackFormatSubviewer __NS_SYMBOL(kGDataYouTubeCaptionTrackFormatSubviewer)
#endif

#ifndef kGDataYouTubeCaptionTrackFormatSubrip
#define kGDataYouTubeCaptionTrackFormatSubrip __NS_SYMBOL(kGDataYouTubeCaptionTrackFormatSubrip)
#endif

#ifndef kGDataLinkRelWebContent
#define kGDataLinkRelWebContent __NS_SYMBOL(kGDataLinkRelWebContent)
#endif

#ifndef kGDataGoogleSpreadsheetsPrivateFullFeed
#define kGDataGoogleSpreadsheetsPrivateFullFeed __NS_SYMBOL(kGDataGoogleSpreadsheetsPrivateFullFeed)
#endif

#ifndef kGDataNamespaceAtomThreading
#define kGDataNamespaceAtomThreading __NS_SYMBOL(kGDataNamespaceAtomThreading)
#endif

#ifndef kGDataNamespaceAtomThreadingPrefix
#define kGDataNamespaceAtomThreadingPrefix __NS_SYMBOL(kGDataNamespaceAtomThreadingPrefix)
#endif

#ifndef kGDataWhoEventAttendee
#define kGDataWhoEventAttendee __NS_SYMBOL(kGDataWhoEventAttendee)
#endif

#ifndef kGDataWhoEventOrganizer
#define kGDataWhoEventOrganizer __NS_SYMBOL(kGDataWhoEventOrganizer)
#endif

#ifndef kGDataWhoEventSpeaker
#define kGDataWhoEventSpeaker __NS_SYMBOL(kGDataWhoEventSpeaker)
#endif

#ifndef kGDataWhoEventPerformer
#define kGDataWhoEventPerformer __NS_SYMBOL(kGDataWhoEventPerformer)
#endif

#ifndef kGDataWhoAttendeeTypeRequired
#define kGDataWhoAttendeeTypeRequired __NS_SYMBOL(kGDataWhoAttendeeTypeRequired)
#endif

#ifndef kGDataWhoAttendeeTypeOptional
#define kGDataWhoAttendeeTypeOptional __NS_SYMBOL(kGDataWhoAttendeeTypeOptional)
#endif

#ifndef kGDataWhoAttendeeStatusInvited
#define kGDataWhoAttendeeStatusInvited __NS_SYMBOL(kGDataWhoAttendeeStatusInvited)
#endif

#ifndef kGDataWhoAttendeeStatusAccepted
#define kGDataWhoAttendeeStatusAccepted __NS_SYMBOL(kGDataWhoAttendeeStatusAccepted)
#endif

#ifndef kGDataWhoAttendeeStatusTentative
#define kGDataWhoAttendeeStatusTentative __NS_SYMBOL(kGDataWhoAttendeeStatusTentative)
#endif

#ifndef kGDataWhoAttendeeStatusDeclined
#define kGDataWhoAttendeeStatusDeclined __NS_SYMBOL(kGDataWhoAttendeeStatusDeclined)
#endif

#ifndef kGDataWhoTaskAssignedTo
#define kGDataWhoTaskAssignedTo __NS_SYMBOL(kGDataWhoTaskAssignedTo)
#endif

#ifndef kGDataWhoMessageFrom
#define kGDataWhoMessageFrom __NS_SYMBOL(kGDataWhoMessageFrom)
#endif

#ifndef kGDataWhoMessageTo
#define kGDataWhoMessageTo __NS_SYMBOL(kGDataWhoMessageTo)
#endif

#ifndef kGDataWhoMessageCC
#define kGDataWhoMessageCC __NS_SYMBOL(kGDataWhoMessageCC)
#endif

#ifndef kGDataWhoMessageBCC
#define kGDataWhoMessageBCC __NS_SYMBOL(kGDataWhoMessageBCC)
#endif

#ifndef kGDataGoogleFinanceDefaultPortfoliosFeed
#define kGDataGoogleFinanceDefaultPortfoliosFeed __NS_SYMBOL(kGDataGoogleFinanceDefaultPortfoliosFeed)
#endif

#ifndef kGDataCategoryLabelScheme
#define kGDataCategoryLabelScheme __NS_SYMBOL(kGDataCategoryLabelScheme)
#endif

#ifndef kGDataCategoryLabelStarred
#define kGDataCategoryLabelStarred __NS_SYMBOL(kGDataCategoryLabelStarred)
#endif

#ifndef kGDataCategoryLabelTrashed
#define kGDataCategoryLabelTrashed __NS_SYMBOL(kGDataCategoryLabelTrashed)
#endif

#ifndef kGDataCategoryLabelPublished
#define kGDataCategoryLabelPublished __NS_SYMBOL(kGDataCategoryLabelPublished)
#endif

#ifndef kGDataCategoryLabelPrivate
#define kGDataCategoryLabelPrivate __NS_SYMBOL(kGDataCategoryLabelPrivate)
#endif

#ifndef kGDataCategoryLabelMine
#define kGDataCategoryLabelMine __NS_SYMBOL(kGDataCategoryLabelMine)
#endif

#ifndef kGDataCategoryLabelSharedWithDomain
#define kGDataCategoryLabelSharedWithDomain __NS_SYMBOL(kGDataCategoryLabelSharedWithDomain)
#endif

#ifndef kGDataCategoryLabelHidden
#define kGDataCategoryLabelHidden __NS_SYMBOL(kGDataCategoryLabelHidden)
#endif

#ifndef kGDataCategoryLabelViewed
#define kGDataCategoryLabelViewed __NS_SYMBOL(kGDataCategoryLabelViewed)
#endif

#ifndef kGDataCategoryLabelShared
#define kGDataCategoryLabelShared __NS_SYMBOL(kGDataCategoryLabelShared)
#endif

#ifndef kGDataWebmasterToolsFeedTypeSitemaps
#define kGDataWebmasterToolsFeedTypeSitemaps __NS_SYMBOL(kGDataWebmasterToolsFeedTypeSitemaps)
#endif

#ifndef kGDataWebmasterToolsFeedTypeKeywords
#define kGDataWebmasterToolsFeedTypeKeywords __NS_SYMBOL(kGDataWebmasterToolsFeedTypeKeywords)
#endif

#ifndef kGDataWebmasterToolsFeedTypeCrawlIssues
#define kGDataWebmasterToolsFeedTypeCrawlIssues __NS_SYMBOL(kGDataWebmasterToolsFeedTypeCrawlIssues)
#endif

#ifndef kGDataGoogleWebmasterToolsSitesFeed
#define kGDataGoogleWebmasterToolsSitesFeed __NS_SYMBOL(kGDataGoogleWebmasterToolsSitesFeed)
#endif

#ifndef kGDataGoogleWebmasterToolsMessagesFeed
#define kGDataGoogleWebmasterToolsMessagesFeed __NS_SYMBOL(kGDataGoogleWebmasterToolsMessagesFeed)
#endif

#ifndef kGDataGoogleBooksVolumeFeed
#define kGDataGoogleBooksVolumeFeed __NS_SYMBOL(kGDataGoogleBooksVolumeFeed)
#endif

#ifndef kGDataGoogleBooksLibraryCollection
#define kGDataGoogleBooksLibraryCollection __NS_SYMBOL(kGDataGoogleBooksLibraryCollection)
#endif

#ifndef kGDataQueryDocsLastModified
#define kGDataQueryDocsLastModified __NS_SYMBOL(kGDataQueryDocsLastModified)
#endif

#ifndef kGDataQueryDocsLastViewed
#define kGDataQueryDocsLastViewed __NS_SYMBOL(kGDataQueryDocsLastViewed)
#endif

#ifndef kGDataQueryDocsTitle
#define kGDataQueryDocsTitle __NS_SYMBOL(kGDataQueryDocsTitle)
#endif

#ifndef kGDataQueryDocsStarred
#define kGDataQueryDocsStarred __NS_SYMBOL(kGDataQueryDocsStarred)
#endif

#ifndef kGDataExtendedPropertyRealmShared
#define kGDataExtendedPropertyRealmShared __NS_SYMBOL(kGDataExtendedPropertyRealmShared)
#endif

#ifndef kGDataGoogleAnalyticsDefaultAccountFeed
#define kGDataGoogleAnalyticsDefaultAccountFeed __NS_SYMBOL(kGDataGoogleAnalyticsDefaultAccountFeed)
#endif

#ifndef kGDataMapsProjectionFull
#define kGDataMapsProjectionFull __NS_SYMBOL(kGDataMapsProjectionFull)
#endif

#ifndef kGDataMapsProjectionBookmarked
#define kGDataMapsProjectionBookmarked __NS_SYMBOL(kGDataMapsProjectionBookmarked)
#endif

#ifndef kGDataMapsProjectionOwned
#define kGDataMapsProjectionOwned __NS_SYMBOL(kGDataMapsProjectionOwned)
#endif

#ifndef kGDataMapsProjectionPublic
#define kGDataMapsProjectionPublic __NS_SYMBOL(kGDataMapsProjectionPublic)
#endif

#ifndef kGDataMapsProjectionUnlisted
#define kGDataMapsProjectionUnlisted __NS_SYMBOL(kGDataMapsProjectionUnlisted)
#endif

#ifndef kGDataLinkRelFeed
#define kGDataLinkRelFeed __NS_SYMBOL(kGDataLinkRelFeed)
#endif

#ifndef kGDataLinkRelPost
#define kGDataLinkRelPost __NS_SYMBOL(kGDataLinkRelPost)
#endif

#ifndef kGDataLinkRelBatch
#define kGDataLinkRelBatch __NS_SYMBOL(kGDataLinkRelBatch)
#endif

#ifndef kGDataLinkRelResumableCreate
#define kGDataLinkRelResumableCreate __NS_SYMBOL(kGDataLinkRelResumableCreate)
#endif

#ifndef kGDataGooglePhotosAllFeed
#define kGDataGooglePhotosAllFeed __NS_SYMBOL(kGDataGooglePhotosAllFeed)
#endif

#ifndef kGDataLinkRelResumableEdit
#define kGDataLinkRelResumableEdit __NS_SYMBOL(kGDataLinkRelResumableEdit)
#endif

#ifndef kGDataGooglePhotosAccessAll
#define kGDataGooglePhotosAccessAll __NS_SYMBOL(kGDataGooglePhotosAccessAll)
#endif

#ifndef kGDataLinkTypeAtom
#define kGDataLinkTypeAtom __NS_SYMBOL(kGDataLinkTypeAtom)
#endif

#ifndef kGDataGooglePhotosAccessPublic
#define kGDataGooglePhotosAccessPublic __NS_SYMBOL(kGDataGooglePhotosAccessPublic)
#endif

#ifndef kGDataLinkTypeHTML
#define kGDataLinkTypeHTML __NS_SYMBOL(kGDataLinkTypeHTML)
#endif

#ifndef kGDataGooglePhotosAccessProtected
#define kGDataGooglePhotosAccessProtected __NS_SYMBOL(kGDataGooglePhotosAccessProtected)
#endif

#ifndef kGDataGooglePhotosAccessPrivate
#define kGDataGooglePhotosAccessPrivate __NS_SYMBOL(kGDataGooglePhotosAccessPrivate)
#endif

#ifndef kGDataGooglePhotosAccessVisible
#define kGDataGooglePhotosAccessVisible __NS_SYMBOL(kGDataGooglePhotosAccessVisible)
#endif

#ifndef kGDataGooglePhotosKindAlbum
#define kGDataGooglePhotosKindAlbum __NS_SYMBOL(kGDataGooglePhotosKindAlbum)
#endif

#ifndef kGDataGooglePhotosKindPhoto
#define kGDataGooglePhotosKindPhoto __NS_SYMBOL(kGDataGooglePhotosKindPhoto)
#endif

#ifndef kGDataGooglePhotosKindComment
#define kGDataGooglePhotosKindComment __NS_SYMBOL(kGDataGooglePhotosKindComment)
#endif

#ifndef kGDataGooglePhotosKindTag
#define kGDataGooglePhotosKindTag __NS_SYMBOL(kGDataGooglePhotosKindTag)
#endif

#ifndef kGDataGooglePhotosKindUser
#define kGDataGooglePhotosKindUser __NS_SYMBOL(kGDataGooglePhotosKindUser)
#endif

#ifndef kGDataGooglePhotosDropBoxUploadURL
#define kGDataGooglePhotosDropBoxUploadURL __NS_SYMBOL(kGDataGooglePhotosDropBoxUploadURL)
#endif

#ifndef kGDataGooglePhotosDropBoxAlbumID
#define kGDataGooglePhotosDropBoxAlbumID __NS_SYMBOL(kGDataGooglePhotosDropBoxAlbumID)
#endif

#ifndef kGDataNamespaceMedia
#define kGDataNamespaceMedia __NS_SYMBOL(kGDataNamespaceMedia)
#endif

#ifndef kGDataNamespaceMediaPrefix
#define kGDataNamespaceMediaPrefix __NS_SYMBOL(kGDataNamespaceMediaPrefix)
#endif

#ifndef kGDataYouTubeMediaContentFormatRTSPStream
#define kGDataYouTubeMediaContentFormatRTSPStream __NS_SYMBOL(kGDataYouTubeMediaContentFormatRTSPStream)
#endif

#ifndef kGDataYouTubeMediaContentFormatHTTPURL
#define kGDataYouTubeMediaContentFormatHTTPURL __NS_SYMBOL(kGDataYouTubeMediaContentFormatHTTPURL)
#endif

#ifndef kGDataYouTubeMediaContentFormatMobileRTSPStream
#define kGDataYouTubeMediaContentFormatMobileRTSPStream __NS_SYMBOL(kGDataYouTubeMediaContentFormatMobileRTSPStream)
#endif

#ifndef kGDataGoogleCalendarDefaultFeed
#define kGDataGoogleCalendarDefaultFeed __NS_SYMBOL(kGDataGoogleCalendarDefaultFeed)
#endif

#ifndef kGDataGoogleCalendarDefaultOwnCalendarsFeed
#define kGDataGoogleCalendarDefaultOwnCalendarsFeed __NS_SYMBOL(kGDataGoogleCalendarDefaultOwnCalendarsFeed)
#endif

#ifndef kGDataGoogleCalendarDefaultAllCalendarsFeed
#define kGDataGoogleCalendarDefaultAllCalendarsFeed __NS_SYMBOL(kGDataGoogleCalendarDefaultAllCalendarsFeed)
#endif

#ifndef kGDataGoogleCalendarDefaultPrivateFullFeed
#define kGDataGoogleCalendarDefaultPrivateFullFeed __NS_SYMBOL(kGDataGoogleCalendarDefaultPrivateFullFeed)
#endif

#ifndef kGDataContentTypeKML
#define kGDataContentTypeKML __NS_SYMBOL(kGDataContentTypeKML)
#endif

#ifndef kGDataGoogleContactAllContactsFeedName
#define kGDataGoogleContactAllContactsFeedName __NS_SYMBOL(kGDataGoogleContactAllContactsFeedName)
#endif

#ifndef kGDataGoogleContactGroupsFeedName
#define kGDataGoogleContactGroupsFeedName __NS_SYMBOL(kGDataGoogleContactGroupsFeedName)
#endif

#ifndef kGDataGoogleContactFullProjection
#define kGDataGoogleContactFullProjection __NS_SYMBOL(kGDataGoogleContactFullProjection)
#endif

#ifndef kGDataGoogleContactThinProjection
#define kGDataGoogleContactThinProjection __NS_SYMBOL(kGDataGoogleContactThinProjection)
#endif

#ifndef kGDataGoogleDocsVisibilityPrivate
#define kGDataGoogleDocsVisibilityPrivate __NS_SYMBOL(kGDataGoogleDocsVisibilityPrivate)
#endif

#ifndef kGDataGoogleDocsProjectionFull
#define kGDataGoogleDocsProjectionFull __NS_SYMBOL(kGDataGoogleDocsProjectionFull)
#endif

#ifndef kGDataGoogleDocsProjectionExpandACL
#define kGDataGoogleDocsProjectionExpandACL __NS_SYMBOL(kGDataGoogleDocsProjectionExpandACL)
#endif

#ifndef kGDataGoogleDocsFeedTypeFolderContents
#define kGDataGoogleDocsFeedTypeFolderContents __NS_SYMBOL(kGDataGoogleDocsFeedTypeFolderContents)
#endif

#ifndef kGDataGoogleDocsFeedTypeACL
#define kGDataGoogleDocsFeedTypeACL __NS_SYMBOL(kGDataGoogleDocsFeedTypeACL)
#endif

#ifndef kGDataGoogleDocsFeedTypeRevisions
#define kGDataGoogleDocsFeedTypeRevisions __NS_SYMBOL(kGDataGoogleDocsFeedTypeRevisions)
#endif

#ifndef kGDataCalendarDefaultServiceVersion
#define kGDataCalendarDefaultServiceVersion __NS_SYMBOL(kGDataCalendarDefaultServiceVersion)
#endif

#ifndef kGDataExtendedPropertyRealmCalendar
#define kGDataExtendedPropertyRealmCalendar __NS_SYMBOL(kGDataExtendedPropertyRealmCalendar)
#endif

#ifndef kGDataCalendarAccessNone
#define kGDataCalendarAccessNone __NS_SYMBOL(kGDataCalendarAccessNone)
#endif

#ifndef kGDataCalendarAccessRead
#define kGDataCalendarAccessRead __NS_SYMBOL(kGDataCalendarAccessRead)
#endif

#ifndef kGDataCalendarAccessFreeBusy
#define kGDataCalendarAccessFreeBusy __NS_SYMBOL(kGDataCalendarAccessFreeBusy)
#endif

#ifndef kGDataCalendarAccessRespond
#define kGDataCalendarAccessRespond __NS_SYMBOL(kGDataCalendarAccessRespond)
#endif

#ifndef kGDataCalendarAccessOverride
#define kGDataCalendarAccessOverride __NS_SYMBOL(kGDataCalendarAccessOverride)
#endif

#ifndef kGDataCalendarAccessEditor
#define kGDataCalendarAccessEditor __NS_SYMBOL(kGDataCalendarAccessEditor)
#endif

#ifndef kGDataCalendarAccessOwner
#define kGDataCalendarAccessOwner __NS_SYMBOL(kGDataCalendarAccessOwner)
#endif

#ifndef kGDataCalendarAccessRoot
#define kGDataCalendarAccessRoot __NS_SYMBOL(kGDataCalendarAccessRoot)
#endif

#ifndef kGDataRoleCalendarNone
#define kGDataRoleCalendarNone __NS_SYMBOL(kGDataRoleCalendarNone)
#endif

#ifndef kGDataRoleCalendarRead
#define kGDataRoleCalendarRead __NS_SYMBOL(kGDataRoleCalendarRead)
#endif

#ifndef kGDataRoleCalendarFreeBusy
#define kGDataRoleCalendarFreeBusy __NS_SYMBOL(kGDataRoleCalendarFreeBusy)
#endif

#ifndef kGDataRoleCalendarRespond
#define kGDataRoleCalendarRespond __NS_SYMBOL(kGDataRoleCalendarRespond)
#endif

#ifndef kGDataRoleCalendarOverride
#define kGDataRoleCalendarOverride __NS_SYMBOL(kGDataRoleCalendarOverride)
#endif

#ifndef kGDataRoleCalendarContributor
#define kGDataRoleCalendarContributor __NS_SYMBOL(kGDataRoleCalendarContributor)
#endif

#ifndef kGDataRoleCalendarEditor
#define kGDataRoleCalendarEditor __NS_SYMBOL(kGDataRoleCalendarEditor)
#endif

#ifndef kGDataRoleCalendarOwner
#define kGDataRoleCalendarOwner __NS_SYMBOL(kGDataRoleCalendarOwner)
#endif

#ifndef kGDataRoleCalendarRoot
#define kGDataRoleCalendarRoot __NS_SYMBOL(kGDataRoleCalendarRoot)
#endif

#ifndef kGDataErrorDomainCore
#define kGDataErrorDomainCore __NS_SYMBOL(kGDataErrorDomainCore)
#endif

#ifndef kGDataYouTubeFeedIDFull
#define kGDataYouTubeFeedIDFull __NS_SYMBOL(kGDataYouTubeFeedIDFull)
#endif

#ifndef kGDataYouTubeUserFeedIDProfile
#define kGDataYouTubeUserFeedIDProfile __NS_SYMBOL(kGDataYouTubeUserFeedIDProfile)
#endif

#ifndef kGDataYouTubeFeedIDTopRated
#define kGDataYouTubeFeedIDTopRated __NS_SYMBOL(kGDataYouTubeFeedIDTopRated)
#endif

#ifndef kGDataYouTubeFeedIDTopFavorites
#define kGDataYouTubeFeedIDTopFavorites __NS_SYMBOL(kGDataYouTubeFeedIDTopFavorites)
#endif

#ifndef kGDataYouTubeFeedIDMostViewed
#define kGDataYouTubeFeedIDMostViewed __NS_SYMBOL(kGDataYouTubeFeedIDMostViewed)
#endif

#ifndef kGDataYouTubeFeedIDMostPopular
#define kGDataYouTubeFeedIDMostPopular __NS_SYMBOL(kGDataYouTubeFeedIDMostPopular)
#endif

#ifndef kGDataYouTubeFeedIDMostRecent
#define kGDataYouTubeFeedIDMostRecent __NS_SYMBOL(kGDataYouTubeFeedIDMostRecent)
#endif

#ifndef kGDataYouTubeFeedIDMostDiscussed
#define kGDataYouTubeFeedIDMostDiscussed __NS_SYMBOL(kGDataYouTubeFeedIDMostDiscussed)
#endif

#ifndef kGDataYouTubeFeedIDMostShared
#define kGDataYouTubeFeedIDMostShared __NS_SYMBOL(kGDataYouTubeFeedIDMostShared)
#endif

#ifndef kGDataYouTubeFeedIDOnTheWeb
#define kGDataYouTubeFeedIDOnTheWeb __NS_SYMBOL(kGDataYouTubeFeedIDOnTheWeb)
#endif

#ifndef kGDataYouTubeFeedIDMostResponded
#define kGDataYouTubeFeedIDMostResponded __NS_SYMBOL(kGDataYouTubeFeedIDMostResponded)
#endif

#ifndef kGDataYouTubeFeedIDRecentlyFeatured
#define kGDataYouTubeFeedIDRecentlyFeatured __NS_SYMBOL(kGDataYouTubeFeedIDRecentlyFeatured)
#endif

#ifndef kGDataYouTubeUserFeedIDContacts
#define kGDataYouTubeUserFeedIDContacts __NS_SYMBOL(kGDataYouTubeUserFeedIDContacts)
#endif

#ifndef kGDataYouTubeUserFeedIDFavorites
#define kGDataYouTubeUserFeedIDFavorites __NS_SYMBOL(kGDataYouTubeUserFeedIDFavorites)
#endif

#ifndef kGDataYouTubeUserFeedIDInbox
#define kGDataYouTubeUserFeedIDInbox __NS_SYMBOL(kGDataYouTubeUserFeedIDInbox)
#endif

#ifndef kGDataYouTubeUserFeedIDPlaylists
#define kGDataYouTubeUserFeedIDPlaylists __NS_SYMBOL(kGDataYouTubeUserFeedIDPlaylists)
#endif

#ifndef kGDataYouTubeUserFeedIDSubscriptions
#define kGDataYouTubeUserFeedIDSubscriptions __NS_SYMBOL(kGDataYouTubeUserFeedIDSubscriptions)
#endif

#ifndef kGDataYouTubeUserFeedIDUploads
#define kGDataYouTubeUserFeedIDUploads __NS_SYMBOL(kGDataYouTubeUserFeedIDUploads)
#endif

#ifndef kGDataYouTubeUserFeedIDNewSubscriptionVideos
#define kGDataYouTubeUserFeedIDNewSubscriptionVideos __NS_SYMBOL(kGDataYouTubeUserFeedIDNewSubscriptionVideos)
#endif

#ifndef kGDataYouTubeUserFeedIDFriendsActivity
#define kGDataYouTubeUserFeedIDFriendsActivity __NS_SYMBOL(kGDataYouTubeUserFeedIDFriendsActivity)
#endif

#ifndef kGDataYouTubeUserFeedIDRecommendations
#define kGDataYouTubeUserFeedIDRecommendations __NS_SYMBOL(kGDataYouTubeUserFeedIDRecommendations)
#endif

#ifndef kGDataPhotoAccessPrivate
#define kGDataPhotoAccessPrivate __NS_SYMBOL(kGDataPhotoAccessPrivate)
#endif

#ifndef kGDataPhotoAccessProtected
#define kGDataPhotoAccessProtected __NS_SYMBOL(kGDataPhotoAccessProtected)
#endif

#ifndef kGDataPhotoAccessPublic
#define kGDataPhotoAccessPublic __NS_SYMBOL(kGDataPhotoAccessPublic)
#endif

#ifndef kGDataPhotoAccessAll
#define kGDataPhotoAccessAll __NS_SYMBOL(kGDataPhotoAccessAll)
#endif

#ifndef kGDataPhotoStatusPending
#define kGDataPhotoStatusPending __NS_SYMBOL(kGDataPhotoStatusPending)
#endif

#ifndef kGDataPhotoStatusReady
#define kGDataPhotoStatusReady __NS_SYMBOL(kGDataPhotoStatusReady)
#endif

#ifndef kGDataPhotoStatusFinal
#define kGDataPhotoStatusFinal __NS_SYMBOL(kGDataPhotoStatusFinal)
#endif

#ifndef kGDataPhotoStatusFailed
#define kGDataPhotoStatusFailed __NS_SYMBOL(kGDataPhotoStatusFailed)
#endif

#ifndef kGDataCategoryEvent
#define kGDataCategoryEvent __NS_SYMBOL(kGDataCategoryEvent)
#endif

#ifndef kGDataEventStatusConfirmed
#define kGDataEventStatusConfirmed __NS_SYMBOL(kGDataEventStatusConfirmed)
#endif

#ifndef kGDataEventStatusTentative
#define kGDataEventStatusTentative __NS_SYMBOL(kGDataEventStatusTentative)
#endif

#ifndef kGDataEventStatusCanceled
#define kGDataEventStatusCanceled __NS_SYMBOL(kGDataEventStatusCanceled)
#endif

#ifndef kGDataEventTransparencyTransparent
#define kGDataEventTransparencyTransparent __NS_SYMBOL(kGDataEventTransparencyTransparent)
#endif

#ifndef kGDataEventTransparencyOpaque
#define kGDataEventTransparencyOpaque __NS_SYMBOL(kGDataEventTransparencyOpaque)
#endif

#ifndef kGDataEventVisibilityDefault
#define kGDataEventVisibilityDefault __NS_SYMBOL(kGDataEventVisibilityDefault)
#endif

#ifndef kGDataEventVisibilityPublic
#define kGDataEventVisibilityPublic __NS_SYMBOL(kGDataEventVisibilityPublic)
#endif

#ifndef kGDataEventVisibilityPrivate
#define kGDataEventVisibilityPrivate __NS_SYMBOL(kGDataEventVisibilityPrivate)
#endif

#ifndef kGDataEventVisibilityConfidential
#define kGDataEventVisibilityConfidential __NS_SYMBOL(kGDataEventVisibilityConfidential)
#endif

#ifndef kGDataNamespaceGeoW3C
#define kGDataNamespaceGeoW3C __NS_SYMBOL(kGDataNamespaceGeoW3C)
#endif

#ifndef kGDataNamespaceGeoW3CPrefix
#define kGDataNamespaceGeoW3CPrefix __NS_SYMBOL(kGDataNamespaceGeoW3CPrefix)
#endif

#ifndef kGDataNamespaceGeoRSS
#define kGDataNamespaceGeoRSS __NS_SYMBOL(kGDataNamespaceGeoRSS)
#endif

#ifndef kGDataNamespaceGeoRSSPrefix
#define kGDataNamespaceGeoRSSPrefix __NS_SYMBOL(kGDataNamespaceGeoRSSPrefix)
#endif

#ifndef kGDataNamespaceGeoGML
#define kGDataNamespaceGeoGML __NS_SYMBOL(kGDataNamespaceGeoGML)
#endif

#ifndef kGDataNamespaceGeoGMLPrefix
#define kGDataNamespaceGeoGMLPrefix __NS_SYMBOL(kGDataNamespaceGeoGMLPrefix)
#endif

#ifndef kGDataNamespaceGCal
#define kGDataNamespaceGCal __NS_SYMBOL(kGDataNamespaceGCal)
#endif

#ifndef kGDataNamespaceGCalPrefix
#define kGDataNamespaceGCalPrefix __NS_SYMBOL(kGDataNamespaceGCalPrefix)
#endif

#ifndef kGDataCategoryCalendar
#define kGDataCategoryCalendar __NS_SYMBOL(kGDataCategoryCalendar)
#endif

#ifndef kGDataCategoryCalendarSettings
#define kGDataCategoryCalendarSettings __NS_SYMBOL(kGDataCategoryCalendarSettings)
#endif

#ifndef kGTMDefaultETaggedDataCacheMemoryCapacity
#define kGTMDefaultETaggedDataCacheMemoryCapacity __NS_SYMBOL(kGTMDefaultETaggedDataCacheMemoryCapacity)
#endif

#ifndef kGDataQueryResultServiceDocument
#define kGDataQueryResultServiceDocument __NS_SYMBOL(kGDataQueryResultServiceDocument)
#endif

#ifndef kUseRegisteredEntryClass
#define kUseRegisteredEntryClass __NS_SYMBOL(kUseRegisteredEntryClass)
#endif

#ifndef kGDataCategoryScheme
#define kGDataCategoryScheme __NS_SYMBOL(kGDataCategoryScheme)
#endif

#ifndef kOOBString
#define kOOBString __NS_SYMBOL(kOOBString)
#endif

#ifndef kGDataServiceErrorCaptchaRequired
#define kGDataServiceErrorCaptchaRequired __NS_SYMBOL(kGDataServiceErrorCaptchaRequired)
#endif

#ifndef kGDataServiceDefaultUser
#define kGDataServiceDefaultUser __NS_SYMBOL(kGDataServiceDefaultUser)
#endif

#ifndef kGDataServiceAuthTokenKey
#define kGDataServiceAuthTokenKey __NS_SYMBOL(kGDataServiceAuthTokenKey)
#endif

#ifndef kGDataServerInfoStringKey
#define kGDataServerInfoStringKey __NS_SYMBOL(kGDataServerInfoStringKey)
#endif

#ifndef kGDataServerInfoInvalidSecondFactor
#define kGDataServerInfoInvalidSecondFactor __NS_SYMBOL(kGDataServerInfoInvalidSecondFactor)
#endif

#ifndef kGTMOAuth2ServiceProviderGoogle
#define kGTMOAuth2ServiceProviderGoogle __NS_SYMBOL(kGTMOAuth2ServiceProviderGoogle)
#endif

#ifndef kGTMOAuth2ErrorDomain
#define kGTMOAuth2ErrorDomain __NS_SYMBOL(kGTMOAuth2ErrorDomain)
#endif

#ifndef kGTMOAuth2ErrorMessageKey
#define kGTMOAuth2ErrorMessageKey __NS_SYMBOL(kGTMOAuth2ErrorMessageKey)
#endif

#ifndef kGTMOAuth2ErrorRequestKey
#define kGTMOAuth2ErrorRequestKey __NS_SYMBOL(kGTMOAuth2ErrorRequestKey)
#endif

#ifndef kGTMOAuth2ErrorJSONKey
#define kGTMOAuth2ErrorJSONKey __NS_SYMBOL(kGTMOAuth2ErrorJSONKey)
#endif

#ifndef kGTMOAuth2FetchStarted
#define kGTMOAuth2FetchStarted __NS_SYMBOL(kGTMOAuth2FetchStarted)
#endif

#ifndef kGTMOAuth2FetchStopped
#define kGTMOAuth2FetchStopped __NS_SYMBOL(kGTMOAuth2FetchStopped)
#endif

#ifndef kGTMOAuth2FetcherKey
#define kGTMOAuth2FetcherKey __NS_SYMBOL(kGTMOAuth2FetcherKey)
#endif

#ifndef kGTMOAuth2FetchTypeKey
#define kGTMOAuth2FetchTypeKey __NS_SYMBOL(kGTMOAuth2FetchTypeKey)
#endif

#ifndef kGTMOAuth2FetchTypeToken
#define kGTMOAuth2FetchTypeToken __NS_SYMBOL(kGTMOAuth2FetchTypeToken)
#endif

#ifndef kGTMOAuth2FetchTypeRefresh
#define kGTMOAuth2FetchTypeRefresh __NS_SYMBOL(kGTMOAuth2FetchTypeRefresh)
#endif

#ifndef kGTMOAuth2FetchTypeAssertion
#define kGTMOAuth2FetchTypeAssertion __NS_SYMBOL(kGTMOAuth2FetchTypeAssertion)
#endif

#ifndef kGTMOAuth2FetchTypeUserInfo
#define kGTMOAuth2FetchTypeUserInfo __NS_SYMBOL(kGTMOAuth2FetchTypeUserInfo)
#endif

#ifndef kGTMOAuth2ErrorKey
#define kGTMOAuth2ErrorKey __NS_SYMBOL(kGTMOAuth2ErrorKey)
#endif

#ifndef kGTMOAuth2ErrorObjectKey
#define kGTMOAuth2ErrorObjectKey __NS_SYMBOL(kGTMOAuth2ErrorObjectKey)
#endif

#ifndef kGTMOAuth2ErrorInvalidRequest
#define kGTMOAuth2ErrorInvalidRequest __NS_SYMBOL(kGTMOAuth2ErrorInvalidRequest)
#endif

#ifndef kGTMOAuth2ErrorInvalidClient
#define kGTMOAuth2ErrorInvalidClient __NS_SYMBOL(kGTMOAuth2ErrorInvalidClient)
#endif

#ifndef kGTMOAuth2ErrorInvalidGrant
#define kGTMOAuth2ErrorInvalidGrant __NS_SYMBOL(kGTMOAuth2ErrorInvalidGrant)
#endif

#ifndef kGTMOAuth2ErrorUnauthorizedClient
#define kGTMOAuth2ErrorUnauthorizedClient __NS_SYMBOL(kGTMOAuth2ErrorUnauthorizedClient)
#endif

#ifndef kGTMOAuth2ErrorUnsupportedGrantType
#define kGTMOAuth2ErrorUnsupportedGrantType __NS_SYMBOL(kGTMOAuth2ErrorUnsupportedGrantType)
#endif

#ifndef kGTMOAuth2ErrorInvalidScope
#define kGTMOAuth2ErrorInvalidScope __NS_SYMBOL(kGTMOAuth2ErrorInvalidScope)
#endif

#ifndef kGTMOAuth2UserSignedIn
#define kGTMOAuth2UserSignedIn __NS_SYMBOL(kGTMOAuth2UserSignedIn)
#endif

#ifndef kGTMOAuth2AccessTokenRefreshed
#define kGTMOAuth2AccessTokenRefreshed __NS_SYMBOL(kGTMOAuth2AccessTokenRefreshed)
#endif

#ifndef kGTMOAuth2RefreshTokenChanged
#define kGTMOAuth2RefreshTokenChanged __NS_SYMBOL(kGTMOAuth2RefreshTokenChanged)
#endif

#ifndef kGTMOAuth2AccessTokenRefreshFailed
#define kGTMOAuth2AccessTokenRefreshFailed __NS_SYMBOL(kGTMOAuth2AccessTokenRefreshFailed)
#endif

#ifndef kGTMOAuth2WebViewStartedLoading
#define kGTMOAuth2WebViewStartedLoading __NS_SYMBOL(kGTMOAuth2WebViewStartedLoading)
#endif

#ifndef kGTMOAuth2WebViewStoppedLoading
#define kGTMOAuth2WebViewStoppedLoading __NS_SYMBOL(kGTMOAuth2WebViewStoppedLoading)
#endif

#ifndef kGTMOAuth2WebViewKey
#define kGTMOAuth2WebViewKey __NS_SYMBOL(kGTMOAuth2WebViewKey)
#endif

#ifndef kGTMOAuth2WebViewStopKindKey
#define kGTMOAuth2WebViewStopKindKey __NS_SYMBOL(kGTMOAuth2WebViewStopKindKey)
#endif

#ifndef kGTMOAuth2WebViewFinished
#define kGTMOAuth2WebViewFinished __NS_SYMBOL(kGTMOAuth2WebViewFinished)
#endif

#ifndef kGTMOAuth2WebViewFailed
#define kGTMOAuth2WebViewFailed __NS_SYMBOL(kGTMOAuth2WebViewFailed)
#endif

#ifndef kGTMOAuth2WebViewCancelled
#define kGTMOAuth2WebViewCancelled __NS_SYMBOL(kGTMOAuth2WebViewCancelled)
#endif

#ifndef kGTMOAuth2NetworkLost
#define kGTMOAuth2NetworkLost __NS_SYMBOL(kGTMOAuth2NetworkLost)
#endif

#ifndef kGTMOAuth2NetworkFound
#define kGTMOAuth2NetworkFound __NS_SYMBOL(kGTMOAuth2NetworkFound)
#endif

#ifndef kGDataUseRegisteredClass
#define kGDataUseRegisteredClass __NS_SYMBOL(kGDataUseRegisteredClass)
#endif

#ifndef kGDataStandardUploadChunkSize
#define kGDataStandardUploadChunkSize __NS_SYMBOL(kGDataStandardUploadChunkSize)
#endif

#ifndef kGDataServiceErrorDomain
#define kGDataServiceErrorDomain __NS_SYMBOL(kGDataServiceErrorDomain)
#endif

#ifndef kGDataServerErrorStringKey
#define kGDataServerErrorStringKey __NS_SYMBOL(kGDataServerErrorStringKey)
#endif

#ifndef kGDataStructuredErrorsKey
#define kGDataStructuredErrorsKey __NS_SYMBOL(kGDataStructuredErrorsKey)
#endif

#ifndef kGDataETagWildcard
#define kGDataETagWildcard __NS_SYMBOL(kGDataETagWildcard)
#endif

#ifndef kGDataServiceTicketParsingStartedNotification
#define kGDataServiceTicketParsingStartedNotification __NS_SYMBOL(kGDataServiceTicketParsingStartedNotification)
#endif

#ifndef kGDataServiceTicketParsingStoppedNotification
#define kGDataServiceTicketParsingStoppedNotification __NS_SYMBOL(kGDataServiceTicketParsingStoppedNotification)
#endif

#ifndef kFetcherRetryInvocationKey
#define kFetcherRetryInvocationKey __NS_SYMBOL(kFetcherRetryInvocationKey)
#endif

#ifndef kGTMOAuth2KeychainErrorDomain
#define kGTMOAuth2KeychainErrorDomain __NS_SYMBOL(kGTMOAuth2KeychainErrorDomain)
#endif

#ifndef kGTMOAuth2CookiesWillSwapOut
#define kGTMOAuth2CookiesWillSwapOut __NS_SYMBOL(kGTMOAuth2CookiesWillSwapOut)
#endif

#ifndef kGTMOAuth2CookiesDidSwapIn
#define kGTMOAuth2CookiesDidSwapIn __NS_SYMBOL(kGTMOAuth2CookiesDidSwapIn)
#endif

#ifndef kGDataNamespaceAtom
#define kGDataNamespaceAtom __NS_SYMBOL(kGDataNamespaceAtom)
#endif

#ifndef kGDataNamespaceAtomPrefix
#define kGDataNamespaceAtomPrefix __NS_SYMBOL(kGDataNamespaceAtomPrefix)
#endif

#ifndef kGDataNamespaceAtomPub
#define kGDataNamespaceAtomPub __NS_SYMBOL(kGDataNamespaceAtomPub)
#endif

#ifndef kGDataNamespaceAtomPubPrefix
#define kGDataNamespaceAtomPubPrefix __NS_SYMBOL(kGDataNamespaceAtomPubPrefix)
#endif

#ifndef kGDataNamespaceOpenSearch
#define kGDataNamespaceOpenSearch __NS_SYMBOL(kGDataNamespaceOpenSearch)
#endif

#ifndef kGDataNamespaceOpenSearchPrefix
#define kGDataNamespaceOpenSearchPrefix __NS_SYMBOL(kGDataNamespaceOpenSearchPrefix)
#endif

#ifndef kGDataNamespaceXHTML
#define kGDataNamespaceXHTML __NS_SYMBOL(kGDataNamespaceXHTML)
#endif

#ifndef kGDataNamespaceXHTMLPrefix
#define kGDataNamespaceXHTMLPrefix __NS_SYMBOL(kGDataNamespaceXHTMLPrefix)
#endif

#ifndef kGDataNamespaceGData
#define kGDataNamespaceGData __NS_SYMBOL(kGDataNamespaceGData)
#endif

#ifndef kGDataNamespaceGDataPrefix
#define kGDataNamespaceGDataPrefix __NS_SYMBOL(kGDataNamespaceGDataPrefix)
#endif

#ifndef kGDataNamespaceBatch
#define kGDataNamespaceBatch __NS_SYMBOL(kGDataNamespaceBatch)
#endif

#ifndef kGDataNamespaceBatchPrefix
#define kGDataNamespaceBatchPrefix __NS_SYMBOL(kGDataNamespaceBatchPrefix)
#endif

#ifndef kGTMHTTPFetcherStartedNotification
#define kGTMHTTPFetcherStartedNotification __NS_SYMBOL(kGTMHTTPFetcherStartedNotification)
#endif

#ifndef kGTMHTTPFetcherStoppedNotification
#define kGTMHTTPFetcherStoppedNotification __NS_SYMBOL(kGTMHTTPFetcherStoppedNotification)
#endif

#ifndef kGTMHTTPFetcherRetryDelayStartedNotification
#define kGTMHTTPFetcherRetryDelayStartedNotification __NS_SYMBOL(kGTMHTTPFetcherRetryDelayStartedNotification)
#endif

#ifndef kGTMHTTPFetcherRetryDelayStoppedNotification
#define kGTMHTTPFetcherRetryDelayStoppedNotification __NS_SYMBOL(kGTMHTTPFetcherRetryDelayStoppedNotification)
#endif

#ifndef kGTMHTTPFetcherErrorDomain
#define kGTMHTTPFetcherErrorDomain __NS_SYMBOL(kGTMHTTPFetcherErrorDomain)
#endif

#ifndef kGTMHTTPFetcherStatusDomain
#define kGTMHTTPFetcherStatusDomain __NS_SYMBOL(kGTMHTTPFetcherStatusDomain)
#endif

#ifndef kGTMHTTPFetcherErrorChallengeKey
#define kGTMHTTPFetcherErrorChallengeKey __NS_SYMBOL(kGTMHTTPFetcherErrorChallengeKey)
#endif

#ifndef kGTMHTTPFetcherStatusDataKey
#define kGTMHTTPFetcherStatusDataKey __NS_SYMBOL(kGTMHTTPFetcherStatusDataKey)
#endif

