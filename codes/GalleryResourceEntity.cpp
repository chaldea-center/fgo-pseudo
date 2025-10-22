void GalleryResourceEntity___ctor(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C5707D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C5707D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GalleryResourceEntity__CreatePK(int32_t galleryId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C5707C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C5707C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           galleryId,
           idx,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_o *path; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C57079 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1046/*".usm"*/);
    byte_4C57079 = 1;
  }
  path = 0;
  assetPath = this->fields.assetPath;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C3E7C0(0, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0) && GalleryResourceEntity__TryGetMaleAssetPath(this, &path, v6) )
    assetPath = path;
  if ( GalleryType__IsMovie(this->fields.galleryType, 0) && !System_String__IsNullOrEmpty(assetPath, 0) )
    return System_String__Concat_63636468(assetPath, (System_String_o *)StringLiteral_1046/*".usm"*/, 0);
  return assetPath;
}


System_String_o *GalleryResourceEntity__GetObjectName(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  System_String_o *objectName; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  name = 0;
  objectName = this->fields.objectName;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C3E7C0(0, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0) && GalleryResourceEntity__TryGetMaleObjectName(this, &name, v6) )
    return name;
  return objectName;
}


System_String_o *GalleryResourceEntity__GetTitleName(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  QuestEntity_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t WarId; // w0
  Il2CppObject *ChapterSubStr; // x19
  System_String_o *v10; // x0
  System_String_o *titleName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5707A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8587/*"MATERIAL_MAP_QUEST_TITLE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5707A = 1;
  }
  titleName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !GalleryResourceEntity__TryGetOverWriteTitleName(this, &titleName, v2) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.questId,
                            (const MethodInfo_33B2F58 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0 )
    {
      sub_1C3E7C0(Master_object, v5);
    }
    v6 = (QuestEntity_o *)Master_object;
    titleName = QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
    if ( v6->fields.chapterSubId >= 1 )
    {
      WarId = GalleryResourceEntity__GetWarId(this, v7);
      ChapterSubStr = (Il2CppObject *)QuestEntity__getChapterSubStr(v6, WarId, 0);
      if ( !System_String__IsNullOrEmpty((System_String_o *)ChapterSubStr, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8587/*"MATERIAL_MAP_QUEST_TITLE"*/, 0);
        return System_String__Format_63677760(v10, ChapterSubStr, (Il2CppObject *)titleName, 0);
      }
    }
  }
  return titleName;
}


int32_t GalleryResourceEntity__GetWarId(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5707B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GalleryMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
    byte_4C5707B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GalleryMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.galleryId,
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[1].monitor;
LABEL_11:
    sub_1C3E7C0(Master_object, v4);
  }
  return 0;
}


float GalleryResourceEntity__GetZoomRateMax(
        GalleryResourceEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C57075 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_25050/*"zoomRateMax"*/);
    byte_4C57075 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25050/*"zoomRateMax"*/, defaultValue, 0)
       / 1000.0;
}


bool GalleryResourceEntity__TryGetMaleAssetPath(
        GalleryResourceEntity_o *this,
        System_String_o **path,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C57076 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_21426/*"maleAssetPath"*/);
    byte_4C57076 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21426/*"maleAssetPath"*/, 0, 0);
  *path = StringValue;
  sub_1C3E508((CGThumbnailListItem_o *)path, (int32_t)StringValue, v6, v7);
  return *path != 0;
}


bool GalleryResourceEntity__TryGetMaleObjectName(
        GalleryResourceEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C57077 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_21428/*"maleObjectName"*/);
    byte_4C57077 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21428/*"maleObjectName"*/, 0, 0);
  *name = StringValue;
  sub_1C3E508((CGThumbnailListItem_o *)name, (int32_t)StringValue, v6, v7);
  return *name != 0;
}


bool GalleryResourceEntity__TryGetOverWriteTitleName(
        GalleryResourceEntity_o *this,
        System_String_o **titleName,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C57078 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22536/*"overWriteTitleName"*/);
    byte_4C57078 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22536/*"overWriteTitleName"*/, 0, 0);
  *titleName = StringValue;
  sub_1C3E508((CGThumbnailListItem_o *)titleName, (int32_t)StringValue, v6, v7);
  return !System_String__IsNullOrEmpty(*titleName, 0);
}