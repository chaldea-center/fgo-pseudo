void UIMasterFaceRender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int v3; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFaceRender_StaticFields *static_fields; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int v8; // w8
  unsigned __int64 v9; // d0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v10; // x0
  struct UIMasterFaceRender_StaticFields *v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v15; // x0
  struct UIMasterFaceRender_StaticFields *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C58636 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    byte_4C58636 = 1;
  }
  *(_OWORD *)&UIMasterFaceRender_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_C129E0;
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_14;
  v3 = *(_DWORD *)(v1 + 24);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v3 == 1 )
    goto LABEL_13;
  *(_QWORD *)(v1 + 40) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v1,
                   (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFaceRender_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->bodyTopTable, (int32_t)Only_Vector2, v6, v7);
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_14;
  v8 = *(_DWORD *)(v1 + 24);
  if ( !v8 || (v9 = vdup_n_s32(0x437E0000u).n64_u64[0], *(_QWORD *)(v1 + 32) = v9, v8 == 1) )
LABEL_13:
    sub_1C3E7C8(v1, v2);
  *(_QWORD *)(v1 + 40) = v9;
  v10 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  v11 = UIMasterFaceRender_TypeInfo->static_fields;
  v11->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->bodyTextureSizeTable, (int32_t)v10, v12, v13);
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v1 )
LABEL_14:
    sub_1C3E7C0(v1, v2);
  v14 = *(_DWORD *)(v1 + 24);
  if ( !v14 )
    goto LABEL_13;
  *(int32x2_t *)(v1 + 32) = vdup_n_s32(0x437E0000u);
  if ( v14 == 1 )
    goto LABEL_13;
  *(int32x2_t *)(v1 + 40) = vdup_n_s32(0x432F0000u);
  v15 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  v16 = UIMasterFaceRender_TypeInfo->static_fields;
  v16->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->bodySizeTable, (int32_t)v15, v17, v18);
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
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  bool v17; // zf
  char *v18; // x19
  int32_t v19; // w1
  Il2CppObject *v20; // x0
  System_String_o *v21; // x8
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v24; // x10
  Il2CppClass *klass; // x21
  void *v26; // x22
  int32_t v27; // w0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *v31; // x21
  int v32; // w8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int v36; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v37; // [xsp+18h] [xbp-38h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C5862F & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C3E564(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_8945/*"MasterFace/statusMask"*/);
    sub_1C3E564(&StringLiteral_8943/*"MasterFace/equip{0:D5}"*/);
    sub_1C3E564(&StringLiteral_8944/*"MasterFace/image{0:D5}"*/);
    byte_4C5862F = 1;
  }
  Instance = (char *)sub_1C3E60C(string___TypeInfo, 2);
  v17 = dispType == 1;
  v18 = Instance;
  if ( v17 )
  {
    if ( !Instance )
      goto LABEL_35;
    if ( *((_DWORD *)Instance + 6) <= 1u )
      goto LABEL_36;
    v19 = StringLiteral_8945/*"MasterFace/statusMask"*/;
    *((_QWORD *)Instance + 5) = StringLiteral_8945/*"MasterFace/statusMask"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(Instance + 40), v19, v11, v12);
  }
  if ( overWriteImageId )
  {
    v38 = overWriteImageId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v11, v12, v13, v14, v15, v16);
    v21 = (System_String_o *)StringLiteral_8944/*"MasterFace/image{0:D5}"*/;
    goto LABEL_31;
  }
  if ( equipId < 1 )
    goto LABEL_27;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_27;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v24 = 4;
  if ( genderType == 2 )
    v24 = 5;
  klass = Entity[v24].klass;
  v26 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = klass;
  *(_QWORD *)&v39.fields.fakeValue = v26;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v39, 0);
  if ( v27 < 1 )
    goto LABEL_27;
  v37 = v27;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v11, v12, v13, v14, v15, v16);
  Instance = (char *)System_String__Format((System_String_o *)StringLiteral_8943/*"MasterFace/equip{0:D5}"*/, v28, 0);
  if ( !v18 )
    goto LABEL_35;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_36;
  *((_QWORD *)v18 + 4) = Instance;
  sub_1C3E508((CGThumbnailListItem_o *)(v18 + 32), (int32_t)Instance, v29, v30);
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_36;
  v31 = (System_String_o *)*((_QWORD *)v18 + 4);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v31, 0) )
  {
LABEL_27:
    if ( genderType == 2 )
      v32 = 2;
    else
      v32 = 1;
    v36 = v32;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v11, v12, v13, v14, v15, v16);
    v21 = (System_String_o *)StringLiteral_8943/*"MasterFace/equip{0:D5}"*/;
LABEL_31:
    Instance = (char *)System_String__Format(v21, v20, 0);
    if ( v18 )
    {
      if ( *((_DWORD *)v18 + 6) )
      {
        *((_QWORD *)v18 + 4) = Instance;
        sub_1C3E508((CGThumbnailListItem_o *)(v18 + 32), (int32_t)Instance, v33, v34);
        return (System_String_array *)v18;
      }
LABEL_36:
      sub_1C3E7C8(Instance, v10);
    }
LABEL_35:
    sub_1C3E7C0(Instance, v10);
  }
  return (System_String_array *)v18;
}


UnityEngine_Vector2_o UIMasterFaceRender__GetBodySize(UIMasterFaceRender_o *this, const MethodInfo *method)
{
  UIMasterFaceRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C58630 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    byte_4C58630 = 1;
  }
  v3 = UIMasterFaceRender_TypeInfo;
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
    v3 = UIMasterFaceRender_TypeInfo;
  }
  bodySizeTable = v3->static_fields->bodySizeTable;
  if ( !bodySizeTable )
    sub_1C3E7C0(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodySizeTable,
           this->fields.dispType,
           (const MethodInfo_39C6EC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
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
  if ( (byte_4C58632 & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_1C3E564(&Method_AssetData_GetObject_Texture2D___);
    byte_4C58632 = 1;
  }
  if ( !dataList )
    goto LABEL_7;
  if ( !LODWORD(dataList->max_length) )
    sub_1C3E7C8(this, dataList);
  this = (UIMasterFaceRender_o *)dataList->m_Items[0];
  if ( !this )
LABEL_7:
    sub_1C3E7C0(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_30DACD8 *)Method_AssetData_GetObject_Texture2D___);
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

  if ( (byte_4C58631 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    byte_4C58631 = 1;
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
                 (const MethodInfo_39C6EC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFaceRender_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_1C3E7C0(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_39C6EC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
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
  if ( (byte_4C58633 & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_1C3E564(&Method_AssetData_GetObject_Texture2D___);
    byte_4C58633 = 1;
  }
  if ( v4->fields.dispType != 1 )
    return 0;
  if ( !dataList )
    goto LABEL_9;
  if ( LODWORD(dataList->max_length) <= 1 )
    sub_1C3E7C8(this, dataList);
  this = (UIMasterFaceRender_o *)dataList->m_Items[1];
  if ( !this )
LABEL_9:
    sub_1C3E7C0(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_30DACD8 *)Method_AssetData_GetObject_Texture2D___);
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
void UIMasterFaceRender__MoveAlpha_44052120(
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4C58634 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58634 = 1;
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
      UnityEngine_GameObject__SendMessage_71323440(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v22.fields.r = *(float *)&v8;
    v22.fields.g = *(float *)&v7;
    v22.fields.b = *(float *)&v6;
    v22.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v22, 0);
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
          sub_1C3E508((CGThumbnailListItem_o *)&v15->fields.eventReceiver, (int32_t)callbackObject, v18, v19);
          v15->fields.callWhenFinished = callbackFunc;
          sub_1C3E508((CGThumbnailListItem_o *)&v15->fields.callWhenFinished, (int32_t)callbackFunc, v20, v21);
          return;
        }
LABEL_18:
        sub_1C3E7C0(v16, v17);
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
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIMasterFaceRender__SetLayer_44052652(this, transform, layer, v8);
  }
}


void UIMasterFaceRender__SetLayer_44052652(
        UIMasterFaceRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFaceRender_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4C58635 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFaceRender_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C58635 = 1;
  }
  if ( !tf
    || (this = (UIMasterFaceRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C3E7C0(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3EA80(v17);
        goto LABEL_33;
      }
    }
    UIMasterFaceRender__SetLayer_44052652(v6, v17, layer, v18);
  }
  v20 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C8ED7C(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}