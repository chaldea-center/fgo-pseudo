void UINarrowFigureRender___cctor(const MethodInfo *method)
{
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  __int64 v2; // x0
  unsigned int v3; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UINarrowFigureRender_StaticFields *v5; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UINarrowFigureRender_c *v8; // x8

  if ( (byte_4C392B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    byte_4C392B5 = 1;
  }
  static_fields = UINarrowFigureRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_C0C870;
  *(_QWORD *)&static_fields->BODY_SIZE_X = 0x17700000094LL;
  v2 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v2 )
    sub_1C32E7C(0);
  v3 = *(_DWORD *)(v2 + 24);
  if ( !v3 || (*(_QWORD *)(v2 + 32) = 0, v3 == 1) || (*(_QWORD *)(v2 + 40) = 1125777408, v3 <= 2) )
    sub_1C32E84(v2);
  *(_QWORD *)(v2 + 48) = 1134166016;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v2,
                   (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  v5 = UINarrowFigureRender_TypeInfo->static_fields;
  v5->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->bodyTopTable, (int32_t)Only_Vector2, v6, v7);
  v8 = UINarrowFigureRender_TypeInfo;
  UINarrowFigureRender_TypeInfo->static_fields->bodySize = (struct UnityEngine_Vector2_o)0x43BB800043140000LL;
  v8->static_fields->bodyTextureSize = (struct UnityEngine_Vector2_o)0x43BB800043140000LL;
}


void UINarrowFigureRender___ctor(UINarrowFigureRender_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.imageLimitCount = -1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_o *UINarrowFigureRender__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  int32_t imageLimitCounta; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C392AD & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_9397/*"NarrowFigure/"*/);
    sub_1C32C20(&StringLiteral_9398/*"NarrowFigure/100000"*/);
    byte_4C392AD = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  v5 = System_Int32__ToString((int32_t)&svtIda, 0);
  v6 = System_String__Concat_63518544((System_String_o *)StringLiteral_9397/*"NarrowFigure/"*/, v5, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v6, 0) )
    return v6;
  else
    return (System_String_o *)StringLiteral_9398/*"NarrowFigure/100000"*/;
}


UnityEngine_Texture2D_o *UINarrowFigureRender__GetBodyAlphaTexture(
        UINarrowFigureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UINarrowFigureRender_c *v5; // x0
  int32_t textureImageLimitCount; // w22
  int v7; // w22
  System_String_o *LastName; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C392B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    sub_1C32C20(&StringLiteral_16629/*"a"*/);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C392B2 = 1;
  }
  v5 = UINarrowFigureRender_TypeInfo;
  textureImageLimitCount = this->fields.textureImageLimitCount;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v5 = UINarrowFigureRender_TypeInfo;
  }
  if ( !assetData )
    sub_1C32E7C(v5);
  v7 = textureImageLimitCount / v5->static_fields->TEXTURE_PAGE_SIZE;
  LastName = AssetData__get_LastName(assetData, 0);
  v15 = (Il2CppObject *)LastName;
  if ( this->fields.isChange )
    v15 = (Il2CppObject *)System_String__Concat_63518544(LastName, this->fields.changeSuffix, 0);
  if ( v7 >= 1 )
  {
    v19 = v7 + 1;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11, v12, v13, v14);
    v15 = (Il2CppObject *)System_String__Concat_63556544(v15, (Il2CppObject *)StringLiteral_16107/*"_"*/, v16, 0);
  }
  v17 = System_String__Concat_63518544((System_String_o *)v15, (System_String_o *)StringLiteral_16629/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      assetData,
                                      v17,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
}


UnityEngine_Vector2_o UINarrowFigureRender__GetBodySize(UINarrowFigureRender_o *this, const MethodInfo *method)
{
  UINarrowFigureRender_c *v2; // x0
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C392AF & 1) == 0 )
  {
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    byte_4C392AF = 1;
  }
  v2 = UINarrowFigureRender_TypeInfo;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v2 = UINarrowFigureRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->bodySize.fields.x;
  y = static_fields->bodySize.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Texture2D_o *UINarrowFigureRender__GetBodyTexture(
        UINarrowFigureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t imageLimitCount; // w21
  UINarrowFigureRender_c *v6; // x0
  int v7; // w22
  System_String_o *LastName; // x0
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *Object_object__51111776; // x22
  UINarrowFigureRender_c *v13; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C392B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C392B1 = 1;
  }
  v15 = 0;
  imageLimitCount = this->fields.imageLimitCount;
  this->fields.textureImageLimitCount = imageLimitCount;
  v6 = UINarrowFigureRender_TypeInfo;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v6 = UINarrowFigureRender_TypeInfo;
  }
  if ( !assetData )
    sub_1C32E7C(v6);
  v7 = imageLimitCount / v6->static_fields->TEXTURE_PAGE_SIZE;
  LastName = AssetData__get_LastName(assetData, 0);
  v9 = LastName;
  if ( this->fields.isChange )
    v9 = System_String__Concat_63518544(LastName, this->fields.changeSuffix, 0);
  if ( v7 < 1 )
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                        assetData,
                                        v9,
                                        (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  v15 = v7 + 1;
  v10 = System_Int32__ToString((int32_t)&v15, 0);
  v11 = System_String__Concat_63556792(v9, (System_String_o *)StringLiteral_16107/*"_"*/, v10, 0);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              assetData,
                              v11,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
  {
    v13 = UINarrowFigureRender_TypeInfo;
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
      v13 = UINarrowFigureRender_TypeInfo;
    }
    this->fields.textureImageLimitCount = v13->static_fields->TEXTURE_PAGE_SIZE - 1;
    return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                        assetData,
                                        v9,
                                        (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  }
  return (UnityEngine_Texture2D_o *)Object_object__51111776;
}


UnityEngine_Rect_o UINarrowFigureRender__GetBodyUvRect(UINarrowFigureRender_o *this, const MethodInfo *method)
{
  UINarrowFigureRender_c *v3; // x0
  int32_t textureImageLimitCount; // w19
  struct UINarrowFigureRender_StaticFields *static_fields; // x8
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  struct UINarrowFigureRender_StaticFields *v8; // x8
  float x; // s3
  float y; // s4
  int MAIN_SIZE_Y; // w10
  float MAIN_SIZE_X; // s6
  float v13; // s2
  float v14; // s1
  float v15; // s0
  float v16; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C392B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    byte_4C392B0 = 1;
  }
  v3 = UINarrowFigureRender_TypeInfo;
  textureImageLimitCount = this->fields.textureImageLimitCount;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v3 = UINarrowFigureRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  bodyTopTable = static_fields->bodyTopTable;
  if ( !bodyTopTable )
    sub_1C32E7C(0);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodyTopTable,
           textureImageLimitCount % static_fields->TEXTURE_PAGE_SIZE,
           (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  v8 = UINarrowFigureRender_TypeInfo->static_fields;
  x = v8->bodyTextureSize.fields.x;
  y = v8->bodyTextureSize.fields.y;
  MAIN_SIZE_Y = v8->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)v8->MAIN_SIZE_X;
  v13 = x / MAIN_SIZE_X;
  v14 = (float)((float)(Item.fields.y + (float)((float)v8->BODY_SIZE_Y - y)) / (float)MAIN_SIZE_Y)
      + (float)((float)(MAIN_SIZE_Y - v8->BODY_SIZE_Y) / (float)MAIN_SIZE_Y);
  v15 = (float)(1.0 / MAIN_SIZE_X)
      + (float)((float)(Item.fields.x + (float)((float)((float)v8->BODY_SIZE_X - x) * 0.5)) / MAIN_SIZE_X);
  v16 = y / (float)MAIN_SIZE_Y;
  result.fields.m_Height = v16;
  result.fields.m_Width = v13;
  result.fields.m_YMin = v14;
  result.fields.m_XMin = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureRender__MoveAlpha(
        UINarrowFigureRender_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  long double v4; // q9
  long double v5; // q10
  long double v6; // q11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  *(float *)&v6 = this->fields.mColor.fields.r;
  *(float *)&v5 = this->fields.mColor.fields.g;
  *(float *)&v4 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UINarrowFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      v6,
      v5,
      v4,
      *(long double *)&alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10.fields.r = *(float *)&v6;
    v10.fields.g = *(float *)&v5;
    v10.fields.b = *(float *)&v4;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureRender__MoveAlpha_43923600(
        UINarrowFigureRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v6; // q10
  long double v7; // q11
  long double v8; // q12
  long double v11; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRendererColor_o *v15; // x21
  _BOOL8 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Color_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4C392B3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C392B3 = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UINarrowFigureRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      callbackFunc,
      method,
      v8,
      v7,
      v6,
      v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v16 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_71205516(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v21.fields.r = *(float *)&v8;
    v21.fields.g = *(float *)&v7;
    v21.fields.b = *(float *)&v6;
    v21.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v21, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( v16 )
      {
        if ( v15 )
        {
          v15->fields.eventReceiver = callbackObject;
          sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.eventReceiver, (int32_t)callbackObject, v17, v18);
          v15->fields.callWhenFinished = callbackFunc;
          sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.callWhenFinished, (int32_t)callbackFunc, v19, v20);
          return;
        }
LABEL_18:
        sub_1C32E7C(v16);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureRender__SetAlpha(UINarrowFigureRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UINarrowFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UINarrowFigureRender__SetCharacter(
        UINarrowFigureRender_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int OTHER_IMAGE_LIMIT_COUNT; // w21
  int32_t v5; // w20
  BalanceConfig_c *v7; // x0
  UINarrowFigureRender_c *v8; // x0
  DataManager_o *Instance; // x0
  int32_t v10; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w21
  int32_t v13; // w23
  ServantLimitMaster_o *v14; // x22
  int32_t v15; // w0
  int32_t v16; // w21
  struct System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-34h] BYREF

  OTHER_IMAGE_LIMIT_COUNT = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C392AE & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C392AE = 1;
  }
  entity = 0;
  if ( OTHER_IMAGE_LIMIT_COUNT >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_27;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    OTHER_IMAGE_LIMIT_COUNT = imageLimitCounta;
    v5 = svtIda;
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( v7->static_fields->OtherImageLimitCount == OTHER_IMAGE_LIMIT_COUNT )
    {
      v8 = UINarrowFigureRender_TypeInfo;
      if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
        v8 = UINarrowFigureRender_TypeInfo;
      }
      OTHER_IMAGE_LIMIT_COUNT = v8->static_fields->OTHER_IMAGE_LIMIT_COUNT;
      imageLimitCounta = OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  this->fields.svtId = v5;
  this->fields.imageLimitCount = OTHER_IMAGE_LIMIT_COUNT;
  this->fields.isChange = 0;
  v10 = StringLiteral_1/*""*/;
  this->fields.changeSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeSuffix, v10, imageLimitCount, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = this->fields.svtId;
  v13 = this->fields.imageLimitCount;
  v14 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(v13, 0);
  if ( !v14 )
    goto LABEL_27;
  if ( !ServantLimitMaster__TryGetEntity(v14, &entity, v12, (int32_t)Instance, 0) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  v15 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
  if ( v15 < 0 )
    return;
  v16 = v15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v16, 0, 0, 0) )
    return;
  this->fields.isChange = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_27:
    sub_1C32E7C(Instance);
  v17 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.changeSuffix = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeSuffix, (int32_t)v17, v18, v19);
}


void UINarrowFigureRender__SetLayer(UINarrowFigureRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UINarrowFigureRender__SetLayer_43924132(this, transform, layer, v7);
  }
}


void UINarrowFigureRender__SetLayer_43924132(
        UINarrowFigureRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UINarrowFigureRender_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 naturalAligment; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4C392B4 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (UINarrowFigureRender_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C392B4 = 1;
  }
  if ( !tf
    || (this = (UINarrowFigureRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_17:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3313C(v16);
        goto LABEL_33;
      }
    }
    UINarrowFigureRender__SetLayer_43924132(v6, v16, layer, v17);
  }
  v19 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_28;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
}