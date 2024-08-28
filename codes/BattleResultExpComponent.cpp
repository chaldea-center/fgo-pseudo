void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BA6E00;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BA5F00;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A0BDCA & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_endClose__, method);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A0BDCA = 1;
  }
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1B68930(v6, v7);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__CreateRewardEffect(
        BattleResultExpComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Object_object__48415484; // x21
  BattleResultExpComponent_o *v14; // x21
  BattleResultExpComponent_o *v15; // x22
  BattleResultExpComponent_o *v16; // x22
  BattleResultExpComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_4A0BDC6 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, data);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultExpComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    byte_4A0BDC6 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__48415484 = AssetData__GetObject_object__48415484(
                              data,
                              effectName,
                              (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__48415484,
                                         (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v14 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v15 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v15 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v15, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v16 = this;
  if ( !byte_4A03901 )
  {
    this = (BattleResultExpComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, data);
    byte_4A03901 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4A03906 )
  {
    this = (BattleResultExpComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, data);
    byte_4A03906 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48862580(
                                         (UnityEngine_GameObject_o *)v14,
                                         (const MethodInfo_2E99574 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= m_CancellationTokenSource )
        sub_1B68938(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B68930(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v14; // x20
  System_String_o *v15; // x20

  if ( (byte_4A0BDC2 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_2931/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v6);
    sub_1B686D4(&StringLiteral_2926/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v7);
    byte_4A0BDC2 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectUIList, (int32_t)v8, v9, v10);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.knockdownRecordWindow;
    if ( !window )
      goto LABEL_33;
    ((void (__fastcall *)(BattleWindowComponent_o *, const char *))window->klass[1]._1.gc_desc)(
      window,
      window->klass[1]._1.name);
  }
  window = (BattleWindowComponent_o *)this->fields.masterLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.equipLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.damageRecordRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v14 = (System_String_o *)window;
  if ( !System_String__Equals_61427784((System_String_o *)window, (System_String_o *)StringLiteral_2931/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v14, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2926/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1B68930(window, v11);
  v15 = (System_String_o *)window;
  if ( !System_String__Equals_61427784((System_String_o *)window, (System_String_o *)StringLiteral_2926/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v15, 0LL);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v20; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w20
  __int64 v25; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_Object_array *v29; // x21
  UnityEngine_GameObject_o *v30; // x0
  Il2CppObject *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  char v65[4]; // [xsp+18h] [xbp-48h] BYREF
  int v66; // [xsp+1Ch] [xbp-44h] BYREF
  int v67; // [xsp+28h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4A0BDC9 & 1) == 0 )
  {
    sub_1B686D4(&BattleRootComponent_TypeInfo, method);
    sub_1B686D4(&bool_TypeInfo, v3);
    sub_1B686D4(&object___TypeInfo, v4);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B686D4(&float_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_24660/*"x"*/, v8);
    sub_1B686D4(&StringLiteral_5459/*"END_OPEN"*/, v9);
    sub_1B686D4(&StringLiteral_23846/*"time"*/, v10);
    sub_1B686D4(&StringLiteral_22200/*"oncompletetarget"*/, v11);
    sub_1B686D4(&StringLiteral_18944/*"endMoveFigure"*/, v12);
    sub_1B686D4(&StringLiteral_20761/*"islocal"*/, v13);
    sub_1B686D4(&StringLiteral_22198/*"oncomplete"*/, v14);
    sub_1B686D4(&iTween_TypeInfo, v15);
    byte_4A0BDC9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
  {
    v20 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo
        ? gameObject[1].monitor
        : 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_69;
  v23 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v23;
  *(_QWORD *)&v69.fields.fakeValue = v22;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v69, 0LL);
  if ( !v20 )
    goto LABEL_69;
  v24 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_69;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_69;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v25 = v20[8];
    if ( !v25 )
      goto LABEL_69;
    MasterFigureManagerOld__CreatePrefab_37665988(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v25 + 400),
      v24,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1B6877C(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_69:
    sub_1B68930(gameObject, v17);
  v29 = (System_Object_array *)gameObject;
  v30 = (UnityEngine_GameObject_o *)StringLiteral_24660/*"x"*/;
  if ( StringLiteral_24660/*"x"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_24660/*"x"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = (Il2CppObject *)StringLiteral_24660/*"x"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_68;
  v29->m_Items[0] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v29->m_Items, (int32_t)v31, v27, v28);
  v67 = -1018691584;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v67, v32, v33, v34);
  v37 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_68;
  v29->m_Items[1] = v37;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[1], (int32_t)v37, v35, v36);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_23846/*"time"*/;
  if ( StringLiteral_23846/*"time"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_23846/*"time"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = (Il2CppObject *)StringLiteral_23846/*"time"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_68;
  v29->m_Items[2] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[2], (int32_t)v31, v38, v39);
  v66 = 1061997773;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v66, v40, v41, v42);
  v45 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_68;
  v29->m_Items[3] = v45;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[3], (int32_t)v45, v43, v44);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_20761/*"islocal"*/;
  if ( StringLiteral_20761/*"islocal"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_20761/*"islocal"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = (Il2CppObject *)StringLiteral_20761/*"islocal"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_68;
  v29->m_Items[4] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[4], (int32_t)v31, v46, v47);
  v65[0] = 1;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v65, v48, v49, v50);
  v53 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_68;
  v29->m_Items[5] = v53;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[5], (int32_t)v53, v51, v52);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22200/*"oncompletetarget"*/;
  if ( StringLiteral_22200/*"oncompletetarget"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_22200/*"oncompletetarget"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = (Il2CppObject *)StringLiteral_22200/*"oncompletetarget"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_68;
  v29->m_Items[6] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[6], (int32_t)v31, v54, v55);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v58 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_70:
      v64 = sub_1B68954(v30);
      sub_1B687FC(v64, 0LL);
    }
  }
  if ( v29->max_length <= 7 )
    goto LABEL_68;
  v29->m_Items[7] = v58;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[7], (int32_t)v58, v56, v57);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22198/*"oncomplete"*/;
  if ( StringLiteral_22198/*"oncomplete"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_22198/*"oncomplete"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = (Il2CppObject *)StringLiteral_22198/*"oncomplete"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 8 )
    goto LABEL_68;
  v29->m_Items[8] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[8], (int32_t)v31, v59, v60);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_18944/*"endMoveFigure"*/;
  if ( StringLiteral_18944/*"endMoveFigure"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1B68810(StringLiteral_18944/*"endMoveFigure"*/, v29->obj.klass->_1.element_class);
    if ( v30 )
    {
      v31 = (Il2CppObject *)StringLiteral_18944/*"endMoveFigure"*/;
      goto LABEL_62;
    }
    goto LABEL_70;
  }
  v31 = 0LL;
LABEL_62:
  if ( v29->max_length <= 9 )
LABEL_68:
    sub_1B68938(v30, v31);
  v29->m_Items[9] = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[9], (int32_t)v31, v61, v62);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v63 = iTween__Hash(v29, 0LL);
  iTween__MoveFrom_59959272(figureRoot, v63, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !gameObject )
    goto LABEL_69;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.typeMetadataHandle)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.interopData);
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5459/*"END_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__UpdateValue(
        BattleResultExpComponent_o *this,
        float val,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleResultExpComponent__updateValueActual(this, val, 0, v3);
}


void __fastcall BattleResultExpComponent__activeTouch(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1B68930(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4A0BDD6 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_checkDamageRecord__, method);
    sub_1B686D4(&Method_BattleResultExpComponent_endOpenDamageRecord__, v3);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_17220/*"bit_result_levelup01"*/, v7);
    sub_1B686D4(&StringLiteral_3556/*"CLOSE"*/, v8);
    byte_4A0BDD6 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3556/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_31;
  }
  myFsm = (PlayMakerFSM_o *)this->fields.damageRecordRoot;
  if ( !myFsm )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0LL);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v12 = myFsm;
        v13 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v13;
            p_offset += 2;
            if ( !v13 )
              goto LABEL_14;
          }
          v15 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v15 = sub_1BBA6B4(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_63557140((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1B68930(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_68916908(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v18 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v18,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  v19 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B686EC(Method_BattleResultExpComponent_checkDamageRecord__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B686B8(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v13; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  v2 = this;
  if ( (byte_4A0BDD3 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_checkEquipLevelUp__, method);
    sub_1B686D4(&Method_BattleResultExpComponent_endOpenEquipUp__, v3);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_17220/*"bit_result_levelup01"*/, v7);
    this = (BattleResultExpComponent_o *)sub_1B686D4(&StringLiteral_3556/*"CLOSE"*/, v8);
    byte_4A0BDD3 = 1;
  }
  oldEquip = v2->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_33;
  newEquip = v2->fields.newEquip;
  if ( !newEquip )
    goto LABEL_33;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    this = (BattleResultExpComponent_o *)v2->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3556/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (BattleResultExpComponent_o *)v2->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v13 = this;
        v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 4;
            if ( !v14 )
              goto LABEL_16;
          }
          v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_16:
          v16 = sub_1BBA6B4(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_63557140((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1B68930(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_68916908(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v19,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v20 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B686EC(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B686B8(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v25; // x21
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  struct UserGameEntity_o *v28; // x9
  struct UserGameEntity_o *v29; // x8
  int32_t v30; // w20

  if ( (byte_4A0BDCF & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_checkMasterLevelUp__, method);
    sub_1B686D4(&Method_BattleResultExpComponent_endOpenMasterUp__, v3);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1B686D4(&SimpleAnimation_State_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_17220/*"bit_result_levelup01"*/, v8);
    sub_1B686D4(&StringLiteral_9202/*"NEXT"*/, v9);
    sub_1B686D4(&iTween_TypeInfo, v10);
    byte_4A0BDCF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60068140(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v12);
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  oldGame = this->fields.oldGame;
  this->fields.bondsCountUp = 0;
  if ( !oldGame )
    goto LABEL_42;
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_42;
  if ( oldGame->fields.lv >= newGame->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.myFsm;
    if ( MeterSePlayer )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9202/*"NEXT"*/, 0LL);
      return;
    }
    goto LABEL_42;
  }
  MeterSePlayer = (SePlayer_o *)this->fields.masterLevelupRoot;
  if ( !MeterSePlayer )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MeterSePlayer, 1, 0LL);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v19 = MeterSePlayer;
        v20 = *(unsigned __int16 *)(&MeterSePlayer->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&MeterSePlayer->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v20;
            p_offset += 2;
            if ( !v20 )
              goto LABEL_20;
          }
          v22 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_20:
          v22 = sub_1BBA6B4(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_63557140(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1B68930(MeterSePlayer, v13);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_68916908(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17220/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v25 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v25,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  v26 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B686EC(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B686B8(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 6, 0LL);
  v28 = this->fields.oldGame;
  if ( !v28 )
    goto LABEL_42;
  v29 = this->fields.newGame;
  if ( !v29 )
    goto LABEL_42;
  v30 = v28->fields.lv + 1;
  while ( v30 <= v29->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v30, -1, 0LL, 0LL);
      v29 = this->fields.newGame;
      ++v30;
      if ( v29 )
        continue;
    }
    goto LABEL_42;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A0BDD9 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_3556/*"CLOSE"*/, v3);
    byte_4A0BDD9 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.knockdownRecordWindow;
    if ( !myFsm )
      goto LABEL_11;
    if ( LOBYTE(myFsm[2].monitor) )
    {
      ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, Il2CppClass *))myFsm->klass[1]._1.castClass)(
        myFsm,
        0LL,
        myFsm->klass[1]._1.declaringType);
      return;
    }
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_11:
    sub_1B68930(myFsm, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3556/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4A0BDD7 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A0BDD7 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_1B68930(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v6,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4A0BDD4 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A0BDD4 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_1B68930(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._12_Close.method)(
    equipupwindow,
    v6,
    equipupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4A0BDDA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0BDDA = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1B68930(0LL, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._12_Close.method)(
      v5,
      0LL,
      v5->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v7; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4A0BDD1 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_1B686D4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v5);
    byte_4A0BDD1 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_13;
  if ( effectUIList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v7,
                                                                    (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        break;
      effectUIList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)effectUIList,
                                                                    0LL);
      if ( !effectUIList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
      if ( !effectUIList )
        break;
      if ( ++v7 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1B68930(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1B68920(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v9,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A0BDCB & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5464/*"END_PROC"*/, method);
    byte_4A0BDCB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B68930(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5464/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4A0BDD8 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5464/*"END_PROC"*/, method);
    byte_4A0BDD8 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B68930(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5464/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4A0BDD5 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5464/*"END_PROC"*/, method);
    byte_4A0BDD5 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B68930(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5464/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4A0BDD2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5464/*"END_PROC"*/, method);
    byte_4A0BDD2 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B68930(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5464/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Object_array *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x22
  System_Collections_Hashtable_o *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v61; // [xsp+18h] [xbp-38h] BYREF
  int v62; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A0BDCC & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleResultExpComponent_endMoveFigure__, method);
    sub_1B686D4(&object___TypeInfo, v3);
    sub_1B686D4(&SeManager_TypeInfo, v4);
    sub_1B686D4(&float_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_19587/*"from"*/, v6);
    sub_1B686D4(&StringLiteral_23846/*"time"*/, v7);
    sub_1B686D4(&StringLiteral_22206/*"onupdate"*/, v8);
    sub_1B686D4(&StringLiteral_15129/*"UpdateValue"*/, v9);
    sub_1B686D4(&StringLiteral_23886/*"to"*/, v10);
    sub_1B686D4(&StringLiteral_19368/*"finishUpdateValue"*/, v11);
    sub_1B686D4(&StringLiteral_22198/*"oncomplete"*/, v12);
    sub_1B686D4(&iTween_TypeInfo, v13);
    byte_4A0BDCC = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = sub_1B6877C(object___TypeInfo, 10LL);
    if ( !v15 )
      sub_1B68930(0LL, v16);
    v19 = (System_Object_array *)v15;
    v20 = StringLiteral_19587/*"from"*/;
    if ( StringLiteral_19587/*"from"*/ )
    {
      v20 = sub_1B68810(StringLiteral_19587/*"from"*/, v19->obj.klass->_1.element_class);
      if ( !v20 )
        goto LABEL_59;
      v21 = StringLiteral_19587/*"from"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v19->max_length )
      goto LABEL_58;
    v19->m_Items[0] = (Il2CppObject *)v21;
    sub_1B68678((ServantStatusBattleListViewItem_o *)v19->m_Items, v21, v17, v18);
    v62 = 0;
    v20 = j_il2cpp_value_box_0(float_TypeInfo, &v62, v22, v23, v24);
    v27 = (Il2CppObject *)v20;
    if ( !v20 || (v20 = sub_1B68810(v20, v19->obj.klass->_1.element_class)) != 0 )
    {
      if ( v19->max_length <= 1 )
        goto LABEL_58;
      v19->m_Items[1] = v27;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v27, v25, v26);
      v20 = StringLiteral_23886/*"to"*/;
      if ( StringLiteral_23886/*"to"*/ )
      {
        v20 = sub_1B68810(StringLiteral_23886/*"to"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_59;
        v21 = StringLiteral_23886/*"to"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_58;
      v19->m_Items[2] = (Il2CppObject *)v21;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], v21, v28, v29);
      v61 = 1065353216;
      v20 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v30, v31, v32);
      v35 = (Il2CppObject *)v20;
      if ( !v20 || (v20 = sub_1B68810(v20, v19->obj.klass->_1.element_class)) != 0 )
      {
        if ( v19->max_length <= 3 )
          goto LABEL_58;
        v19->m_Items[3] = v35;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[3], (int32_t)v35, v33, v34);
        v20 = StringLiteral_22206/*"onupdate"*/;
        if ( StringLiteral_22206/*"onupdate"*/ )
        {
          v20 = sub_1B68810(StringLiteral_22206/*"onupdate"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_22206/*"onupdate"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 4 )
          goto LABEL_58;
        v19->m_Items[4] = (Il2CppObject *)v21;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[4], v21, v36, v37);
        v20 = StringLiteral_15129/*"UpdateValue"*/;
        if ( StringLiteral_15129/*"UpdateValue"*/ )
        {
          v20 = sub_1B68810(StringLiteral_15129/*"UpdateValue"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_15129/*"UpdateValue"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 5 )
          goto LABEL_58;
        v19->m_Items[5] = (Il2CppObject *)v21;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[5], v21, v38, v39);
        v20 = StringLiteral_22198/*"oncomplete"*/;
        if ( StringLiteral_22198/*"oncomplete"*/ )
        {
          v20 = sub_1B68810(StringLiteral_22198/*"oncomplete"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_22198/*"oncomplete"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 6 )
          goto LABEL_58;
        v19->m_Items[6] = (Il2CppObject *)v21;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[6], v21, v40, v41);
        v20 = StringLiteral_19368/*"finishUpdateValue"*/;
        if ( StringLiteral_19368/*"finishUpdateValue"*/ )
        {
          v20 = sub_1B68810(StringLiteral_19368/*"finishUpdateValue"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_19368/*"finishUpdateValue"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 7 )
          goto LABEL_58;
        v19->m_Items[7] = (Il2CppObject *)v21;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[7], v21, v42, v43);
        v20 = StringLiteral_23846/*"time"*/;
        if ( StringLiteral_23846/*"time"*/ )
        {
          v20 = sub_1B68810(StringLiteral_23846/*"time"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_23846/*"time"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 8 )
          goto LABEL_58;
        v19->m_Items[8] = (Il2CppObject *)v21;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[8], v21, v44, v45);
        time_exptotal = this->fields.time_exptotal;
        v20 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v46, v47, v48);
        v51 = (Il2CppObject *)v20;
        if ( !v20 || (v20 = sub_1B68810(v20, v19->obj.klass->_1.element_class)) != 0 )
        {
          if ( v19->max_length > 9 )
          {
            v19->m_Items[9] = v51;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->m_Items[9], (int32_t)v51, v49, v50);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v52 = iTween__Hash(v19, 0LL);
            iTween__ValueTo(gameObject, v52, 0LL);
            if ( this->fields.updateFlg )
            {
              v53 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v53 = (_QWORD *)sub_1B686EC(Method_BattleResultExpComponent_endMoveFigure__);
              v54 = (System_Reflection_MethodBase_o *)sub_1B686B8(v53, v53[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v56 = OverwriteAssetSoundName__PlaySe(v54, CommonSeName, 0LL);
              this->fields.MeterSePlayer = v56;
              sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.MeterSePlayer, (int32_t)v56, v57, v58);
            }
            return;
          }
LABEL_58:
          sub_1B68938(v20, v21);
        }
      }
    }
LABEL_59:
    v59 = sub_1B68954(v20);
    sub_1B687FC(v59, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1B68930(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1B68930(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A0BDD0 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15315/*"WAIT_OPEN"*/, method);
    byte_4A0BDD0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15315/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A0BDCD & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9202/*"NEXT"*/, method);
    byte_4A0BDCD = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9202/*"NEXT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultExpComponent__setEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getexp,
        int32_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v16; // x0
  System_String_o *Instance; // x0
  __int64 v18; // x1
  EquipExpMaster_o *v19; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v22; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v24; // x2
  int32_t exp; // w21
  float value; // s0
  float v27; // s8
  float v28; // s0
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int v31; // [xsp+18h] [xbp-58h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-54h] BYREF

  v32 = getexp;
  if ( (byte_4A0BDC8 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_1B686D4(&LocalizationManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B686D4(&StringLiteral_9169/*"N0"*/, v12);
    sub_1B686D4(&StringLiteral_11044/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1B686D4(&StringLiteral_862/*"+ {0}"*/, v14);
    byte_4A0BDC8 = 1;
  }
  entity = 0LL;
  v31 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v16 = (Il2CppObject *)System_Int32__ToString_62224748((int32_t)&v32, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0}"*/, v16, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  v19 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v19, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v19, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_27;
  v22 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v22 )
      goto LABEL_27;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v31 = LODWORD(v22[1].klass) - nowexp;
    Instance = System_Int32__ToString_62224748((int32_t)&v31, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v24);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v19, &entity, equipId, Level - 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_27;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_27:
    sub_1B68930(Instance, v18);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v27 = value;
  if ( Level == LevelMax )
  {
    v28 = 1.0;
    if ( !Instance )
      goto LABEL_27;
  }
  else
  {
    if ( !v22 || !Instance )
      goto LABEL_27;
    v28 = 1.0 - (float)((float)(LODWORD(v22[1].klass) - nowexp) / (float)(LODWORD(v22[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v28, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_27;
  return v27 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  bool v11; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0BDC4 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&level);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_2925/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_1B686D4(&StringLiteral_24900/*"{0}"*/, v7);
    byte_4A0BDC4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2925/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_61427784(v8, (System_String_o *)StringLiteral_2925/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_24900/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
    v17 = v10;
  }
  v8 = System_String__Format(v17, v16, 0LL);
  if ( !equip_Lv )
LABEL_11:
    sub_1B68930(v8, v9);
  UILabel__set_text(equip_Lv, v8, 0LL);
}


bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v17; // x0
  System_String_o *mst_slider; // x0
  __int64 v19; // x1
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v22; // x2
  bool v23; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x23
  UILabel_o *v25; // x24
  System_String_o *v26; // x22
  char *monitor; // x8
  float v28; // s0
  UILabel_o *v29; // x20
  int64_t v31; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int64_t v33; // [xsp+18h] [xbp-58h] BYREF

  v33 = getexp;
  if ( (byte_4A0BDC7 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserExpMaster___, getexp);
    sub_1B686D4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8);
    sub_1B686D4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_1B686D4(&LocalizationManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B686D4(&StringLiteral_9169/*"N0"*/, v12);
    sub_1B686D4(&StringLiteral_11044/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1B686D4(&StringLiteral_8564/*"MAX_USER_LV"*/, v14);
    sub_1B686D4(&StringLiteral_862/*"+ {0}"*/, v15);
    byte_4A0BDC7 = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v17 = (Il2CppObject *)System_Int64__ToString_62229924((int64_t)&v33, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0}"*/, v17, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_30;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_30;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8564/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_30;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_30;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v23 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_30;
    mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_30;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v24,
                                      start_level,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_30;
    v25 = this->fields.mst_atexpLabel;
    v26 = mst_slider;
    v31 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_62229924((int64_t)&v31, (System_String_o *)StringLiteral_9169/*"N0"*/, 0LL);
    if ( !v25 )
      goto LABEL_30;
    UILabel__set_text(v25, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      v24,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_30E4514 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v28 = 1.0 - (double)((unsigned __int64)v26[1].klass - nowexp) / (double)((char *)v26[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v28, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_30:
      sub_1B68930(mst_slider, v19);
    }
    v23 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v22);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8564/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v29 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v23;
        }
      }
    }
    goto LABEL_30;
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  bool v11; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0BDC3 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&level);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_24900/*"{0}"*/, v6);
    sub_1B686D4(&StringLiteral_2930/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_4A0BDC3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_61427784(v8, (System_String_o *)StringLiteral_2930/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_24900/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
    v17 = v10;
  }
  v8 = System_String__Format(v17, v16, 0LL);
  if ( !mst_Lv )
LABEL_11:
    sub_1B68930(v8, v9);
  UILabel__set_text(mst_Lv, v8, 0LL);
}


void __fastcall BattleResultExpComponent__setResultData(
        BattleResultExpComponent_o *this,
        UserGameEntity_o *oldGame,
        UserEquipEntity_o *oldEquip,
        MasterLvRewardInfo_array *masterLvInfoArray,
        AssetData_o *resultAssetData,
        int64_t maxTurnDamage,
        int64_t oldRecord,
        QuestKnockdownResult_o *knockdownResult,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x27
  __int64 Instance; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 *v46; // x26
  int32_t v47; // w2
  int32_t v48; // w3
  struct UserGameEntity_o *v49; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v56; // x2
  Il2CppObject *v57; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  const MethodInfo *v65; // x4
  struct UserGameEntity_o *newGame; // x8
  UserEquipEntity_o *v67; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v69; // x29
  __int64 v70; // x28
  int32_t v71; // w0
  UserEquipEntity_o *v72; // x29
  const MethodInfo *v73; // x5
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v77; // x28
  const MethodInfo *v78; // x4
  int v79; // w27
  __int64 v80; // x8
  signed __int64 v81; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v84; // x8
  UserEquipEntity_o **v85; // x21
  int v86; // w8
  __int64 v87; // x26
  unsigned int v88; // w20
  struct UISprite_array *v89; // x8
  struct UISprite_array *v90; // x8
  struct UISprite_array *v91; // x8
  struct UISprite_array *v92; // x8
  const MethodInfo *v93; // x4
  struct UISprite_array *v94; // x8
  const MethodInfo *v95; // x4
  struct UISprite_array *v96; // x8
  int v97; // w8
  const MethodInfo *v98; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v100; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v103; // x1
  System_Text_StringBuilder_o *v104; // x22
  __int64 v105; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x27
  int v109; // w21
  unsigned __int64 v110; // x20
  int32_t *v111; // x25
  System_String_o *v112; // x28
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  Il2CppObject *v116; // x29
  Il2CppObject *v117; // x0
  System_String_o *v118; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v125; // x21
  bool v126; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v128; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v129; // [xsp+8h] [xbp-98h]
  __int64 v130; // [xsp+18h] [xbp-88h]
  int32_t *v131; // [xsp+20h] [xbp-80h]
  int32_t v132; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0BDC5 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame);
    sub_1B686D4(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEquipMaster___, v18);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserGameMaster___, v19);
    sub_1B686D4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v20);
    sub_1B686D4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v21);
    sub_1B686D4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v22);
    sub_1B686D4(&System_Func_float__int__int__TypeInfo, v23);
    sub_1B686D4(&int_TypeInfo, v24);
    sub_1B686D4(&LocalizationManager_TypeInfo, v25);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v26);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v29);
    sub_1B686D4(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v30);
    sub_1B686D4(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v31);
    sub_1B686D4(&StringLiteral_17233/*"bit_reward_shine01"*/, v32);
    sub_1B686D4(&StringLiteral_11043/*"RESULT_EQEXP_UPSKILLLV"*/, v33);
    sub_1B686D4(&StringLiteral_11042/*"RESULT_EQEXP_GETSKILL"*/, v34);
    sub_1B686D4(&StringLiteral_17234/*"bit_reward_shine02"*/, v35);
    sub_1B686D4(&StringLiteral_428/*"#,#"*/, v36);
    sub_1B686D4(&StringLiteral_1/*""*/, v37);
    byte_4A0BDC5 = 1;
  }
  entity = 0LL;
  v38 = sub_1B68920(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_134;
  *(_QWORD *)(v38 + 16) = oldGame;
  v43 = v38 + 16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)oldGame, v41, v42);
  *(_QWORD *)(v38 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)this, v44, v45);
  *(_QWORD *)(v38 + 32) = masterLvInfoArray;
  v46 = (__int64 *)(v38 + 32);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)masterLvInfoArray, v47, v48);
  v49 = *(struct UserGameEntity_o **)(v38 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v49;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.oldGame, (int32_t)v49, v51, v52);
  this->fields.oldEquip = oldEquip;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.oldEquip, (int32_t)oldEquip, v53, v54);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.knockdownRecordWindow;
    if ( !Instance )
      goto LABEL_134;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v56);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v57 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_30E466C *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v57;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.newGame, (int32_t)v57, v59, v60);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v61 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_30E466C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v61;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.newEquip, (int32_t)v61, v63, v64);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v43 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v43 + 88LL),
    *(_QWORD *)(*(_QWORD *)v43 + 88LL),
    *(_DWORD *)(*(_QWORD *)v43 + 80LL),
    v65);
  v67 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v69 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&v67->fields.equipId.fields.fakeValue;
  v129 = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v134.fields.currentCryptoKey = v69;
  *(_QWORD *)&v134.fields.fakeValue = v70;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v134, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v71, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v72 = v129,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v129->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v129->fields.exp,
                     v129->fields.exp,
                     v129->fields.lv,
                     v73),
        !*(_QWORD *)v43)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v43 + 80LL), v74),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1B68930(Instance, v40);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v43 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v128 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v43 + 80LL),
    (*p_newGame)->fields.lv,
    v75);
  v77 = sub_1B68920(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v77,
    (Il2CppObject *)v38,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v77 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v77 + 24))(
               *(_QWORD *)(v77 + 64),
               35LL,
               *(_QWORD *)(v77 + 40),
               -186.0);
  v79 = Instance;
  if ( (int)Instance < 6 )
  {
    v80 = *v46;
    if ( *v46 )
    {
      v81 = 0LL;
      while ( v81 < *(int *)(v80 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v81 < (int)max_length )
        {
          if ( v81 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v81],
            (System_String_o *)StringLiteral_17233/*"bit_reward_shine01"*/,
            v78);
          v80 = *v46;
        }
        ++v81;
        if ( !v80 )
          goto LABEL_134;
      }
    }
    v85 = &this->fields.newEquip;
    v97 = 35;
    goto LABEL_67;
  }
  v84 = this->fields.upParamList;
  if ( !v84 )
    goto LABEL_134;
  if ( !v84->max_length )
    goto LABEL_135;
  Instance = (__int64)v84->m_Items[0];
  v85 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__48501348(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E41264 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v86 = *(_DWORD *)(Instance + 24);
  v87 = Instance;
  if ( v86 >= 1 )
  {
    v88 = 0;
    while ( v88 < v86 )
    {
      Instance = *(_QWORD *)(v87 + 8LL * (int)v88 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v86 = *(_DWORD *)(v87 + 24);
      if ( (int)++v88 >= v86 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v89 = this->fields.lvUpRewardSpArray;
  if ( !v89 )
    goto LABEL_134;
  if ( !v89->max_length )
    goto LABEL_135;
  Instance = (__int64)v89->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v90 = this->fields.lvUpRewardSpArray;
  if ( !v90 )
    goto LABEL_134;
  if ( !v90->max_length )
    goto LABEL_135;
  Instance = (__int64)v90->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v91 = this->fields.lvUpRewardSpArray;
  if ( !v91 )
    goto LABEL_134;
  if ( v91->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v91->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v92 = this->fields.lvUpRewardSpArray;
  if ( !v92 )
    goto LABEL_134;
  if ( v92->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v92->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v77 + 24))(
               *(_QWORD *)(v77 + 64),
               31LL,
               *(_QWORD *)(v77 + 40),
               -186.0);
  v94 = this->fields.lvUpRewardSpArray;
  if ( !v94 )
    goto LABEL_134;
  if ( !v94->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v94->m_Items[0],
    (System_String_o *)StringLiteral_17234/*"bit_reward_shine02"*/,
    v93);
  v96 = this->fields.lvUpRewardSpArray;
  if ( !v96 )
    goto LABEL_134;
  if ( v96->max_length <= 1 )
LABEL_135:
    sub_1B68938(Instance, v40);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v96->m_Items[1],
    (System_String_o *)StringLiteral_17234/*"bit_reward_shine02"*/,
    v95);
  v97 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v97 * v79 + 134, 0LL);
  if ( !*(_QWORD *)v43 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v43 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v129->fields.lv, v98);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v129 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v100 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v100, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v103 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v103, 0LL);
  v104 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v104, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v129, 0LL);
  if ( !*v85 )
    goto LABEL_134;
  v105 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v85, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v129, 0LL);
  v130 = Instance;
  if ( !*v85 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v85, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v105 )
    goto LABEL_134;
  if ( *(int *)(v105 + 24) >= 1 )
  {
    v108 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v109 = 0;
    v110 = 0LL;
    v111 = &SkillIdList->m_Items[1];
    v131 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v110 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v108 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v108,
                   &entity,
                   v111[v110],
                   (const MethodInfo_30E4514 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v110 >= *(unsigned int *)(v105 + 24) || v110 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v105 + 32 + 4 * v110) != v111[v110] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11042/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v118 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v118, Name, 0LL);
          if ( !v104 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_60582588(v104, (System_String_o *)Instance, 0LL);
LABEL_109:
          v109 += 3;
          goto LABEL_110;
        }
        if ( !v130 )
          goto LABEL_134;
        if ( v110 >= *(unsigned int *)(v130 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v110 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v130 + 32 + 4 * v110) != v131[v110] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11043/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v112 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v110 >= SkillLvList->max_length )
            goto LABEL_135;
          v116 = (Il2CppObject *)Instance;
          v132 = v131[v110];
          v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v113, v114, v115);
          Instance = (__int64)System_String__Format_61433840(v112, v116, v117, 0LL);
          if ( !v104 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_60582588(v104, (System_String_o *)Instance, 0LL);
          v72 = v129;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v110 >= *(int *)(v105 + 24) )
        goto LABEL_113;
    }
  }
  v109 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v135.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v135.fields.y = (float)v109 * 10.0;
  v135.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v135, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v109 + 134, 0LL);
  if ( !v104 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v104->klass->vtable._3_ToString.method)(
               v104,
               v104->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v128 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v72->fields.exp != (*v128)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_62229924(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_428/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_62229924(
                            (int64_t)&this->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_428/*"#,#"*/,
                            0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Instance, 0LL);
        Instance = (__int64)this->fields.damage_recordLabel;
        if ( Instance )
        {
          UIWidget__set_color((UIWidget_o *)Instance, this->fields.record_intactColor, 0LL);
          Instance = (__int64)this->fields.damage_battleLabel;
          if ( Instance )
          {
            UIWidget__set_color((UIWidget_o *)Instance, this->fields.damage_intactColor, 0LL);
            Instance = (__int64)this->fields.damage_recordRenewalSp;
            if ( Instance )
            {
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                v126 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_62229924(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_428/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v125 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_62229924(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_428/*"#,#"*/,
                        0LL);
  if ( !v125 )
    goto LABEL_134;
  UILabel__set_text(v125, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.damage_recordLabel;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)Instance, this->fields.record_renewalColor, 0LL);
  Instance = (__int64)this->fields.damage_battleLabel;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)Instance, this->fields.damage_renewalColor, 0LL);
  Instance = (__int64)this->fields.damage_recordRenewalSp;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  v126 = 1;
LABEL_133:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v126, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__updateValueActual(
        BattleResultExpComponent_o *this,
        float val,
        bool isFinish,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v6; // x19
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  double v9; // d0
  const MethodInfo *v10; // x4
  struct UserGameEntity_o *v11; // x8
  BattleResultExpComponent_o *exp; // x2
  struct UserGameEntity_o *v13; // x9
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  double v16; // d0
  struct UserEquipEntity_o *v17; // x8
  int32_t v18; // w21
  __int64 v19; // x20
  __int64 v20; // x22
  const MethodInfo *v21; // x5
  struct UserEquipEntity_o *v22; // x8
  struct UserEquipEntity_o *v23; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_4A0BDCE & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_4A0BDCE = 1;
  }
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_21;
  newGame = v6->fields.newGame;
  if ( !newGame )
    goto LABEL_21;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v9, 0LL);
  v11 = v6->fields.newGame;
  if ( isFinish )
  {
    if ( !v11 )
      goto LABEL_21;
    exp = (BattleResultExpComponent_o *)v11->fields.exp;
  }
  else
  {
    exp = this;
    if ( !v11 )
      goto LABEL_21;
  }
  v13 = v6->fields.oldGame;
  if ( !v13 )
    goto LABEL_21;
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__setMasterExp(
                                         v6,
                                         v11->fields.exp - v13->fields.exp,
                                         (int64_t)exp,
                                         v13->fields.lv,
                                         v10);
  oldEquip = v6->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_21;
  newEquip = v6->fields.newEquip;
  if ( !newEquip )
    goto LABEL_21;
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_42745140(v16, 0LL);
  v17 = v6->fields.newEquip;
  if ( isFinish )
  {
    if ( !v17 )
      goto LABEL_21;
    v18 = v17->fields.exp;
  }
  else
  {
    v18 = (int)this;
    if ( !v17 )
      goto LABEL_21;
  }
  v20 = *(_QWORD *)&v17->fields.equipId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1B68930(this, isFinish);
  BattleResultExpComponent__setEquipExp(v6, (int32_t)this, v22->fields.exp - v23->fields.exp, v18, v23->fields.lv, v21);
}


void __fastcall BattleResultExpComponent___c__DisplayClass61_0___ctor(
        BattleResultExpComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultExpComponent___c__DisplayClass61_0___setResultData_b__0(
        BattleResultExpComponent___c__DisplayClass61_0_o *this,
        float height,
        int32_t baseHeight,
        const MethodInfo *method)
{
  BattleResultExpComponent___c__DisplayClass61_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w21
  int32_t v22; // w22
  const MethodInfo *v23; // x2
  struct BattleResultExpComponent_o *v24; // x8
  struct BattleResultMasterUpStatusComponent_array *v25; // x8
  const MethodInfo *v26; // x3
  struct BattleResultExpComponent_o *v27; // x8
  struct BattleResultMasterUpStatusComponent_array *v28; // x9
  struct UserGameEntity_o *v29; // x10
  struct UserGameEntity_o *v30; // x8
  int v31; // w22
  struct UserGameEntity_o *v32; // x8
  struct BattleResultExpComponent_o *v33; // x10
  struct UserGameEntity_o *v34; // x9
  struct BattleResultMasterUpStatusComponent_array *v35; // x10
  int32_t costMax; // w21
  int32_t v37; // w23
  const MethodInfo *v38; // x2
  struct BattleResultExpComponent_o *v39; // x8
  struct BattleResultMasterUpStatusComponent_array *v40; // x8
  const MethodInfo *v41; // x3
  struct BattleResultExpComponent_o *v42; // x8
  struct BattleResultMasterUpStatusComponent_array *v43; // x9
  struct UserGameEntity_o *v44; // x10
  struct UserGameEntity_o *v45; // x8
  struct BattleResultExpComponent_o *v46; // x8
  struct BattleResultMasterUpStatusComponent_array *v47; // x8
  struct UserGameEntity_o *v48; // x8
  struct BattleResultExpComponent_o *v49; // x10
  struct UserGameEntity_o *v50; // x9
  struct BattleResultMasterUpStatusComponent_array *v51; // x10
  int32_t friendKeep; // w21
  int32_t v53; // w23
  const MethodInfo *v54; // x2
  struct BattleResultExpComponent_o *v55; // x8
  struct BattleResultMasterUpStatusComponent_array *v56; // x8
  const MethodInfo *v57; // x3
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x9
  struct UserGameEntity_o *v60; // x10
  struct UserGameEntity_o *v61; // x8
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  struct BattleResultExpComponent_o *v64; // x8
  struct BattleResultMasterUpStatusComponent_array *v65; // x8
  EventMaster_o *v66; // x21
  const MethodInfo *v67; // x2
  struct BattleResultExpComponent_o *v68; // x8
  struct BattleResultMasterUpStatusComponent_array *v69; // x8
  BattleResultMasterUpStatusComponent_o *v70; // x8
  System_String_o **v71; // x9
  struct BattleResultExpComponent_o *v72; // x8
  struct BattleResultMasterUpStatusComponent_array *v73; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v75; // x8
  il2cpp_array_size_t v76; // w24
  int v77; // w25
  struct BattleResultExpComponent_o *v78; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v80; // x8
  struct UISprite_array *v81; // x8
  struct MasterLvRewardInfo_array *v82; // x9
  UISprite_o *v83; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v85; // x8
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  struct BattleResultExpComponent_o *v89; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v91; // x9
  MasterLvRewardInfo_o *v92; // x9
  Il2CppObject *v93; // x23
  UILabel_o *v94; // x22
  Il2CppObject *v95; // x0
  struct MasterLvRewardInfo_array *v96; // x8
  int v98; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A0BDDB & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B686D4(&int_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B686D4(&StringLiteral_2928/*"BATTLE_RESULTEXP_FULLAP"*/, v10);
    sub_1B686D4(&StringLiteral_2927/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v11);
    sub_1B686D4(&StringLiteral_2923/*"BATTLE_RESULTEXP_APMAX"*/, v12);
    sub_1B686D4(&StringLiteral_2929/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v13);
    sub_1B686D4(&StringLiteral_2924/*"BATTLE_RESULTEXP_COSTMAX"*/, v14);
    sub_1B686D4(&StringLiteral_1/*""*/, v15);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1B686D4(&StringLiteral_24937/*"{0} {1}個"*/, v16);
    byte_4A0BDDB = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_128;
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_128;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_128;
  upParamList = _4__this->fields.upParamList;
  if ( !upParamList )
    goto LABEL_128;
  if ( upParamList->max_length <= 1 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)upParamList->m_Items[1];
  if ( !this )
    goto LABEL_128;
  actMax = oldGame->fields.actMax;
  v22 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v22 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v31 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v6->fields.__4__this;
    if ( !v24 )
      goto LABEL_128;
    v25 = v24->fields.upParamList;
    if ( !v25 )
      goto LABEL_128;
    if ( v25->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v25->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2923/*"BATTLE_RESULTEXP_APMAX"*/,
      v23);
    v27 = v6->fields.__4__this;
    if ( !v27 )
      goto LABEL_128;
    v28 = v27->fields.upParamList;
    if ( !v28 )
      goto LABEL_128;
    if ( v28->max_length <= 1 )
      goto LABEL_129;
    v29 = v6->fields.oldGame;
    if ( !v29 )
      goto LABEL_128;
    v30 = v27->fields.newGame;
    if ( !v30 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v28->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v29->fields.actMax,
      v30->fields.actMax,
      v26);
    v31 = 1;
  }
  v32 = v6->fields.oldGame;
  if ( !v32 )
    goto LABEL_128;
  v33 = v6->fields.__4__this;
  if ( !v33 )
    goto LABEL_128;
  v34 = v33->fields.newGame;
  if ( !v34 )
    goto LABEL_128;
  v35 = v33->fields.upParamList;
  if ( !v35 )
    goto LABEL_128;
  if ( v35->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v35->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v32->fields.costMax;
  v37 = v34->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v37 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v39 = v6->fields.__4__this;
    if ( !v39 )
      goto LABEL_128;
    v40 = v39->fields.upParamList;
    if ( !v40 )
      goto LABEL_128;
    if ( v40->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v40->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2924/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v38);
    v42 = v6->fields.__4__this;
    if ( !v42 )
      goto LABEL_128;
    v43 = v42->fields.upParamList;
    if ( !v43 )
      goto LABEL_128;
    if ( v43->max_length <= 2 )
      goto LABEL_129;
    v44 = v6->fields.oldGame;
    if ( !v44 )
      goto LABEL_128;
    v45 = v42->fields.newGame;
    if ( !v45 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v43->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v44->fields.costMax,
      v45->fields.costMax,
      v41);
    v46 = v6->fields.__4__this;
    if ( !v46 )
      goto LABEL_128;
    v47 = v46->fields.upParamList;
    if ( !v47 )
      goto LABEL_128;
    if ( v47->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v47->m_Items[2];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    v102.fields.y = height - (float)(v31 * baseHeight);
    v102.fields.x = 0.0;
    v102.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v102, 0LL);
    ++v31;
  }
  v48 = v6->fields.oldGame;
  if ( !v48 )
    goto LABEL_128;
  v49 = v6->fields.__4__this;
  if ( !v49 )
    goto LABEL_128;
  v50 = v49->fields.newGame;
  if ( !v50 )
    goto LABEL_128;
  v51 = v49->fields.upParamList;
  if ( !v51 )
    goto LABEL_128;
  if ( v51->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v51->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v48->fields.friendKeep;
  v53 = v50->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v53 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v55 = v6->fields.__4__this;
    if ( !v55 )
      goto LABEL_128;
    v56 = v55->fields.upParamList;
    if ( !v56 )
      goto LABEL_128;
    if ( v56->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v56->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2927/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v54);
    v58 = v6->fields.__4__this;
    if ( !v58 )
      goto LABEL_128;
    v59 = v58->fields.upParamList;
    if ( !v59 )
      goto LABEL_128;
    if ( v59->max_length <= 3 )
      goto LABEL_129;
    v60 = v6->fields.oldGame;
    if ( !v60 )
      goto LABEL_128;
    v61 = v58->fields.newGame;
    if ( !v61 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v59->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v60->fields.friendKeep,
      v61->fields.friendKeep,
      v57);
    v62 = v6->fields.__4__this;
    if ( !v62 )
      goto LABEL_128;
    v63 = v62->fields.upParamList;
    if ( !v63 )
      goto LABEL_128;
    if ( v63->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v63->m_Items[3];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    v103.fields.y = height - (float)(v31 * baseHeight);
    v103.fields.x = 0.0;
    v103.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v103, 0LL);
    ++v31;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
  v64 = v6->fields.__4__this;
  if ( !v64 )
    goto LABEL_128;
  v65 = v64->fields.upParamList;
  if ( !v65 )
    goto LABEL_128;
  if ( v65->max_length <= 4 )
    goto LABEL_129;
  v66 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v65->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v66 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v66, 0LL);
  v68 = v6->fields.__4__this;
  if ( !v68 )
    goto LABEL_128;
  v69 = v68->fields.upParamList;
  if ( !v69 )
    goto LABEL_128;
  if ( v69->max_length <= 4 )
    goto LABEL_129;
  v70 = v69->m_Items[4];
  if ( !v70 )
    goto LABEL_128;
  v71 = (System_String_o **)&StringLiteral_2929/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v71 = (System_String_o **)&StringLiteral_2928/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v70, *v71, v67);
  v72 = v6->fields.__4__this;
  if ( !v72 || (v73 = v72->fields.upParamList) == 0LL )
LABEL_128:
    sub_1B68930(this, *(_QWORD *)&baseHeight);
  if ( v73->max_length <= 4 )
LABEL_129:
    sub_1B68938(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v73->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  v104.fields.y = height - (float)(v31 * baseHeight);
  v104.fields.x = 0.0;
  v104.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v104, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v31 + 1);
  if ( masterLvInfoArray )
  {
    v75 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v75 <= 2 && (int)v75 >= 1 )
    {
      v98 = v31 + 1;
      v76 = 0;
      v77 = baseHeight * (_DWORD)this;
      do
      {
        v78 = v6->fields.__4__this;
        if ( !v78 )
          goto LABEL_128;
        lvUpRewardSpArray = v78->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v76 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Transform__get_parent(
                                                                     (UnityEngine_Transform_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        v105.fields.y = height - (float)v77;
        v105.fields.x = -30.0;
        v105.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v105, 0LL);
        v80 = v6->fields.__4__this;
        if ( !v80 )
          goto LABEL_128;
        v81 = v80->fields.lvUpRewardSpArray;
        if ( !v81 )
          goto LABEL_128;
        if ( v76 >= v81->max_length )
          goto LABEL_129;
        v82 = v6->fields.masterLvInfoArray;
        if ( !v82 )
          goto LABEL_128;
        if ( v76 >= v82->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v82->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        v83 = v81->m_Items[v76];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v83, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v85 = v6->fields.masterLvInfoArray;
        if ( !v85 )
          goto LABEL_128;
        if ( v76 >= v85->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v85->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v89 = v6->fields.__4__this;
        if ( !v89 )
          goto LABEL_128;
        lvUpRewardLabelArray = v89->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v76 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v91 = v6->fields.masterLvInfoArray;
        if ( !v91 )
          goto LABEL_128;
        if ( v76 >= v91->max_length )
          goto LABEL_129;
        v92 = v91->m_Items[v76];
        if ( !v92 )
          goto LABEL_128;
        v93 = (Il2CppObject *)nameText;
        v94 = lvUpRewardLabelArray->m_Items[v76];
        num = v92->fields.num;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v86, v87, v88);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_61433840(
                                                                     (System_String_o *)StringLiteral_24937/*"{0} {1}個"*/,
                                                                     v93,
                                                                     v95,
                                                                     0LL);
        if ( !v94 )
          goto LABEL_128;
        UILabel__set_text(v94, (System_String_o *)this, 0LL);
        v96 = v6->fields.masterLvInfoArray;
        if ( !v96 )
          goto LABEL_128;
        ++v76;
        v77 += baseHeight;
      }
      while ( (signed int)v76 < (signed int)v96->max_length );
      LODWORD(this) = v98 + v76;
    }
  }
  return (int)this;
}