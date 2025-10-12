void UIMasterFaceRender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int v2; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFaceRender_StaticFields *static_fields; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int v7; // w8
  unsigned __int64 v8; // d0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v9; // x0
  struct UIMasterFaceRender_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v14; // x0
  struct UIMasterFaceRender_StaticFields *v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C39271 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C32C20(&UIMasterFaceRender_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    byte_4C39271 = 1;
  }
  *(_OWORD *)&UIMasterFaceRender_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_C0D3F0;
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_14;
  v2 = *(_DWORD *)(v1 + 24);
  if ( !v2 )
    goto LABEL_13;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v2 == 1 )
    goto LABEL_13;
  *(_QWORD *)(v1 + 40) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v1,
                   (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFaceRender_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->bodyTopTable, (int32_t)Only_Vector2, v5, v6);
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_14;
  v7 = *(_DWORD *)(v1 + 24);
  if ( !v7 || (v8 = vdup_n_s32(0x437E0000u).n64_u64[0], *(_QWORD *)(v1 + 32) = v8, v7 == 1) )
LABEL_13:
    sub_1C32E84(v1);
  *(_QWORD *)(v1 + 40) = v8;
  v9 = System_Array__AsReadOnly_Vector2_(
         (UnityEngine_Vector2_array *)v1,
         (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  v10 = UIMasterFaceRender_TypeInfo->static_fields;
  v10->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->bodyTextureSizeTable, (int32_t)v9, v11, v12);
  v1 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
LABEL_14:
    sub_1C32E7C(v1);
  v13 = *(_DWORD *)(v1 + 24);
  if ( !v13 )
    goto LABEL_13;
  *(int32x2_t *)(v1 + 32) = vdup_n_s32(0x437E0000u);
  if ( v13 == 1 )
    goto LABEL_13;
  *(int32x2_t *)(v1 + 40) = vdup_n_s32(0x432F0000u);
  v14 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_31AAB98 *)Method_System_Array_AsReadOnly_Vector2___);
  v15 = UIMasterFaceRender_TypeInfo->static_fields;
  v15->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->bodySizeTable, (int32_t)v14, v16, v17);
}


void UIMasterFaceRender___ctor(UIMasterFaceRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_array *UIMasterFaceRender__GetAssetNameList(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  bool v16; // zf
  char *v17; // x19
  int32_t v18; // w1
  Il2CppObject *v19; // x0
  System_String_o *v20; // x8
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v23; // x10
  Il2CppClass *klass; // x21
  void *v25; // x22
  int32_t v26; // w0
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x21
  int v31; // w8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int v35; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v36; // [xsp+18h] [xbp-38h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C3926A & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_8944/*"MasterFace/statusMask"*/);
    sub_1C32C20(&StringLiteral_8942/*"MasterFace/equip{0:D5}"*/);
    sub_1C32C20(&StringLiteral_8943/*"MasterFace/image{0:D5}"*/);
    byte_4C3926A = 1;
  }
  Instance = (char *)sub_1C32CC8(string___TypeInfo, 2);
  v16 = dispType == 1;
  v17 = Instance;
  if ( v16 )
  {
    if ( !Instance )
      goto LABEL_35;
    if ( *((_DWORD *)Instance + 6) <= 1u )
      goto LABEL_36;
    v18 = StringLiteral_8944/*"MasterFace/statusMask"*/;
    *((_QWORD *)Instance + 5) = StringLiteral_8944/*"MasterFace/statusMask"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 40), v18, v10, v11);
  }
  if ( overWriteImageId )
  {
    v37 = overWriteImageId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v10, v11, v12, v13, v14, v15);
    v20 = (System_String_o *)StringLiteral_8943/*"MasterFace/image{0:D5}"*/;
    goto LABEL_31;
  }
  if ( equipId < 1 )
    goto LABEL_27;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_27;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v23 = 4;
  if ( genderType == 2 )
    v23 = 5;
  klass = Entity[v23].klass;
  v25 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = klass;
  *(_QWORD *)&v38.fields.fakeValue = v25;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v38, 0);
  if ( v26 < 1 )
    goto LABEL_27;
  v36 = v26;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v10, v11, v12, v13, v14, v15);
  Instance = (char *)System_String__Format((System_String_o *)StringLiteral_8942/*"MasterFace/equip{0:D5}"*/, v27, 0);
  if ( !v17 )
    goto LABEL_35;
  if ( !*((_DWORD *)v17 + 6) )
    goto LABEL_36;
  *((_QWORD *)v17 + 4) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)Instance, v28, v29);
  if ( !*((_DWORD *)v17 + 6) )
    goto LABEL_36;
  v30 = (System_String_o *)*((_QWORD *)v17 + 4);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v30, 0) )
  {
LABEL_27:
    if ( genderType == 2 )
      v31 = 2;
    else
      v31 = 1;
    v35 = v31;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v10, v11, v12, v13, v14, v15);
    v20 = (System_String_o *)StringLiteral_8942/*"MasterFace/equip{0:D5}"*/;
LABEL_31:
    Instance = (char *)System_String__Format(v20, v19, 0);
    if ( v17 )
    {
      if ( *((_DWORD *)v17 + 6) )
      {
        *((_QWORD *)v17 + 4) = Instance;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)Instance, v32, v33);
        return (System_String_array *)v17;
      }
LABEL_36:
      sub_1C32E84(Instance);
    }
LABEL_35:
    sub_1C32E7C(Instance);
  }
  return (System_String_array *)v17;
}


UnityEngine_Vector2_o UIMasterFaceRender__GetBodySize(UIMasterFaceRender_o *this, const MethodInfo *method)
{
  UIMasterFaceRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3926B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C32C20(&UIMasterFaceRender_TypeInfo);
    byte_4C3926B = 1;
  }
  v3 = UIMasterFaceRender_TypeInfo;
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
    v3 = UIMasterFaceRender_TypeInfo;
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


UnityEngine_Texture2D_o *UIMasterFaceRender__GetBodyTexture(
        UIMasterFaceRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  if ( (byte_4C3926D & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_1C32C20(&Method_AssetData_GetObject_Texture2D___);
    byte_4C3926D = 1;
  }
  if ( !dataList )
    goto LABEL_7;
  if ( !LODWORD(dataList->max_length) )
    sub_1C32E84(this);
  this = (UIMasterFaceRender_o *)dataList->m_Items[0];
  if ( !this )
LABEL_7:
    sub_1C32E7C(this);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_30BE658 *)Method_AssetData_GetObject_Texture2D___);
}


UnityEngine_Rect_o UIMasterFaceRender__GetBodyUvRect(UIMasterFaceRender_o *this, const MethodInfo *method)
{
  UIMasterFaceRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFaceRender_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s5
  float MAIN_SIZE_X; // s7
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3926C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C32C20(&UIMasterFaceRender_TypeInfo);
    byte_4C3926C = 1;
  }
  v3 = UIMasterFaceRender_TypeInfo;
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
    v3 = UIMasterFaceRender_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFaceRender_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_1C32E7C(bodyTopTable);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_39AA21C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  static_fields = UIMasterFaceRender_TypeInfo->static_fields;
  MAIN_SIZE_Y = (float)static_fields->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)static_fields->MAIN_SIZE_X;
  v10 = v6.fields.x / MAIN_SIZE_X;
  v11 = (float)(Item.fields.x + (float)((float)((float)((float)static_fields->BODY_SIZE_X - v6.fields.x) * 0.5) + 1.5))
      / MAIN_SIZE_X;
  v12 = v6.fields.y / MAIN_SIZE_Y;
  v13 = (float)(Item.fields.y + (float)((float)((float)static_fields->BODY_SIZE_Y - v6.fields.y) + 1.5)) / MAIN_SIZE_Y;
  result.fields.m_Height = v12;
  result.fields.m_Width = v10;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v11;
  return result;
}


UnityEngine_Texture2D_o *UIMasterFaceRender__GetMaskTexture(
        UIMasterFaceRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  UIMasterFaceRender_o *v4; // x20

  v4 = this;
  if ( (byte_4C3926E & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_1C32C20(&Method_AssetData_GetObject_Texture2D___);
    byte_4C3926E = 1;
  }
  if ( v4->fields.dispType != 1 )
    return 0;
  if ( !dataList )
    goto LABEL_9;
  if ( LODWORD(dataList->max_length) <= 1 )
    sub_1C32E84(this);
  this = (UIMasterFaceRender_o *)dataList->m_Items[1];
  if ( !this )
LABEL_9:
    sub_1C32E7C(this);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_30BE658 *)Method_AssetData_GetObject_Texture2D___);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFaceRender__MoveAlpha(UIMasterFaceRender_o *this, float duration, float alpha, const MethodInfo *method)
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
    ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFaceRender__MoveAlpha_43894532(
        UIMasterFaceRender_o *this,
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
  if ( (byte_4C3926F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3926F = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFaceRender__SetAlpha(UIMasterFaceRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIMasterFaceRender__SetCharacter(
        UIMasterFaceRender_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
}


void UIMasterFaceRender__SetLayer(UIMasterFaceRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIMasterFaceRender__SetLayer_43895064(this, transform, layer, v7);
  }
}


void UIMasterFaceRender__SetLayer_43895064(
        UIMasterFaceRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFaceRender_o *v6; // x21
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
  if ( (byte_4C39270 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFaceRender_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C39270 = 1;
  }
  if ( !tf
    || (this = (UIMasterFaceRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIMasterFaceRender__SetLayer_43895064(v6, v16, layer, v17);
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