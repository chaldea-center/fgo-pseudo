void UIMasterFullFigureRender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFullFigureRender_StaticFields *static_fields; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v7; // x0
  struct UIMasterFullFigureRender_StaticFields *v8; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v11; // x0
  struct UIMasterFullFigureRender_StaticFields *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C58655 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C3E564(&UIMasterFullFigureRender_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    byte_4C58655 = 1;
  }
  *(_OWORD *)&UIMasterFullFigureRender_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_C129D0;
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v1 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v1 + 32) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v1,
                   (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFullFigureRender_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->bodyTopTable, (int32_t)Only_Vector2, v5, v6);
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v1 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_11;
  *(int32x2_t *)(v1 + 32) = vdup_n_s32(0x447F8000u);
  v7 = System_Array__AsReadOnly_Vector2_(
         (UnityEngine_Vector2_array *)v1,
         (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  v8 = UIMasterFullFigureRender_TypeInfo->static_fields;
  v8->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->bodyTextureSizeTable, (int32_t)v7, v9, v10);
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v1 )
LABEL_10:
    sub_1C3E7C0(v1, v2);
  if ( !*(_DWORD *)(v1 + 24) )
LABEL_11:
    sub_1C3E7C8(v1, v2);
  *(int32x2_t *)(v1 + 32) = vdup_n_s32(0x447F8000u);
  v11 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_31C7354 *)Method_System_Array_AsReadOnly_Vector2___);
  v12 = UIMasterFullFigureRender_TypeInfo->static_fields;
  v12->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->bodySizeTable, (int32_t)v11, v13, v14);
}


void UIMasterFullFigureRender___ctor(UIMasterFullFigureRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_array *UIMasterFullFigureRender__GetAssetNameList(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v16; // x10
  Il2CppClass *klass; // x21
  void *v18; // x22
  int32_t v19; // w0
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x21
  int v24; // w8
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C5864D & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C3E564(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_8948/*"MasterFullFigure/equip{0:D5}"*/);
    byte_4C5864D = 1;
  }
  v11 = sub_1C3E60C(string___TypeInfo, 1);
  if ( equipId < 1 )
    goto LABEL_20;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_20;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v16 = 4;
  if ( genderType == 2 )
    v16 = 5;
  klass = Entity[v16].klass;
  v18 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = klass;
  *(_QWORD *)&v31.fields.fakeValue = v18;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v31, 0);
  if ( v19 < 1 )
    goto LABEL_20;
  v30 = v19;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v5, v6, v7, v8, v9, v10);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8948/*"MasterFullFigure/equip{0:D5}"*/, v20, 0);
  if ( !v11 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_28;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 32), (int32_t)Instance, v21, v22);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_28;
  v23 = *(System_String_o **)(v11 + 32);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v23, 0) )
  {
LABEL_20:
    if ( genderType == 2 )
      v24 = 2;
    else
      v24 = 1;
    v29 = v24;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v5, v6, v7, v8, v9, v10);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8948/*"MasterFullFigure/equip{0:D5}"*/, v25, 0);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 24) )
      {
        *(_QWORD *)(v11 + 32) = Instance;
        sub_1C3E508((CGThumbnailListItem_o *)(v11 + 32), (int32_t)Instance, v26, v27);
        return (System_String_array *)v11;
      }
LABEL_28:
      sub_1C3E7C8(Instance, v13);
    }
LABEL_27:
    sub_1C3E7C0(Instance, v13);
  }
  return (System_String_array *)v11;
}


UnityEngine_Texture2D_o *UIMasterFullFigureRender__GetBodyAlphaTexture(
        UIMasterFullFigureRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_o *v4; // x19

  if ( (byte_4C58652 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    this = (UIMasterFullFigureRender_o *)sub_1C3E564(&StringLiteral_16641/*"a"*/);
    byte_4C58652 = 1;
  }
  if ( !dataList )
    goto LABEL_9;
  if ( !LODWORD(dataList->max_length) )
    goto LABEL_10;
  this = (UIMasterFullFigureRender_o *)dataList->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFullFigureRender_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(dataList->max_length) )
LABEL_10:
    sub_1C3E7C8(this, dataList);
  v4 = dataList->m_Items[0];
  this = (UIMasterFullFigureRender_o *)System_String__Concat_63636468(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_16641/*"a"*/,
                                         0);
  if ( !v4 )
LABEL_9:
    sub_1C3E7C0(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51228128(
                                      v4,
                                      (System_String_o *)this,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
}


UnityEngine_Vector2_o UIMasterFullFigureRender__GetBodySize(UIMasterFullFigureRender_o *this, const MethodInfo *method)
{
  UIMasterFullFigureRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C5864F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C3E564(&UIMasterFullFigureRender_TypeInfo);
    byte_4C5864F = 1;
  }
  v3 = UIMasterFullFigureRender_TypeInfo;
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
    v3 = UIMasterFullFigureRender_TypeInfo;
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


UnityEngine_Texture2D_o *UIMasterFullFigureRender__GetBodyTexture(
        UIMasterFullFigureRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_array *v3; // x19

  v3 = dataList;
  if ( (byte_4C58651 & 1) == 0 )
  {
    this = (UIMasterFullFigureRender_o *)sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    byte_4C58651 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  if ( !LODWORD(v3->max_length) )
    goto LABEL_10;
  this = (UIMasterFullFigureRender_o *)v3->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFullFigureRender_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(v3->max_length) )
LABEL_10:
    sub_1C3E7C8(this, dataList);
  dataList = (AssetData_array *)this;
  this = (UIMasterFullFigureRender_o *)v3->m_Items[0];
  if ( !this )
LABEL_9:
    sub_1C3E7C0(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51228128(
                                      (AssetData_o *)this,
                                      (System_String_o *)dataList,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
}


UnityEngine_Rect_o UIMasterFullFigureRender__GetBodyUvRect(UIMasterFullFigureRender_o *this, const MethodInfo *method)
{
  UIMasterFullFigureRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFullFigureRender_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s5
  float MAIN_SIZE_X; // s7
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C58650 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C3E564(&UIMasterFullFigureRender_TypeInfo);
    byte_4C58650 = 1;
  }
  v3 = UIMasterFullFigureRender_TypeInfo;
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
    v3 = UIMasterFullFigureRender_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_39C6EC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFullFigureRender_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_1C3E7C0(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_39C6EC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  static_fields = UIMasterFullFigureRender_TypeInfo->static_fields;
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


// local variable allocation has failed, the output may be wrong!
void UIMasterFullFigureRender__MoveAlpha(
        UIMasterFullFigureRender_o *this,
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
    ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFullFigureRender__MoveAlpha_44064816(
        UIMasterFullFigureRender_o *this,
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
  if ( (byte_4C58653 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58653 = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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
void UIMasterFullFigureRender__SetAlpha(UIMasterFullFigureRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIMasterFullFigureRender__SetCharacter(
        UIMasterFullFigureRender_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v13; // x10
  Il2CppClass *klass; // x21
  void *v15; // x22
  int32_t v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C5864E & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C3E564(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_8948/*"MasterFullFigure/equip{0:D5}"*/);
    byte_4C5864E = 1;
  }
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  if ( equipId < 1 )
    goto LABEL_17;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
LABEL_24:
    sub_1C3E7C0(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v13 = 4;
  if ( genderType == 2 )
    v13 = 5;
  klass = Entity[v13].klass;
  v15 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = klass;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v27, 0);
  if ( v16 < 1 )
    goto LABEL_17;
  v23 = v16;
  v26 = v16;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  v25 = System_String__Format((System_String_o *)StringLiteral_8948/*"MasterFullFigure/equip{0:D5}"*/, v24, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v25, 0) )
  {
LABEL_17:
    if ( genderType == 2 )
      v23 = 2;
    else
      v23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipImageMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23,
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  this->fields.dispOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)((char *)&Instance[1].klass + 4)).n64_u64[0];
}


void UIMasterFullFigureRender__SetLayer(UIMasterFullFigureRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIMasterFullFigureRender__SetLayer_44065348(this, transform, layer, v8);
  }
}


void UIMasterFullFigureRender__SetLayer_44065348(
        UIMasterFullFigureRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFullFigureRender_o *v6; // x21
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
  if ( (byte_4C58654 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFullFigureRender_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C58654 = 1;
  }
  if ( !tf
    || (this = (UIMasterFullFigureRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIMasterFullFigureRender__SetLayer_44065348(v6, v17, layer, v18);
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