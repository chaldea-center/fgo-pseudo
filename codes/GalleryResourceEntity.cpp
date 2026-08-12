void GalleryResourceEntity___ctor(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970C79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970C79 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GalleryResourceEntity__CreatePK(int32_t galleryId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5970C78 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970C78 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           galleryId,
           idx,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GalleryResourceEntity__CreatePrimaryKey(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GalleryResourceEntity__CreatePK(this->fields.galleryId, this->fields.idx, v2);
}


System_String_o *GalleryResourceEntity__GetAssetPath(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  System_String_o *path; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970C74 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1121/*".usm"*/);
    byte_5970C74 = 1;
  }
  assetPath = this->fields.assetPath;
  path = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0) && GalleryResourceEntity__TryGetMaleAssetPath(this, &path, v6) )
    assetPath = path;
  if ( GalleryType__IsMovie(this->fields.galleryType, 0)
    && !System_String__IsNullOrEmpty(assetPath, 0)
    && GalleryResourceEntity__GetDownloadType(this, v7) != 1 )
  {
    return System_String__Concat_75651716(assetPath, (System_String_o *)StringLiteral_1121/*".usm"*/, 0);
  }
  return assetPath;
}


int32_t GalleryResourceEntity__GetDownloadType(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970C77 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19521/*"downloadType"*/);
    byte_5970C77 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19521/*"downloadType"*/, 0, 0);
}


System_String_o *GalleryResourceEntity__GetObjectName(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  System_String_o *objectName; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  objectName = this->fields.objectName;
  name = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0) && GalleryResourceEntity__TryGetMaleObjectName(this, &name, v6) )
    return name;
  return objectName;
}


System_String_o *GalleryResourceEntity__GetTitleName(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  QuestEntity_o *v7; // x20
  System_String_o *QuestName; // x0
  const MethodInfo *v9; // x1
  int chapterSubId; // w8
  int32_t WarId; // w0
  Il2CppObject *ChapterSubStr; // x19
  __int64 v13; // x1
  System_String_o *v14; // x0
  System_String_o *titleName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970C75 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8950/*"MATERIAL_MAP_QUEST_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970C75 = 1;
  }
  titleName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !GalleryResourceEntity__TryGetOverWriteTitleName(this, &titleName, v2) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.questId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0 )
    {
      sub_2213CDC(Master_object, v6);
    }
    v7 = (QuestEntity_o *)Master_object;
    QuestName = QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
    chapterSubId = v7->fields.chapterSubId;
    titleName = QuestName;
    if ( chapterSubId >= 1 )
    {
      WarId = GalleryResourceEntity__GetWarId(this, v9);
      ChapterSubStr = (Il2CppObject *)QuestEntity__getChapterSubStr(v7, WarId, 0);
      if ( !System_String__IsNullOrEmpty((System_String_o *)ChapterSubStr, 0) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8950/*"MATERIAL_MAP_QUEST_TITLE"*/, 0);
        return System_String__Format_75697880(v14, ChapterSubStr, (Il2CppObject *)titleName, 0);
      }
    }
  }
  return titleName;
}


int32_t GalleryResourceEntity__GetWarId(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970C76 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GalleryMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
    byte_5970C76 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GalleryMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.galleryId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[1].monitor;
LABEL_11:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


float GalleryResourceEntity__GetZoomRateMax(
        GalleryResourceEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5970C70 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26409/*"zoomRateMax"*/);
    byte_5970C70 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_26409/*"zoomRateMax"*/, defaultValue, 0)
       / 1000.0;
}


bool GalleryResourceEntity__TryGetMaleAssetPath(
        GalleryResourceEntity_o *this,
        System_String_o **path,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970C71 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22495/*"maleAssetPath"*/);
    byte_5970C71 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22495/*"maleAssetPath"*/, 0, 0);
  *path = StringValue;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)path, (int32_t)StringValue, v6, v7, v8, v9, v10, v11);
  return *path != 0;
}


bool GalleryResourceEntity__TryGetMaleObjectName(
        GalleryResourceEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970C72 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22498/*"maleObjectName"*/);
    byte_5970C72 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22498/*"maleObjectName"*/, 0, 0);
  *name = StringValue;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)StringValue, v6, v7, v8, v9, v10, v11);
  return *name != 0;
}


bool GalleryResourceEntity__TryGetOverWriteTitleName(
        GalleryResourceEntity_o *this,
        System_String_o **titleName,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970C73 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23657/*"overWriteTitleName"*/);
    byte_5970C73 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23657/*"overWriteTitleName"*/, 0, 0);
  *titleName = StringValue;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleName, (int32_t)StringValue, v6, v7, v8, v9, v10, v11);
  return !System_String__IsNullOrEmpty(*titleName, 0);
}