void __fastcall GalleryResourceEntity___ctor(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E787 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_string___ctor__, method);
    byte_4A4E787 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3211E14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GalleryResourceEntity__CreatePK(int32_t galleryId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A4E786 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4A4E786 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           galleryId,
           idx,
           (const MethodInfo_2F6BE40 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A4E784 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1056/*".usm"*/, method);
    byte_4A4E784 = 1;
  }
  path = 0LL;
  assetPath = this->fields.assetPath;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B86614(0LL, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0LL) && GalleryResourceEntity__TryGetMaleAssetPath(this, &path, v6) )
    assetPath = path;
  if ( GalleryType__IsMovie(this->fields.galleryType, 0LL) && !System_String__IsNullOrEmpty(assetPath, 0LL) )
    return System_String__Concat_61645176(assetPath, (System_String_o *)StringLiteral_1056/*".usm"*/, 0LL);
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
    sub_1B86614(0LL, v5);
  if ( UserGameEntity__IsMale(SelfUserGame, 0LL) && GalleryResourceEntity__TryGetMaleObjectName(this, &name, v6) )
    return name;
  return objectName;
}


int32_t __fastcall GalleryResourceEntity__GetWarId(GalleryResourceEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E785 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_GalleryMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__, v4);
    byte_4A4E785 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GalleryMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.galleryId,
                                    (const MethodInfo_32142CC *)Method_DataMasterBase_GalleryMaster__GalleryEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[1].monitor;
LABEL_11:
    sub_1B86614(Master_object, v6);
  }
  return 0;
}


float __fastcall GalleryResourceEntity__GetZoomRateMax(
        GalleryResourceEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4A4E781 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_24747/*"zoomRateMax"*/, method);
    byte_4A4E781 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24747/*"zoomRateMax"*/, defaultValue, 0LL)
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

  if ( (byte_4A4E782 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_21086/*"maleAssetPath"*/, path);
    byte_4A4E782 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21086/*"maleAssetPath"*/, 0LL, 0LL);
  *path = StringValue;
  sub_1B8635C((CGThumbnailListItem_o *)path, (int32_t)StringValue, v6, v7);
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

  if ( (byte_4A4E783 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_21088/*"maleObjectName"*/, name);
    byte_4A4E783 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21088/*"maleObjectName"*/, 0LL, 0LL);
  *name = StringValue;
  sub_1B8635C((CGThumbnailListItem_o *)name, (int32_t)StringValue, v6, v7);
  return *name != 0LL;
}