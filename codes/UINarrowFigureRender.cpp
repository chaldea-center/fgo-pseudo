void UINarrowFigureRender___cctor(const MethodInfo *method)
{
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  unsigned int v4; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UINarrowFigureRender_StaticFields *v6; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E062EE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1CE6700(&UINarrowFigureRender_TypeInfo);
    sub_1CE6700(&UnityEngine_Vector2___TypeInfo);
    byte_4E062EE = 1;
  }
  static_fields = UINarrowFigureRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TEXTURE_PAGE_SIZE = xmmword_D259C0;
  static_fields->BODY_SIZE_Y = 375;
  v2 = sub_1CE67A8(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v2 )
    sub_1CE6958(0, v3);
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 || (*(_QWORD *)(v2 + 32) = 0, v4 == 1) || (*(_QWORD *)(v2 + 40) = 1125777408, v4 <= 2) )
    sub_1CE6960(v2);
  *(_QWORD *)(v2 + 48) = 1134166016;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v2,
                   (const MethodInfo_32CB150 *)Method_System_Array_AsReadOnly_Vector2___);
  v6 = UINarrowFigureRender_TypeInfo->static_fields;
  v6->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v6->bodyTopTable, (int32_t)Only_Vector2, v7, v8, v9, v10, v11, v12);
  UINarrowFigureRender_TypeInfo->static_fields->bodySize = (struct UnityEngine_Vector2_o)0x43BB800043140000LL;
}


void UINarrowFigureRender___ctor(UINarrowFigureRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_o *UINarrowFigureRender__GetAssetName(int32_t svtId, int32_t limitCountStage, const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x19
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF
  int32_t imageLimitCount; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = svtId;
  imageLimitCount = limitCountStage;
  svtIda = svtId;
  if ( (byte_4E062EA & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&StringLiteral_9471/*"NarrowFigure/100000"*/);
    sub_1CE6700(&StringLiteral_9472/*"NarrowFigure/{0}"*/);
    byte_4E062EA = 1;
  }
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !Master_object )
      sub_1CE6958(0, v6);
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCount, 0);
    v4 = svtIda;
  }
  v10 = v4;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v8 = System_String__Format((System_String_o *)StringLiteral_9472/*"NarrowFigure/{0}"*/, v7, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v8, 0) )
    return v8;
  else
    return (System_String_o *)StringLiteral_9471/*"NarrowFigure/100000"*/;
}


UnityEngine_Texture2D_o *UINarrowFigureRender__GetBodyTexture(
        int32_t svtId,
        int32_t limitCountStage,
        int32_t *imageIndex,
        System_String_o *changeSuffix,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v11; // x1
  AssetData_o *v12; // x20
  System_String_o *LastName; // x21
  int v14; // w25
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  Il2CppObject *Object_object__52317288; // x22
  UINarrowFigureRender_c *v18; // x0
  int v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4E062ED & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_Texture2D____79905048);
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UINarrowFigureRender_TypeInfo);
    sub_1CE6700(&StringLiteral_25610/*"{0}_{1}"*/);
    byte_4E062ED = 1;
  }
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  AssetName = UINarrowFigureRender__GetAssetName(svtId, limitCountStage, (const MethodInfo *)imageIndex);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(AssetName, 0);
  if ( !AssetStorage )
    sub_1CE6958(0, v11);
  v12 = AssetStorage;
  LastName = AssetData__get_LastName(AssetStorage, 0);
  v14 = *imageIndex / UINarrowFigureRender_TypeInfo->static_fields->TEXTURE_PAGE_SIZE;
  if ( !System_String__IsNullOrEmpty(changeSuffix, 0) )
    LastName = System_String__Concat_65122828(LastName, changeSuffix, 0);
  if ( v14 < 1 )
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52317288(
                                        v12,
                                        LastName,
                                        (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_Texture2D____79905048);
  v20 = v14 + 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v16 = System_String__Format_65164136((System_String_o *)StringLiteral_25610/*"{0}_{1}"*/, (Il2CppObject *)LastName, v15, 0);
  Object_object__52317288 = AssetData__GetObject_object__52317288(
                              v12,
                              v16,
                              (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_Texture2D____79905048);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__52317288, 0, 0) )
  {
    v18 = UINarrowFigureRender_TypeInfo;
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
      v18 = UINarrowFigureRender_TypeInfo;
    }
    *imageIndex = v18->static_fields->TEXTURE_PAGE_SIZE - 1;
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52317288(
                                        v12,
                                        LastName,
                                        (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_Texture2D____79905048);
  }
  return (UnityEngine_Texture2D_o *)Object_object__52317288;
}


UnityEngine_Rect_o UINarrowFigureRender__GetBodyUvRect(int32_t imageIndex, const MethodInfo *method)
{
  UINarrowFigureRender_c *v3; // x0
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  struct UINarrowFigureRender_StaticFields *v7; // x8
  float x; // s3
  float y; // s4
  int MAIN_SIZE_Y; // w10
  float MAIN_SIZE_X; // s6
  float v12; // s2
  float v13; // s1
  float v14; // s0
  float v15; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E062EC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1CE6700(&UINarrowFigureRender_TypeInfo);
    byte_4E062EC = 1;
  }
  v3 = UINarrowFigureRender_TypeInfo;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v3 = UINarrowFigureRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  bodyTopTable = static_fields->bodyTopTable;
  if ( !bodyTopTable )
    sub_1CE6958(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodyTopTable,
           imageIndex % static_fields->TEXTURE_PAGE_SIZE,
           (const MethodInfo_3B1B87C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  v7 = UINarrowFigureRender_TypeInfo->static_fields;
  x = v7->bodySize.fields.x;
  y = v7->bodySize.fields.y;
  MAIN_SIZE_Y = v7->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)v7->MAIN_SIZE_X;
  v12 = x / MAIN_SIZE_X;
  v13 = (float)((float)(Item.fields.y + (float)((float)v7->BODY_SIZE_Y - y)) / (float)MAIN_SIZE_Y)
      + (float)((float)(MAIN_SIZE_Y - v7->BODY_SIZE_Y) / (float)MAIN_SIZE_Y);
  v14 = (float)(1.0 / MAIN_SIZE_X)
      + (float)((float)(Item.fields.x + (float)((float)((float)v7->BODY_SIZE_X - x) * 0.5)) / MAIN_SIZE_X);
  v15 = y / (float)MAIN_SIZE_Y;
  result.fields.m_Height = v15;
  result.fields.m_Width = v12;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v14;
  return result;
}


void UINarrowFigureRender__GetData(
        int32_t svtId,
        int32_t limitCountStage,
        bool useGroupImage,
        UnityEngine_Texture2D_o **texture2d,
        UnityEngine_Rect_o *uvRect,
        UnityEngine_Vector2_o *size,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_String_o *v16; // x22
  int32_t v17; // w24
  int32_t v18; // w0
  int32_t v19; // w23
  int32_t v20; // w23
  int32_t v21; // w24
  UnityEngine_Texture2D_o *BodyTexture; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t imageIndex; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t imageLimitCount; // [xsp+18h] [xbp-48h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-44h] BYREF

  imageLimitCount = limitCountStage;
  svtIda = svtId;
  if ( (byte_4E062EB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&UINarrowFigureRender_TypeInfo);
    sub_1CE6700(&StringLiteral_16709/*"_group"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E062EB = 1;
  }
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( Master_object )
    {
      ServantLimitAddMaster__getCostumeId(Master_object, &svtIda, &imageLimitCount, 0);
      v16 = 0;
      imageIndex = imageLimitCount;
      goto LABEL_23;
    }
LABEL_26:
    sub_1CE6958(Master_object, v14);
  }
  if ( useGroupImage )
    v16 = (System_String_o *)StringLiteral_16709/*"_group"*/;
  else
    v16 = 0;
  imageIndex = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(limitCountStage, 0);
  v17 = LimitCountUtility__ConvertStageToLimitCount_42187912(limitCountStage, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Master_object, &entity, svtId, v17, 0) )
  {
    Master_object = (ServantLimitAddMaster_o *)entity;
    if ( !entity )
      goto LABEL_26;
    v18 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
    if ( (v18 & 0x80000000) == 0 )
    {
      v19 = v18;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_object )
        goto LABEL_26;
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v19, 0, 0, 0) )
      {
        Master_object = (ServantLimitAddMaster_o *)entity;
        if ( !entity )
          goto LABEL_26;
        v16 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
    }
  }
LABEL_23:
  v21 = imageLimitCount;
  v20 = svtIda;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  BodyTexture = UINarrowFigureRender__GetBodyTexture(v20, v21, &imageIndex, v16, v15);
  *texture2d = BodyTexture;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)texture2d, (int32_t)BodyTexture, v23, v24, v25, v26, v27, v28);
  *uvRect = UINarrowFigureRender__GetBodyUvRect(imageIndex, v29);
  *size = UINarrowFigureRender_TypeInfo->static_fields->bodySize;
}