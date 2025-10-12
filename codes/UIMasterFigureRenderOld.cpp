void UIMasterFigureRenderOld___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  unsigned int v2; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v8; // x0
  struct UIMasterFigureRenderOld_StaticFields *v9; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned int v12; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v13; // x0
  struct UIMasterFigureRenderOld_StaticFields *v14; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C39280 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C32C20(&UIMasterFigureRenderOld_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    byte_4C39280 = 1;
  }
  *(_OWORD *)&UIMasterFigureRenderOld_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_C0D190;
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_17;
  v2 = *(_DWORD *)(v1 + 24);
  if ( !v2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v2 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0;
  if ( v2 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v1,
                   (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->bodyTopTable, (int32_t)Only_Vector2, v5, v6);
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_17;
  v7 = *(_DWORD *)(v1 + 24);
  if ( !v7
    || (*(_QWORD *)(v1 + 32) = 0x443F8000447F8000LL, v7 == 1)
    || (*(_QWORD *)(v1 + 40) = 0x443F8000447F8000LL, v7 <= 2) )
  {
LABEL_16:
    sub_1C32E84(v1);
  }
  *(_QWORD *)(v1 + 48) = 0x443F8000447F8000LL;
  v8 = System_Array__AsReadOnly_Vector2_(
         (UnityEngine_Vector2_array *)v1,
         (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  v9 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v9->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->bodyTextureSizeTable, (int32_t)v8, v10, v11);
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
LABEL_17:
    sub_1C32E7C(v1);
  v12 = *(_DWORD *)(v1 + 24);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0x443F8000447F8000LL;
  if ( v12 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0x443F8000447F8000LL;
  if ( v12 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0x443F8000447F8000LL;
  v13 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  v14 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v14->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->bodySizeTable, (int32_t)v13, v15, v16);
}


void UIMasterFigureRenderOld___ctor(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_array *UIMasterFigureRenderOld__GetAssetNameList(
        int32_t genderType,
        int32_t equipId,
        int32_t overWriteEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x19
  System_Int32_c *v14; // x0
  int32_t *v15; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v19; // x10
  Il2CppClass *klass; // x21
  void *v21; // x22
  int32_t v22; // w0
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x21
  int v27; // w8
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v32; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v33; // [xsp+18h] [xbp-38h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C39276 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_8945/*"MasterFigure/equip{0:D5}"*/);
    byte_4C39276 = 1;
  }
  v13 = sub_1C32CC8(string___TypeInfo, 1);
  if ( overWriteEquipId )
  {
    v14 = int_TypeInfo;
    v15 = &v34;
    v34 = overWriteEquipId;
    goto LABEL_26;
  }
  if ( equipId < 1 )
    goto LABEL_22;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_22;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v19 = 4;
  if ( genderType == 2 )
    v19 = 5;
  klass = Entity[v19].klass;
  v21 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = v21;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
  if ( v22 < 1 )
    goto LABEL_22;
  v33 = v22;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v7, v8, v9, v10, v11, v12);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8945/*"MasterFigure/equip{0:D5}"*/, v23, 0);
  if ( !v13 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)Instance, v24, v25);
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_31;
  v26 = *(System_String_o **)(v13 + 32);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v26, 0) )
  {
LABEL_22:
    v14 = int_TypeInfo;
    if ( genderType == 2 )
      v27 = 2;
    else
      v27 = 1;
    v32 = v27;
    v15 = &v32;
LABEL_26:
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(v14, v15, v7, v8, v9, v10, v11, v12);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8945/*"MasterFigure/equip{0:D5}"*/, v28, 0);
    if ( v13 )
    {
      if ( *(_DWORD *)(v13 + 24) )
      {
        *(_QWORD *)(v13 + 32) = Instance;
        sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)Instance, v29, v30);
        return (System_String_array *)v13;
      }
LABEL_31:
      sub_1C32E84(Instance);
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  return (System_String_array *)v13;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyAlphaTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_o *v4; // x19

  if ( (byte_4C3927D & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    this = (UIMasterFigureRenderOld_o *)sub_1C32C20(&StringLiteral_16629/*"a"*/);
    byte_4C3927D = 1;
  }
  if ( !dataList )
    goto LABEL_9;
  if ( !LODWORD(dataList->max_length) )
    goto LABEL_10;
  this = (UIMasterFigureRenderOld_o *)dataList->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFigureRenderOld_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(dataList->max_length) )
LABEL_10:
    sub_1C32E84(this);
  v4 = dataList->m_Items[0];
  this = (UIMasterFigureRenderOld_o *)System_String__Concat_63518544(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_16629/*"a"*/,
                                        0);
  if ( !v4 )
LABEL_9:
    sub_1C32E7C(this);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      v4,
                                      (System_String_o *)this,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
}


UnityEngine_Vector2_o UIMasterFigureRenderOld__GetBodySize(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3927A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C32C20(&UIMasterFigureRenderOld_TypeInfo);
    byte_4C3927A = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodySizeTable = v3->static_fields->bodySizeTable;
  if ( !bodySizeTable )
    sub_1C32E7C(0);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodySizeTable,
           this->fields.dispType,
           (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  y = Item.fields.y;
  x = Item.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  UIMasterFigureRenderOld_o *v4; // x1

  if ( (byte_4C3927C & 1) == 0 )
  {
    this = (UIMasterFigureRenderOld_o *)sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    byte_4C3927C = 1;
  }
  if ( !dataList )
    goto LABEL_9;
  if ( !LODWORD(dataList->max_length) )
    goto LABEL_10;
  this = (UIMasterFigureRenderOld_o *)dataList->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFigureRenderOld_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(dataList->max_length) )
LABEL_10:
    sub_1C32E84(this);
  v4 = this;
  this = (UIMasterFigureRenderOld_o *)dataList->m_Items[0];
  if ( !this )
LABEL_9:
    sub_1C32E7C(this);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      (AssetData_o *)this,
                                      (System_String_o *)v4,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
}


UnityEngine_Rect_o UIMasterFigureRenderOld__GetBodyUvRect(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s5
  float MAIN_SIZE_X; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3927B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C32C20(&UIMasterFigureRenderOld_TypeInfo);
    byte_4C3927B = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFigureRenderOld_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_1C32E7C(bodyTopTable);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  MAIN_SIZE_Y = (float)static_fields->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)static_fields->MAIN_SIZE_X;
  v10 = v6.fields.x / MAIN_SIZE_X;
  v11 = (float)(Item.fields.x + (float)((float)((float)((float)static_fields->BODY_SIZE_X - v6.fields.x) * 0.5) + 1.5))
      / MAIN_SIZE_X;
  v12 = v6.fields.y / MAIN_SIZE_Y;
  v13 = (float)((float)(Item.fields.y + (float)((float)((float)static_fields->BODY_SIZE_Y - v6.fields.y) + 1.5))
              / MAIN_SIZE_Y)
      + 0.25;
  result.fields.m_Height = v12;
  result.fields.m_Width = v10;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v11;
  return result;
}


System_String_array *UIMasterFigureRenderOld__GetEnemyAssetNameList(int32_t enemyFaceId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C39277 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_6045/*"EnemyMasterFigure/figure{0:D5}"*/);
    byte_4C39277 = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 1);
  v15 = enemyFaceId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v4, v5, v6, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_6045/*"EnemyMasterFigure/figure{0:D5}"*/, v10, 0);
  if ( !v3 )
    sub_1C32E7C(v11);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v11);
  *(_QWORD *)(v3 + 32) = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v11, v12, v13);
  return (System_String_array *)v3;
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureRenderOld__MoveAlpha(
        UIMasterFigureRenderOld_o *this,
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
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFigureRenderOld__MoveAlpha_43900832(
        UIMasterFigureRenderOld_o *this,
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
  if ( (byte_4C3927E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3927E = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFigureRenderOld__SetAlpha(UIMasterFigureRenderOld_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIMasterFigureRenderOld__SetCharacter(
        UIMasterFigureRenderOld_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        bool ignoreOriginalOffset,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v14; // x10
  Il2CppClass *klass; // x22
  void *v16; // x23
  int32_t v17; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  int32_t v24; // w22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x23
  int32x2_t v27; // d0
  unsigned __int64 zeroVector; // d0
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4C39278 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8945/*"MasterFigure/equip{0:D5}"*/);
    byte_4C39278 = 1;
  }
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  if ( equipId < 1 )
    goto LABEL_17;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v14 = 4;
  if ( genderType == 2 )
    v14 = 5;
  klass = Entity[v14].klass;
  v16 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = klass;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v30, 0);
  if ( v17 < 1 )
    goto LABEL_17;
  v24 = v17;
  v29 = v17;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18, v19, v20, v21, v22, v23);
  v26 = System_String__Format((System_String_o *)StringLiteral_8945/*"MasterFigure/equip{0:D5}"*/, v25, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v26, 0) )
  {
LABEL_17:
    if ( genderType == 2 )
      v24 = 2;
    else
      v24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipImageMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v24,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
  if ( this->fields.dispType == 2 )
  {
    if ( Instance )
    {
      v27.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].monitor + 4);
LABEL_31:
      zeroVector = vcvt_f32_s32(v27).n64_u64[0];
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( !ignoreOriginalOffset )
  {
    if ( Instance )
    {
      v27.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].klass + 4);
      goto LABEL_31;
    }
LABEL_33:
    sub_1C32E7C(Instance);
  }
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  zeroVector = (unsigned __int64)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
LABEL_32:
  this->fields.dispOffset = (struct UnityEngine_Vector2_o)zeroVector;
}


void UIMasterFigureRenderOld__SetEnemy(
        UIMasterFigureRenderOld_o *this,
        int32_t enemyBattleId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C39279 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
    sub_1C32C20(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C39279 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               enemyBattleId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity )
LABEL_9:
    sub_1C32E7C(Instance);
  this->fields.dispOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)((char *)&entity[2].klass + 4)).n64_u64[0];
}


void UIMasterFigureRenderOld__SetLayer(UIMasterFigureRenderOld_o *this, int32_t layer, const MethodInfo *method)
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
    UIMasterFigureRenderOld__SetLayer_43901364(this, transform, layer, v7);
  }
}


void UIMasterFigureRenderOld__SetLayer_43901364(
        UIMasterFigureRenderOld_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFigureRenderOld_o *v6; // x21
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
  if ( (byte_4C3927F & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFigureRenderOld_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C3927F = 1;
  }
  if ( !tf
    || (this = (UIMasterFigureRenderOld_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIMasterFigureRenderOld__SetLayer_43901364(v6, v16, layer, v17);
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