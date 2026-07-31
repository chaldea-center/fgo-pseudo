void UIMasterFaceRender___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x1
  int v4; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFaceRender_StaticFields *static_fields; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int v13; // w8
  unsigned __int64 v14; // d0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v15; // x0
  struct UIMasterFaceRender_StaticFields *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int v23; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v24; // x0
  struct UIMasterFaceRender_StaticFields *v25; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5939FA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_AsReadOnly_Vector2___);
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    byte_5939FA3 = 1;
  }
  v1 = UnityEngine_Vector2___TypeInfo;
  *(_OWORD *)&UIMasterFaceRender_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_E94B00;
  v2 = sub_21FFD10(v1, 2);
  if ( !v2 )
    goto LABEL_14;
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v2 + 32) = 0;
  if ( v4 == 1 )
    goto LABEL_13;
  *(_QWORD *)(v2 + 40) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v2,
                   (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFaceRender_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->bodyTopTable,
    (int32_t)Only_Vector2,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v2 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_14;
  v13 = *(_DWORD *)(v2 + 24);
  if ( !v13 || (v14 = vdup_n_s32(0x437E0000u).n64_u64[0], *(_QWORD *)(v2 + 32) = v14, v13 == 1) )
LABEL_13:
    sub_21FFED4(v2);
  *(_QWORD *)(v2 + 40) = v14;
  v15 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  v16 = UIMasterFaceRender_TypeInfo->static_fields;
  v16->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v16->bodyTextureSizeTable,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v2 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 2);
  if ( !v2 )
LABEL_14:
    sub_21FFECC(v2, v3);
  v23 = *(_DWORD *)(v2 + 24);
  if ( !v23 )
    goto LABEL_13;
  *(int32x2_t *)(v2 + 32) = vdup_n_s32(0x437E0000u);
  if ( v23 == 1 )
    goto LABEL_13;
  *(int32x2_t *)(v2 + 40) = vdup_n_s32(0x432F0000u);
  v24 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  v25 = UIMasterFaceRender_TypeInfo->static_fields;
  v25->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->bodySizeTable, (int32_t)v24, v26, v27, v28, v29, v30, v31);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  bool v17; // zf
  char *v18; // x19
  int32_t v19; // w1
  Il2CppObject *v20; // x0
  System_String_o *v21; // x8
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  __int64 v24; // x9
  __int64 v25; // x10
  __int64 v26; // x22
  Il2CppClass *klass; // x21
  int32_t v28; // w0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  System_String_o *v37; // x21
  int v38; // w9
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int v46; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v47; // [xsp+18h] [xbp-38h] BYREF
  int32_t v48; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_5939F9C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_9300/*"MasterFace/statusMask"*/);
    sub_21FFC50(&StringLiteral_9298/*"MasterFace/equip{0:D5}"*/);
    sub_21FFC50(&StringLiteral_9299/*"MasterFace/image{0:D5}"*/);
    byte_5939F9C = 1;
  }
  Instance = (char *)sub_21FFD10(string___TypeInfo, 2);
  v17 = dispType == 1;
  v18 = Instance;
  if ( v17 )
  {
    if ( !Instance )
      goto LABEL_34;
    if ( (*((_DWORD *)Instance + 6) & 0xFFFFFFFE) == 0 )
      goto LABEL_35;
    v19 = StringLiteral_9300/*"MasterFace/statusMask"*/;
    *((_QWORD *)Instance + 5) = StringLiteral_9300/*"MasterFace/statusMask"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 40), v19, v11, v12, v13, v14, v15, v16);
  }
  if ( overWriteImageId )
  {
    v48 = overWriteImageId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v48);
    v21 = (System_String_o *)StringLiteral_9299/*"MasterFace/image{0:D5}"*/;
    goto LABEL_30;
  }
  if ( equipId < 1 )
    goto LABEL_26;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_34;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_26;
  v24 = 72;
  if ( genderType == 2 )
  {
    v24 = 88;
    v25 = 5;
  }
  else
  {
    v25 = 4;
  }
  v26 = *(__int64 *)((char *)&Entity->klass + v24);
  klass = Entity[v25].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v49.fields.currentCryptoKey = klass;
  *(_QWORD *)&v49.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v49, 0);
  if ( v28 < 1 )
    goto LABEL_26;
  v47 = v28;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v47);
  Instance = (char *)System_String__Format((System_String_o *)StringLiteral_9298/*"MasterFace/equip{0:D5}"*/, v29, 0);
  if ( !v18 )
    goto LABEL_34;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_35;
  *((_QWORD *)v18 + 4) = Instance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)Instance, v30, v31, v32, v33, v34, v35);
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_35;
  v37 = (System_String_o *)*((_QWORD *)v18 + 4);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  if ( !AssetManager__isExistAssetStorage(v37, 0) )
  {
LABEL_26:
    if ( genderType == 2 )
      v38 = 2;
    else
      v38 = 1;
    v46 = v38;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v46);
    v21 = (System_String_o *)StringLiteral_9298/*"MasterFace/equip{0:D5}"*/;
LABEL_30:
    Instance = (char *)System_String__Format(v21, v20, 0);
    if ( v18 )
    {
      if ( *((_DWORD *)v18 + 6) )
      {
        *((_QWORD *)v18 + 4) = Instance;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)Instance, v39, v40, v41, v42, v43, v44);
        return (System_String_array *)v18;
      }
LABEL_35:
      sub_21FFED4(Instance);
    }
LABEL_34:
    sub_21FFECC(Instance, v10);
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

  if ( (byte_5939F9D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    byte_5939F9D = 1;
  }
  v3 = UIMasterFaceRender_TypeInfo;
  if ( !*(&UIMasterFaceRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, method);
    v3 = UIMasterFaceRender_TypeInfo;
  }
  bodySizeTable = v3->static_fields->bodySizeTable;
  if ( !bodySizeTable )
    sub_21FFECC(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodySizeTable,
           this->fields.dispType,
           (const MethodInfo_4718F10 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
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
  if ( (byte_5939F9F & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_21FFC50(&Method_AssetData_GetObject_Texture2D___);
    byte_5939F9F = 1;
  }
  if ( !dataList )
    goto LABEL_7;
  if ( !LODWORD(dataList->max_length) )
    sub_21FFED4(this);
  this = (UIMasterFaceRender_o *)dataList->m_Items[0];
  if ( !this )
LABEL_7:
    sub_21FFECC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_379EFEC *)Method_AssetData_GetObject_Texture2D___);
}


UnityEngine_Rect_o UIMasterFaceRender__GetBodyUvRect(UIMasterFaceRender_o *this, const MethodInfo *method)
{
  UIMasterFaceRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFaceRender_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s7
  float MAIN_SIZE_X; // s3
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939F9E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    byte_5939F9E = 1;
  }
  v3 = UIMasterFaceRender_TypeInfo;
  if ( !*(&UIMasterFaceRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, method);
    v3 = UIMasterFaceRender_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_4718F10 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFaceRender_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_21FFECC(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_4718F10 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
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
  if ( (byte_5939FA0 & 1) == 0 )
  {
    this = (UIMasterFaceRender_o *)sub_21FFC50(&Method_AssetData_GetObject_Texture2D___);
    byte_5939FA0 = 1;
  }
  if ( v4->fields.dispType != 1 )
    return 0;
  if ( !dataList )
    goto LABEL_9;
  if ( (dataList->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(this);
  this = (UIMasterFaceRender_o *)dataList->m_Items[1];
  if ( !this )
LABEL_9:
    sub_21FFECC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object_(
                                      (AssetData_o *)this,
                                      (const MethodInfo_379EFEC *)Method_AssetData_GetObject_Texture2D___);
}


void UIMasterFaceRender__MoveAlpha(UIMasterFaceRender_o *this, float duration, float alpha, const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  b = this->fields.mColor.fields.b;
  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      this->fields.mColor.fields.r,
      this->fields.mColor.fields.g,
      this->fields.mColor.fields.b,
      alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.b = b;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0);
  }
}


void UIMasterFaceRender__MoveAlpha_50940992(
        UIMasterFaceRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  float g; // s11
  float r; // s12
  float b; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  TweenRendererColor_o *v16; // x21
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  UnityEngine_Color_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5939FA1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939FA1 = 1;
  }
  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      callbackFunc,
      method,
      this->fields.mColor.fields.r,
      this->fields.mColor.fields.g,
      this->fields.mColor.fields.b,
      alpha);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v18 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_83224792(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = alpha;
    v16 = TweenRendererColor__Begin(gameObject, duration, v33, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( v18 )
      {
        if ( v16 )
        {
          v16->fields.eventReceiver = callbackObject;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v16->fields.eventReceiver,
            (int32_t)callbackObject,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v16->fields.callWhenFinished = callbackFunc;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v16->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          return;
        }
LABEL_18:
        sub_21FFECC(v18, v19);
      }
    }
  }
}


void UIMasterFaceRender__SetAlpha(UIMasterFaceRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIMasterFaceRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIMasterFaceRender__SetLayer_50941516(this, transform, layer, v8);
  }
}


void UIMasterFaceRender__SetLayer_50941516(
        UIMasterFaceRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFaceRender_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_5939FA2 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFaceRender_o *)sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5939FA2 = 1;
  }
  if ( !tf
    || (this = (UIMasterFaceRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
    sub_21FFECC(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_34;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_18:
      v16 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_220024C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_21FFECC(Enumerator, v8);
      }
    }
    UIMasterFaceRender__SetLayer_50941516(v6, v17, layer, v19);
  }
  v21 = sub_21FFDA4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_2237E2C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}