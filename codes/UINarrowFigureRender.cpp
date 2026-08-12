void UINarrowFigureRender___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  unsigned int v5; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UINarrowFigureRender_StaticFields *v7; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59721B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_AsReadOnly_Vector2___);
    sub_2213A60(&UINarrowFigureRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_59721B8 = 1;
  }
  v1 = UnityEngine_Vector2___TypeInfo;
  static_fields = UINarrowFigureRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TEXTURE_PAGE_SIZE = xmmword_E9CB00;
  static_fields->BODY_SIZE_Y = 375;
  v3 = sub_2213B20(v1, 3);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v5 = *(_DWORD *)(v3 + 24);
  if ( !v5 || (*(_QWORD *)(v3 + 32) = 0, v5 == 1) || (*(_QWORD *)(v3 + 40) = 1125777408, v5 <= 2) )
    sub_2213CE4(v3);
  *(_QWORD *)(v3 + 48) = 1134166016;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v3,
                   (const MethodInfo_399276C *)Method_System_Array_AsReadOnly_Vector2___);
  v7 = UINarrowFigureRender_TypeInfo->static_fields;
  v7->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->bodyTopTable, (int32_t)Only_Vector2, v8, v9, v10, v11, v12, v13);
  UINarrowFigureRender_TypeInfo->static_fields->bodySize = (struct UnityEngine_Vector2_o)0x43BB800043140000LL;
}


void UINarrowFigureRender___ctor(UINarrowFigureRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_o *UINarrowFigureRender__GetAssetName(int32_t svtId, int32_t limitCountStage, const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF
  int32_t imageLimitCount; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = svtId;
  imageLimitCount = limitCountStage;
  svtIda = svtId;
  if ( (byte_59721B4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_9785/*"NarrowFigure/100000"*/);
    sub_2213A60(&StringLiteral_9786/*"NarrowFigure/{0}"*/);
    byte_59721B4 = 1;
  }
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v7);
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCount, 0);
    v4 = svtIda;
  }
  v12 = v4;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v10 = System_String__Format((System_String_o *)StringLiteral_9786/*"NarrowFigure/{0}"*/, v8, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  if ( AssetManager__isExistAssetStorage(v10, 0) )
    return v10;
  else
    return (System_String_o *)StringLiteral_9785/*"NarrowFigure/100000"*/;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *UINarrowFigureRender__GetBodyTexture(
        int32_t svtId,
        int32_t limitCountStage,
        int32_t *imageIndex,
        System_String_o *changeSuffix,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *AssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  AssetData_o *v13; // x20
  System_String_o *LastName; // x21
  int v15; // w25
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Object_object__58532980; // x22
  __int64 v20; // x1
  UINarrowFigureRender_c *v21; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59721B7 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UINarrowFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    byte_59721B7 = 1;
  }
  if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, *(_QWORD *)&limitCountStage);
  AssetName = UINarrowFigureRender__GetAssetName(svtId, limitCountStage, (const MethodInfo *)imageIndex);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  AssetStorage = AssetManager__getAssetStorage(AssetName, 0);
  if ( !AssetStorage )
    sub_2213CDC(0, v12);
  v13 = AssetStorage;
  LastName = AssetData__get_LastName(AssetStorage, 0);
  v15 = *imageIndex / UINarrowFigureRender_TypeInfo->static_fields->TEXTURE_PAGE_SIZE;
  if ( !System_String__IsNullOrEmpty(changeSuffix, 0) )
    LastName = System_String__Concat_75651716(LastName, changeSuffix, 0);
  if ( v15 < 1 )
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                        v13,
                                        LastName,
                                        (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  v23 = v15 + 1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
  v17 = System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, (Il2CppObject *)LastName, v16, 0);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              v13,
                              v17,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
  {
    v21 = UINarrowFigureRender_TypeInfo;
    if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v20);
      v21 = UINarrowFigureRender_TypeInfo;
    }
    *imageIndex = v21->static_fields->TEXTURE_PAGE_SIZE - 1;
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                        v13,
                                        LastName,
                                        (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  }
  return (UnityEngine_Texture2D_o *)Object_object__58532980;
}


UnityEngine_Rect_o UINarrowFigureRender__GetBodyUvRect(int32_t imageIndex, const MethodInfo *method)
{
  UINarrowFigureRender_c *v3; // x0
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  struct UINarrowFigureRender_StaticFields *v7; // x8
  int BODY_SIZE_X; // s2
  float x; // s4
  float y; // s6
  int BODY_SIZE_Y; // w9
  int MAIN_SIZE_X; // s3
  float v13; // s3
  float v14; // s0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59721B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_2213A60(&UINarrowFigureRender_TypeInfo);
    byte_59721B6 = 1;
  }
  v3 = UINarrowFigureRender_TypeInfo;
  if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, method);
    v3 = UINarrowFigureRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  bodyTopTable = static_fields->bodyTopTable;
  if ( !bodyTopTable )
    sub_2213CDC(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodyTopTable,
           imageIndex % static_fields->TEXTURE_PAGE_SIZE,
           (const MethodInfo_474D048 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  v7 = UINarrowFigureRender_TypeInfo->static_fields;
  BODY_SIZE_X = v7->BODY_SIZE_X;
  x = v7->bodySize.fields.x;
  y = v7->bodySize.fields.y;
  BODY_SIZE_Y = v7->BODY_SIZE_Y;
  MAIN_SIZE_X = v7->MAIN_SIZE_X;
  LODWORD(v7) = v7->MAIN_SIZE_Y;
  v13 = (float)MAIN_SIZE_X;
  v14 = (float)(Item.fields.x + (float)((float)((float)BODY_SIZE_X - x) * 0.5)) / v13;
  result.fields.m_Width = x / v13;
  result.fields.m_XMin = (float)(1.0 / v13) + v14;
  result.fields.m_Height = y / (float)(int)v7;
  result.fields.m_YMin = (float)((float)(Item.fields.y + (float)((float)BODY_SIZE_Y - y)) / (float)(int)v7)
                       + (float)((float)((int)v7 - BODY_SIZE_Y) / (float)(int)v7);
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
  int32_t v10; // w22
  int32_t v11; // w23
  __int64 v13; // x1
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  System_String_o *v17; // x24
  __int64 v18; // x1
  int32_t v19; // w25
  int32_t v20; // w0
  int32_t v21; // w25
  UnityEngine_Texture2D_o *BodyTexture; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  UINarrowFigureRender_c *v30; // x8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t imageIndex; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t imageLimitCount; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o BodyUvRect; // 0:kr00_16.16

  v10 = limitCountStage;
  v11 = svtId;
  imageLimitCount = limitCountStage;
  svtIda = svtId;
  if ( (byte_59721B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UINarrowFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_17227/*"_group"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59721B5 = 1;
  }
  imageIndex = 0;
  entity = 0;
  if ( LimitCountUtility__IsCostume(v10, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
    Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( Master_object )
    {
      ServantLimitAddMaster__getCostumeId(Master_object, &svtIda, &imageLimitCount, 0);
      v10 = imageLimitCount;
      v11 = svtIda;
      v17 = 0;
      imageIndex = imageLimitCount;
      goto LABEL_23;
    }
LABEL_26:
    sub_2213CDC(Master_object, v15);
  }
  if ( useGroupImage )
    v17 = (System_String_o *)StringLiteral_17227/*"_group"*/;
  else
    v17 = 0;
  imageIndex = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v10, 0);
  v19 = LimitCountUtility__ConvertStageToLimitCount_48001960(v10, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Master_object, &entity, v11, v19, 0) )
  {
    Master_object = (ServantLimitAddMaster_o *)entity;
    if ( !entity )
      goto LABEL_26;
    v20 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
    if ( (v20 & 0x80000000) == 0 )
    {
      v21 = v20;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_object )
        goto LABEL_26;
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v21, 0, 0, 0) )
      {
        Master_object = (ServantLimitAddMaster_o *)entity;
        if ( !entity )
          goto LABEL_26;
        v17 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
    }
  }
LABEL_23:
  if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v15);
  BodyTexture = UINarrowFigureRender__GetBodyTexture(v11, v10, &imageIndex, v17, v16);
  *texture2d = BodyTexture;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)texture2d, (int32_t)BodyTexture, v23, v24, v25, v26, v27, v28);
  BodyUvRect = UINarrowFigureRender__GetBodyUvRect(imageIndex, v29);
  uvRect->fields.m_XMin = BodyUvRect.fields.m_XMin;
  uvRect->fields.m_YMin = BodyUvRect.fields.m_YMin;
  v30 = UINarrowFigureRender_TypeInfo;
  uvRect->fields.m_Width = BodyUvRect.fields.m_Width;
  uvRect->fields.m_Height = BodyUvRect.fields.m_Height;
  *size = v30->static_fields->bodySize;
}