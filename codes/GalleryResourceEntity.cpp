void __fastcall GalleryResourceEntity___ctor(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44D63 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44D63 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GalleryResourceEntity__CreatePK(int32_t galleryId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B44D62 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B44D62 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           galleryId,
           idx,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GalleryResourceEntity__CreatePrimaryKey(
        GalleryResourceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GalleryResourceEntity__CreatePK(this->fields.galleryId, this->fields.idx, v2);
}


System_String_o *__fastcall GalleryResourceEntity__GetAssetPath(
        GalleryResourceEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *assetPath; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *path; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B44D5F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1059/*".usm"*/, method);
    byte_4B44D5F = 1;
  }
  path = 0LL;
  assetPath = this->fields.assetPath;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BDBAD4(0LL, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0LL) && GalleryResourceEntity__TryGetMaleAssetPath(this, &path, v6) )
    assetPath = path;
  if ( GalleryType__IsMovie(this->fields.galleryType, 0LL) && !System_String__IsNullOrEmpty(assetPath, 0LL) )
    return System_String__Concat_62572260(assetPath, (System_String_o *)StringLiteral_1059/*".usm"*/, 0LL);
  return assetPath;
}


System_String_o *__fastcall GalleryResourceEntity__GetObjectName(
        GalleryResourceEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *objectName; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  name = 0LL;
  objectName = this->fields.objectName;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BDBAD4(0LL, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0LL) && GalleryResourceEntity__TryGetMaleObjectName(this, &name, v6) )
    return name;
  return objectName;
}


System_String_o *__fastcall GalleryResourceEntity__GetTitleName(
        GalleryResourceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  QuestEntity_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t WarId; // w0
  Il2CppObject *ChapterSubStr; // x19
  System_String_o *v15; // x0
  System_String_o *titleName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44D60 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_8579/*"MATERIAL_MAP_QUEST_TITLE"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B44D60 = 1;
  }
  titleName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !GalleryResourceEntity__TryGetOverWriteTitleName(this, &titleName, v2) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.questId,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0LL )
    {
      sub_1BDBAD4(Master_object, v10);
    }
    v11 = (QuestEntity_o *)Master_object;
    titleName = QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0LL);
    if ( v11->fields.chapterSubId >= 1 )
    {
      WarId = GalleryResourceEntity__GetWarId(this, v12);
      ChapterSubStr = (Il2CppObject *)QuestEntity__getChapterSubStr(v11, WarId, 0LL);
      if ( !System_String__IsNullOrEmpty((System_String_o *)ChapterSubStr, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8579/*"MATERIAL_MAP_QUEST_TITLE"*/, 0LL);
        return System_String__Format_62613552(v15, ChapterSubStr, (Il2CppObject *)titleName, 0LL);
      }
    }
  }
  return titleName;
}


int32_t __fastcall GalleryResourceEntity__GetWarId(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44D61 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GalleryMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__, v4);
    byte_4B44D61 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GalleryMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.galleryId,
                                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[1].monitor;
LABEL_11:
    sub_1BDBAD4(Master_object, v6);
  }
  return 0;
}


float __fastcall GalleryResourceEntity__GetZoomRateMax(
        GalleryResourceEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B44D5B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_25104/*"zoomRateMax"*/, method);
    byte_4B44D5B = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25104/*"zoomRateMax"*/, defaultValue, 0LL)
       / 1000.0;
}


bool __fastcall GalleryResourceEntity__TryGetMaleAssetPath(
        GalleryResourceEntity_o *this,
        System_String_o **path,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44D5C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21423/*"maleAssetPath"*/, path);
    byte_4B44D5C = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21423/*"maleAssetPath"*/, 0LL, 0LL);
  *path = StringValue;
  sub_1BDB81C((CGThumbnailListItem_o *)path, (int32_t)StringValue, v6, v7);
  return *path != 0LL;
}


bool __fastcall GalleryResourceEntity__TryGetMaleObjectName(
        GalleryResourceEntity_o *this,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44D5D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21425/*"maleObjectName"*/, name);
    byte_4B44D5D = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21425/*"maleObjectName"*/, 0LL, 0LL);
  *name = StringValue;
  sub_1BDB81C((CGThumbnailListItem_o *)name, (int32_t)StringValue, v6, v7);
  return *name != 0LL;
}


bool __fastcall GalleryResourceEntity__TryGetOverWriteTitleName(
        GalleryResourceEntity_o *this,
        System_String_o **titleName,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44D5E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22537/*"overWriteTitleName"*/, titleName);
    byte_4B44D5E = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22537/*"overWriteTitleName"*/, 0LL, 0LL);
  *titleName = StringValue;
  sub_1BDB81C((CGThumbnailListItem_o *)titleName, (int32_t)StringValue, v6, v7);
  return !System_String__IsNullOrEmpty(*titleName, 0LL);
}