void UIMasterFullFigureRender___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFullFigureRender_StaticFields *static_fields; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v12; // x0
  struct UIMasterFullFigureRender_StaticFields *v13; // x8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v20; // x0
  struct UIMasterFullFigureRender_StaticFields *v21; // x8
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5939FC3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_AsReadOnly_Vector2___);
    sub_21FFC50(&UIMasterFullFigureRender_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    byte_5939FC3 = 1;
  }
  v1 = UnityEngine_Vector2___TypeInfo;
  *(_OWORD *)&UIMasterFullFigureRender_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_E94550;
  v2 = sub_21FFD10(v1, 1);
  if ( !v2 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v2 + 32) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v2,
                   (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFullFigureRender_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->bodyTopTable,
    (int32_t)Only_Vector2,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v2 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v2 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_11;
  *(int32x2_t *)(v2 + 32) = vdup_n_s32(0x447F8000u);
  v12 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  v13 = UIMasterFullFigureRender_TypeInfo->static_fields;
  v13->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->bodyTextureSizeTable,
    (int32_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v2 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v2 )
LABEL_10:
    sub_21FFECC(v2, v3);
  if ( !*(_DWORD *)(v2 + 24) )
LABEL_11:
    sub_21FFED4(v2);
  *(int32x2_t *)(v2 + 32) = vdup_n_s32(0x447F8000u);
  v20 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_3960A80 *)Method_System_Array_AsReadOnly_Vector2___);
  v21 = UIMasterFullFigureRender_TypeInfo->static_fields;
  v21->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->bodySizeTable, (int32_t)v20, v22, v23, v24, v25, v26, v27);
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
  __int64 v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x22
  Il2CppClass *klass; // x21
  int32_t v14; // w0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *v23; // x21
  int v24; // w8
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_5939FBB & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_9303/*"MasterFullFigure/equip{0:D5}"*/);
    byte_5939FBB = 1;
  }
  v5 = sub_21FFD10(string___TypeInfo, 1);
  if ( equipId < 1 )
    goto LABEL_19;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_19;
  v10 = 72;
  if ( genderType == 2 )
  {
    v10 = 88;
    v11 = 5;
  }
  else
  {
    v11 = 4;
  }
  v12 = *(__int64 *)((char *)&Entity->klass + v10);
  klass = Entity[v11].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v35, 0);
  if ( v14 < 1 )
    goto LABEL_19;
  v34 = v14;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v34);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_9303/*"MasterFullFigure/equip{0:D5}"*/, v15, 0);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v5 + 32) = Instance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Instance, v16, v17, v18, v19, v20, v21);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_27;
  v23 = *(System_String_o **)(v5 + 32);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  if ( !AssetManager__isExistAssetStorage(v23, 0) )
  {
LABEL_19:
    if ( genderType == 2 )
      v24 = 2;
    else
      v24 = 1;
    v33 = v24;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v33);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_9303/*"MasterFullFigure/equip{0:D5}"*/, v25, 0);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 24) )
      {
        *(_QWORD *)(v5 + 32) = Instance;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Instance, v26, v27, v28, v29, v30, v31);
        return (System_String_array *)v5;
      }
LABEL_27:
      sub_21FFED4(Instance);
    }
LABEL_26:
    sub_21FFECC(Instance, v7);
  }
  return (System_String_array *)v5;
}


UnityEngine_Texture2D_o *UIMasterFullFigureRender__GetBodyAlphaTexture(
        UIMasterFullFigureRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_o *v4; // x19

  if ( (byte_5939FC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    this = (UIMasterFullFigureRender_o *)sub_21FFC50(&StringLiteral_17270/*"a"*/);
    byte_5939FC0 = 1;
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
    sub_21FFED4(this);
  v4 = dataList->m_Items[0];
  this = (UIMasterFullFigureRender_o *)System_String__Concat_75438412(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_17270/*"a"*/,
                                         0);
  if ( !v4 )
LABEL_9:
    sub_21FFECC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58323140(
                                      v4,
                                      (System_String_o *)this,
                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
}


UnityEngine_Vector2_o UIMasterFullFigureRender__GetBodySize(UIMasterFullFigureRender_o *this, const MethodInfo *method)
{
  UIMasterFullFigureRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5939FBD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_21FFC50(&UIMasterFullFigureRender_TypeInfo);
    byte_5939FBD = 1;
  }
  v3 = UIMasterFullFigureRender_TypeInfo;
  if ( !*(&UIMasterFullFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo, method);
    v3 = UIMasterFullFigureRender_TypeInfo;
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


UnityEngine_Texture2D_o *UIMasterFullFigureRender__GetBodyTexture(
        UIMasterFullFigureRender_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_array *v3; // x19

  v3 = dataList;
  if ( (byte_5939FBF & 1) == 0 )
  {
    this = (UIMasterFullFigureRender_o *)sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    byte_5939FBF = 1;
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
    sub_21FFED4(this);
  dataList = (AssetData_array *)this;
  this = (UIMasterFullFigureRender_o *)v3->m_Items[0];
  if ( !this )
LABEL_9:
    sub_21FFECC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58323140(
                                      (AssetData_o *)this,
                                      (System_String_o *)dataList,
                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
}


UnityEngine_Rect_o UIMasterFullFigureRender__GetBodyUvRect(UIMasterFullFigureRender_o *this, const MethodInfo *method)
{
  UIMasterFullFigureRender_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFullFigureRender_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s7
  float MAIN_SIZE_X; // s3
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939FBE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_21FFC50(&UIMasterFullFigureRender_TypeInfo);
    byte_5939FBE = 1;
  }
  v3 = UIMasterFullFigureRender_TypeInfo;
  if ( !*(&UIMasterFullFigureRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo, method);
    v3 = UIMasterFullFigureRender_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_4718F10 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFullFigureRender_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_21FFECC(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_4718F10 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
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


void UIMasterFullFigureRender__MoveAlpha(
        UIMasterFullFigureRender_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
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
    ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


void UIMasterFullFigureRender__MoveAlpha_50953460(
        UIMasterFullFigureRender_o *this,
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

  if ( (byte_5939FC1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939FC1 = 1;
  }
  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


void UIMasterFullFigureRender__SetAlpha(UIMasterFullFigureRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIMasterFullFigureRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
  __int64 v12; // x1
  __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x22
  Il2CppClass *klass; // x21
  int32_t v17; // w0
  int32_t v18; // w21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x22
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5939FBC & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9303/*"MasterFullFigure/equip{0:D5}"*/);
    byte_5939FBC = 1;
  }
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  if ( equipId < 1 )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
LABEL_23:
    sub_21FFECC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_16;
  v13 = 72;
  if ( genderType == 2 )
  {
    v13 = 88;
    v14 = 5;
  }
  else
  {
    v14 = 4;
  }
  v15 = *(__int64 *)((char *)&Entity->klass + v13);
  klass = Entity[v14].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v23.fields.currentCryptoKey = klass;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
  if ( v17 < 1 )
    goto LABEL_16;
  v18 = v17;
  v22 = v17;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v21 = System_String__Format((System_String_o *)StringLiteral_9303/*"MasterFullFigure/equip{0:D5}"*/, v19, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
  if ( !AssetManager__isExistAssetStorage(v21, 0) )
  {
LABEL_16:
    if ( genderType == 2 )
      v18 = 2;
    else
      v18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipImageMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v18,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
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
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIMasterFullFigureRender__SetLayer_50953984(this, transform, layer, v8);
  }
}


void UIMasterFullFigureRender__SetLayer_50953984(
        UIMasterFullFigureRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFullFigureRender_o *v6; // x20
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
  if ( (byte_5939FC2 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFullFigureRender_o *)sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5939FC2 = 1;
  }
  if ( !tf
    || (this = (UIMasterFullFigureRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIMasterFullFigureRender__SetLayer_50953984(v6, v17, layer, v19);
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