void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BB5160;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BB4260;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5E322 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_endClose__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E322 = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1B8880C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v4,
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
  Il2CppObject *Object_object__48635516; // x21
  BattleResultExpComponent_o *v10; // x21
  BattleResultExpComponent_o *v11; // x22
  BattleResultExpComponent_o *v12; // x22
  BattleResultExpComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4A5E31E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E31E = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              effectName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__48635516,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v10 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v12 = this;
  if ( !byte_4A55CE1 )
  {
    this = (BattleResultExpComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v13 = this;
  if ( !byte_4A55CE6 )
  {
    this = (BattleResultExpComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                         (UnityEngine_GameObject_o *)v10,
                                         (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= m_CancellationTokenSource )
        sub_1B88814(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v9; // x20
  System_String_o *v10; // x20

  if ( (byte_4A5E31A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2953/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_1B885B0(&StringLiteral_2948/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_4A5E31A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectUIList, (int32_t)v3, v4, v5);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v9 = (System_String_o *)window;
  if ( !System_String__Equals_61715348((System_String_o *)window, (System_String_o *)StringLiteral_2953/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v9, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2948/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1B8880C(window, v6);
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_61715348((System_String_o *)window, (System_String_o *)StringLiteral_2948/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v10, 0LL);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v7; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  __int64 v12; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_Object_array *v16; // x21
  UnityEngine_GameObject_o *v17; // x0
  Il2CppObject *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Hashtable_o *v50; // x0
  __int64 v51; // x0
  char v52[4]; // [xsp+18h] [xbp-48h] BYREF
  int v53; // [xsp+1Ch] [xbp-44h] BYREF
  int v54; // [xsp+28h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4A5E321 & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent_TypeInfo);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24743/*"x"*/);
    sub_1B885B0(&StringLiteral_5484/*"END_OPEN"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_19012/*"endMoveFigure"*/);
    sub_1B885B0(&StringLiteral_20832/*"islocal"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E321 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
  {
    v7 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo
       ? gameObject[1].monitor
       : 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_69;
  v10 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v10;
  *(_QWORD *)&v56.fields.fakeValue = v9;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v56, 0LL);
  if ( !v7 )
    goto LABEL_69;
  v11 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_69;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_69;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v12 = v7[8];
    if ( !v12 )
      goto LABEL_69;
    MasterFigureManagerOld__CreatePrefab_37918832(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v12 + 400),
      v11,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1B88658(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_69:
    sub_1B8880C(gameObject, v4);
  v16 = (System_Object_array *)gameObject;
  v17 = (UnityEngine_GameObject_o *)StringLiteral_24743/*"x"*/;
  if ( StringLiteral_24743/*"x"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_24743/*"x"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
    v18 = (Il2CppObject *)StringLiteral_24743/*"x"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_68;
  v16->m_Items[0] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v16->m_Items, (int32_t)v18, v14, v15);
  v54 = -1018691584;
  v17 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v19, v20, v21);
  v24 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_68;
  v16->m_Items[1] = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[1], (int32_t)v24, v22, v23);
  v17 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
    v18 = (Il2CppObject *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_68;
  v16->m_Items[2] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[2], (int32_t)v18, v25, v26);
  v53 = 1061997773;
  v17 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v27, v28, v29);
  v32 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_68;
  v16->m_Items[3] = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[3], (int32_t)v32, v30, v31);
  v17 = (UnityEngine_GameObject_o *)StringLiteral_20832/*"islocal"*/;
  if ( StringLiteral_20832/*"islocal"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20832/*"islocal"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
    v18 = (Il2CppObject *)StringLiteral_20832/*"islocal"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 4 )
    goto LABEL_68;
  v16->m_Items[4] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[4], (int32_t)v18, v33, v34);
  v52[0] = 1;
  v17 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v52, v35, v36, v37);
  v40 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
  }
  if ( v16->max_length <= 5 )
    goto LABEL_68;
  v16->m_Items[5] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[5], (int32_t)v40, v38, v39);
  v17 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
    v18 = (Il2CppObject *)StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 6 )
    goto LABEL_68;
  v16->m_Items[6] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[6], (int32_t)v18, v41, v42);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v45 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_70:
      v51 = sub_1B88830(v17);
      sub_1B886D8(v51, 0LL);
    }
  }
  if ( v16->max_length <= 7 )
    goto LABEL_68;
  v16->m_Items[7] = v45;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[7], (int32_t)v45, v43, v44);
  v17 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_70;
    v18 = (Il2CppObject *)StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 8 )
    goto LABEL_68;
  v16->m_Items[8] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[8], (int32_t)v18, v46, v47);
  v17 = (UnityEngine_GameObject_o *)StringLiteral_19012/*"endMoveFigure"*/;
  if ( StringLiteral_19012/*"endMoveFigure"*/ )
  {
    v17 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_19012/*"endMoveFigure"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v18 = (Il2CppObject *)StringLiteral_19012/*"endMoveFigure"*/;
      goto LABEL_62;
    }
    goto LABEL_70;
  }
  v18 = 0LL;
LABEL_62:
  if ( v16->max_length <= 9 )
LABEL_68:
    sub_1B88814(v17, v18);
  v16->m_Items[9] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->m_Items[9], (int32_t)v18, v48, v49);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v50 = iTween__Hash(v16, 0LL);
  iTween__MoveFrom_60246836(figureRoot, v50, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5484/*"END_OPEN"*/, 0LL);
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
    sub_1B8880C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v6; // x20
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v9; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4A5E32E & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_checkDamageRecord__);
    sub_1B885B0(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_17285/*"bit_result_levelup01"*/);
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A5E32E = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v6 = myFsm;
        v7 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v7;
            p_offset += 2;
            if ( !v7 )
              goto LABEL_14;
          }
          v9 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v9 = sub_1BDA590(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v9)(v6, *(_QWORD *)(v9 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_63844704((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1B8880C(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_69204472(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v12,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  v13 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_BattleResultExpComponent_checkDamageRecord__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v2 = this;
  if ( (byte_4A5E32B & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_checkEquipLevelUp__);
    sub_1B885B0(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_17285/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A5E32B = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
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
                                             (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v7 = this;
        v8 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v8;
            p_offset += 4;
            if ( !v8 )
              goto LABEL_16;
          }
          v10 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_16:
          v10 = sub_1BDA590(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_63844704((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1B8880C(this, method);
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
                                             (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_69204472(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v13,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v14 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B885C8(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v11; // x20
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct UserGameEntity_o *v20; // x9
  struct UserGameEntity_o *v21; // x8
  int32_t v22; // w20

  if ( (byte_4A5E327 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_checkMasterLevelUp__);
    sub_1B885B0(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_17285/*"bit_result_levelup01"*/);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E327 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v4);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v11 = MeterSePlayer;
        v12 = *(unsigned __int16 *)(&MeterSePlayer->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&MeterSePlayer->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v12;
            p_offset += 2;
            if ( !v12 )
              goto LABEL_20;
          }
          v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_20:
          v14 = sub_1BDA590(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_63844704(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1B8880C(MeterSePlayer, v5);
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
                                    (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_69204472(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v17 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v17,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  v18 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B885C8(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0LL);
  v20 = this->fields.oldGame;
  if ( !v20 )
    goto LABEL_42;
  v21 = this->fields.newGame;
  if ( !v21 )
    goto LABEL_42;
  v22 = v20->fields.lv + 1;
  while ( v22 <= v21->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v22, -1, 0LL, 0LL);
      v21 = this->fields.newGame;
      ++v22;
      if ( v21 )
        continue;
    }
    goto LABEL_42;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E331 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A5E331 = 1;
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
    sub_1B8880C(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4A5E32F & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E32F = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_1B8880C(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v5,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4A5E32C & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_endCloseEquipUp__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E32C = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_1B8880C(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._12_Close.method)(
    equipupwindow,
    v5,
    equipupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4A5E332 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E332 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._12_Close.method)(
      v5,
      0LL,
      v5->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v4; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4A5E329 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4A5E329 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_13;
  if ( effectUIList->fields._size >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v4,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
      if ( ++v4 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1B8880C(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v6,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A5E323 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E323 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4A5E330 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E330 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4A5E32D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E32D = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4A5E32A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E32A = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Object_array *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x22
  System_Collections_Hashtable_o *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v50; // [xsp+18h] [xbp-38h] BYREF
  int v51; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5E324 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultExpComponent_endMoveFigure__);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_15194/*"UpdateValue"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_19436/*"finishUpdateValue"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E324 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_1B88658(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_1B8880C(0LL, v5);
    v8 = (System_Object_array *)v4;
    v9 = StringLiteral_19656/*"from"*/;
    if ( StringLiteral_19656/*"from"*/ )
    {
      v9 = sub_1B886EC(StringLiteral_19656/*"from"*/, v8->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_59;
      v10 = StringLiteral_19656/*"from"*/;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v8->max_length )
      goto LABEL_58;
    v8->m_Items[0] = (Il2CppObject *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, v10, v6, v7);
    v51 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v51, v11, v12, v13);
    v16 = (Il2CppObject *)v9;
    if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
    {
      if ( v8->max_length <= 1 )
        goto LABEL_58;
      v8->m_Items[1] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v16, v14, v15);
      v9 = StringLiteral_23969/*"to"*/;
      if ( StringLiteral_23969/*"to"*/ )
      {
        v9 = sub_1B886EC(StringLiteral_23969/*"to"*/, v8->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_59;
        v10 = StringLiteral_23969/*"to"*/;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v8->max_length <= 2 )
        goto LABEL_58;
      v8->m_Items[2] = (Il2CppObject *)v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], v10, v17, v18);
      v50 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v50, v19, v20, v21);
      v24 = (Il2CppObject *)v9;
      if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
      {
        if ( v8->max_length <= 3 )
          goto LABEL_58;
        v8->m_Items[3] = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v24, v22, v23);
        v9 = StringLiteral_22281/*"onupdate"*/;
        if ( StringLiteral_22281/*"onupdate"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22281/*"onupdate"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 4 )
          goto LABEL_58;
        v8->m_Items[4] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], v10, v25, v26);
        v9 = StringLiteral_15194/*"UpdateValue"*/;
        if ( StringLiteral_15194/*"UpdateValue"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_15194/*"UpdateValue"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_15194/*"UpdateValue"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 5 )
          goto LABEL_58;
        v8->m_Items[5] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[5], v10, v27, v28);
        v9 = StringLiteral_22273/*"oncomplete"*/;
        if ( StringLiteral_22273/*"oncomplete"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22273/*"oncomplete"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 6 )
          goto LABEL_58;
        v8->m_Items[6] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[6], v10, v29, v30);
        v9 = StringLiteral_19436/*"finishUpdateValue"*/;
        if ( StringLiteral_19436/*"finishUpdateValue"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_19436/*"finishUpdateValue"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_19436/*"finishUpdateValue"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 7 )
          goto LABEL_58;
        v8->m_Items[7] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[7], v10, v31, v32);
        v9 = StringLiteral_23929/*"time"*/;
        if ( StringLiteral_23929/*"time"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_23929/*"time"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_23929/*"time"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 8 )
          goto LABEL_58;
        v8->m_Items[8] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[8], v10, v33, v34);
        time_exptotal = this->fields.time_exptotal;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v35, v36, v37);
        v40 = (Il2CppObject *)v9;
        if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
        {
          if ( v8->max_length > 9 )
          {
            v8->m_Items[9] = v40;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[9], (int32_t)v40, v38, v39);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v41 = iTween__Hash(v8, 0LL);
            iTween__ValueTo(gameObject, v41, 0LL);
            if ( this->fields.updateFlg )
            {
              v42 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v42 = (_QWORD *)sub_1B885C8(Method_BattleResultExpComponent_endMoveFigure__);
              v43 = (System_Reflection_MethodBase_o *)sub_1B88594(v42, v42[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v45 = OverwriteAssetSoundName__PlaySe(v43, CommonSeName, 0LL);
              this->fields.MeterSePlayer = v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.MeterSePlayer, (int32_t)v45, v46, v47);
            }
            return;
          }
LABEL_58:
          sub_1B88814(v9, v10);
        }
      }
    }
LABEL_59:
    v48 = sub_1B88830(v9);
    sub_1B886D8(v48, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1B8880C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1B8880C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E328 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15381/*"WAIT_OPEN"*/);
    byte_4A5E328 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15381/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E325 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E325 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
}


bool __fastcall BattleResultExpComponent__setEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getexp,
        int32_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v11; // x0
  System_String_o *Instance; // x0
  __int64 v13; // x1
  EquipExpMaster_o *v14; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v17; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v19; // x2
  int32_t exp; // w21
  float value; // s0
  float v22; // s8
  float v23; // s0
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int v26; // [xsp+18h] [xbp-58h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-54h] BYREF

  v27 = getexp;
  if ( (byte_4A5E320 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_11092/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1B885B0(&StringLiteral_862/*"+ {0}"*/);
    byte_4A5E320 = 1;
  }
  entity = 0LL;
  v26 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v11 = (Il2CppObject *)System_Int32__ToString_62512312((int32_t)&v27, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0}"*/, v11, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  v14 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v14, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v14, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_27;
  v17 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v17 )
      goto LABEL_27;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v26 = LODWORD(v17[1].klass) - nowexp;
    Instance = System_Int32__ToString_62512312((int32_t)&v26, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v19);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v14, &entity, equipId, Level - 1, 0LL);
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
    sub_1B8880C(Instance, v13);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v22 = value;
  if ( Level == LevelMax )
  {
    v23 = 1.0;
    if ( !Instance )
      goto LABEL_27;
  }
  else
  {
    if ( !v17 || !Instance )
      goto LABEL_27;
    v23 = 1.0 - (float)((float)(LODWORD(v17[1].klass) - nowexp) / (float)(LODWORD(v17[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v23, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_27;
  return v22 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E31C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2947/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A5E31C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_61715348(v5, (System_String_o *)StringLiteral_2947/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_24983/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0LL);
  if ( !equip_Lv )
LABEL_11:
    sub_1B8880C(v5, v6);
  UILabel__set_text(equip_Lv, v5, 0LL);
}


bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v9; // x0
  System_String_o *mst_slider; // x0
  __int64 v11; // x1
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v14; // x2
  bool v15; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  UILabel_o *v17; // x24
  System_String_o *v18; // x22
  char *monitor; // x8
  float v20; // s0
  UILabel_o *v21; // x20
  int64_t v23; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int64_t v25; // [xsp+18h] [xbp-58h] BYREF

  v25 = getexp;
  if ( (byte_4A5E31F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_11092/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1B885B0(&StringLiteral_8599/*"MAX_USER_LV"*/);
    sub_1B885B0(&StringLiteral_862/*"+ {0}"*/);
    byte_4A5E31F = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v9 = (Il2CppObject *)System_Int64__ToString_62517488((int64_t)&v25, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0}"*/, v9, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_30;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_30;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8599/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_30;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_30;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v15 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_30;
    mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_30;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      start_level,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_30;
    v17 = this->fields.mst_atexpLabel;
    v18 = mst_slider;
    v23 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_62517488((int64_t)&v23, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    if ( !v17 )
      goto LABEL_30;
    UILabel__set_text(v17, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      v16,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v20 = 1.0 - (double)((unsigned __int64)v18[1].klass - nowexp) / (double)((char *)v18[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v20, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_30:
      sub_1B8880C(mst_slider, v11);
    }
    v15 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v14);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8599/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v21 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v21 )
      {
        UILabel__set_text(v21, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v15;
        }
      }
    }
    goto LABEL_30;
  }
  return v15;
}


void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E31B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_2952/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_4A5E31B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_61715348(v5, (System_String_o *)StringLiteral_2952/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_24983/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0LL);
  if ( !mst_Lv )
LABEL_11:
    sub_1B8880C(v5, v6);
  UILabel__set_text(mst_Lv, v5, 0LL);
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
  __int64 v17; // x27
  __int64 Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  struct UserGameEntity_o *v28; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x4
  struct UserGameEntity_o *newGame; // x8
  UserEquipEntity_o *v46; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v48; // x29
  __int64 v49; // x28
  int32_t v50; // w0
  UserEquipEntity_o *v51; // x29
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v56; // x28
  const MethodInfo *v57; // x4
  int v58; // w27
  __int64 v59; // x8
  signed __int64 v60; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  UserEquipEntity_o **v64; // x21
  int v65; // w8
  __int64 v66; // x26
  unsigned int v67; // w20
  struct UISprite_array *v68; // x8
  struct UISprite_array *v69; // x8
  struct UISprite_array *v70; // x8
  struct UISprite_array *v71; // x8
  const MethodInfo *v72; // x4
  struct UISprite_array *v73; // x8
  const MethodInfo *v74; // x4
  struct UISprite_array *v75; // x8
  int v76; // w8
  const MethodInfo *v77; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v79; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v82; // x1
  System_Text_StringBuilder_o *v83; // x22
  __int64 v84; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // x27
  int v88; // w21
  unsigned __int64 v89; // x20
  int32_t *v90; // x25
  System_String_o *v91; // x28
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x29
  Il2CppObject *v96; // x0
  System_String_o *v97; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v104; // x21
  bool v105; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v107; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v108; // [xsp+8h] [xbp-98h]
  __int64 v109; // [xsp+18h] [xbp-88h]
  int32_t *v110; // [xsp+20h] [xbp-80h]
  int32_t v111; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E31D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_float__int__int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__);
    sub_1B885B0(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
    sub_1B885B0(&StringLiteral_17298/*"bit_reward_shine01"*/);
    sub_1B885B0(&StringLiteral_11091/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_1B885B0(&StringLiteral_11090/*"RESULT_EQEXP_GETSKILL"*/);
    sub_1B885B0(&StringLiteral_17299/*"bit_reward_shine02"*/);
    sub_1B885B0(&StringLiteral_428/*"#,#"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E31D = 1;
  }
  entity = 0LL;
  v17 = sub_1B887FC(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_134;
  *(_QWORD *)(v17 + 16) = oldGame;
  v22 = v17 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)oldGame, v20, v21);
  *(_QWORD *)(v17 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v23, v24);
  *(_QWORD *)(v17 + 32) = masterLvInfoArray;
  v25 = (__int64 *)(v17 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)masterLvInfoArray, v26, v27);
  v28 = *(struct UserGameEntity_o **)(v17 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldGame, (int32_t)v28, v30, v31);
  this->fields.oldEquip = oldEquip;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldEquip, (int32_t)oldEquip, v32, v33);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v35);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v36 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.newGame, (int32_t)v36, v38, v39);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v40 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.newEquip, (int32_t)v40, v42, v43);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v22 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v22 + 88LL),
    *(_QWORD *)(*(_QWORD *)v22 + 88LL),
    *(_DWORD *)(*(_QWORD *)v22 + 80LL),
    v44);
  v46 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v48 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v46->fields.equipId.fields.fakeValue;
  v108 = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v48;
  *(_QWORD *)&v113.fields.fakeValue = v49;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v113, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v50, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v51 = v108,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v108->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v108->fields.exp,
                     v108->fields.exp,
                     v108->fields.lv,
                     v52),
        !*(_QWORD *)v22)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v22 + 80LL), v53),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1B8880C(Instance, v19);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v22 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v107 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v22 + 80LL),
    (*p_newGame)->fields.lv,
    v54);
  v56 = sub_1B887FC(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v56,
    (Il2CppObject *)v17,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v56 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v56 + 24))(
               *(_QWORD *)(v56 + 64),
               35LL,
               *(_QWORD *)(v56 + 40),
               -186.0);
  v58 = Instance;
  if ( (int)Instance < 6 )
  {
    v59 = *v25;
    if ( *v25 )
    {
      v60 = 0LL;
      while ( v60 < *(int *)(v59 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v60 < (int)max_length )
        {
          if ( v60 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v60],
            (System_String_o *)StringLiteral_17298/*"bit_reward_shine01"*/,
            v57);
          v59 = *v25;
        }
        ++v60;
        if ( !v59 )
          goto LABEL_134;
      }
    }
    v64 = &this->fields.newEquip;
    v76 = 35;
    goto LABEL_67;
  }
  v63 = this->fields.upParamList;
  if ( !v63 )
    goto LABEL_134;
  if ( !v63->max_length )
    goto LABEL_135;
  Instance = (__int64)v63->m_Items[0];
  v64 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__48721436(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v65 = *(_DWORD *)(Instance + 24);
  v66 = Instance;
  if ( v65 >= 1 )
  {
    v67 = 0;
    while ( v67 < v65 )
    {
      Instance = *(_QWORD *)(v66 + 8LL * (int)v67 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v65 = *(_DWORD *)(v66 + 24);
      if ( (int)++v67 >= v65 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v68 = this->fields.lvUpRewardSpArray;
  if ( !v68 )
    goto LABEL_134;
  if ( !v68->max_length )
    goto LABEL_135;
  Instance = (__int64)v68->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v69 = this->fields.lvUpRewardSpArray;
  if ( !v69 )
    goto LABEL_134;
  if ( !v69->max_length )
    goto LABEL_135;
  Instance = (__int64)v69->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v70 = this->fields.lvUpRewardSpArray;
  if ( !v70 )
    goto LABEL_134;
  if ( v70->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v70->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v71 = this->fields.lvUpRewardSpArray;
  if ( !v71 )
    goto LABEL_134;
  if ( v71->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v71->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v56 + 24))(
               *(_QWORD *)(v56 + 64),
               31LL,
               *(_QWORD *)(v56 + 40),
               -186.0);
  v73 = this->fields.lvUpRewardSpArray;
  if ( !v73 )
    goto LABEL_134;
  if ( !v73->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v73->m_Items[0],
    (System_String_o *)StringLiteral_17299/*"bit_reward_shine02"*/,
    v72);
  v75 = this->fields.lvUpRewardSpArray;
  if ( !v75 )
    goto LABEL_134;
  if ( v75->max_length <= 1 )
LABEL_135:
    sub_1B88814(Instance, v19);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v75->m_Items[1],
    (System_String_o *)StringLiteral_17299/*"bit_reward_shine02"*/,
    v74);
  v76 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v76 * v58 + 134, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v22 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v108->fields.lv, v77);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v108 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v79 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v79, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v82 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v82, 0LL);
  v83 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v83, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v108, 0LL);
  if ( !*v64 )
    goto LABEL_134;
  v84 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v64, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v108, 0LL);
  v109 = Instance;
  if ( !*v64 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v64, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v84 )
    goto LABEL_134;
  if ( *(int *)(v84 + 24) >= 1 )
  {
    v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v88 = 0;
    v89 = 0LL;
    v90 = &SkillIdList->m_Items[1];
    v110 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v89 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v87 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v87,
                   &entity,
                   v90[v89],
                   (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v89 >= *(unsigned int *)(v84 + 24) || v89 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v84 + 32 + 4 * v89) != v90[v89] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11090/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v97 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v97, Name, 0LL);
          if ( !v83 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_60870152(v83, (System_String_o *)Instance, 0LL);
LABEL_109:
          v88 += 3;
          goto LABEL_110;
        }
        if ( !v109 )
          goto LABEL_134;
        if ( v89 >= *(unsigned int *)(v109 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v89 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v109 + 32 + 4 * v89) != v110[v89] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v91 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v89 >= SkillLvList->max_length )
            goto LABEL_135;
          v95 = (Il2CppObject *)Instance;
          v111 = v110[v89];
          v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111, v92, v93, v94);
          Instance = (__int64)System_String__Format_61721404(v91, v95, v96, 0LL);
          if ( !v83 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_60870152(v83, (System_String_o *)Instance, 0LL);
          v51 = v108;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v89 >= *(int *)(v84 + 24) )
        goto LABEL_113;
    }
  }
  v88 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v114.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v114.fields.y = (float)v88 * 10.0;
  v114.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v114, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v88 + 134, 0LL);
  if ( !v83 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v83->klass->vtable._3_ToString.method)(
               v83,
               v83->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v107 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v51->fields.exp != (*v107)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_62517488(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_428/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_62517488(
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
                v105 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_62517488(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_428/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v104 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_62517488(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_428/*"#,#"*/,
                        0LL);
  if ( !v104 )
    goto LABEL_134;
  UILabel__set_text(v104, (System_String_o *)Instance, 0LL);
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
  v105 = 1;
LABEL_133:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v105, 0LL);
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
  if ( (byte_4A5E326 & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E326 = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_43026096(v16, 0LL);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1B8880C(this, isFinish);
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
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w21
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  struct BattleResultExpComponent_o *v14; // x8
  struct BattleResultMasterUpStatusComponent_array *v15; // x8
  const MethodInfo *v16; // x3
  struct BattleResultExpComponent_o *v17; // x8
  struct BattleResultMasterUpStatusComponent_array *v18; // x9
  struct UserGameEntity_o *v19; // x10
  struct UserGameEntity_o *v20; // x8
  int v21; // w22
  struct UserGameEntity_o *v22; // x8
  struct BattleResultExpComponent_o *v23; // x10
  struct UserGameEntity_o *v24; // x9
  struct BattleResultMasterUpStatusComponent_array *v25; // x10
  int32_t costMax; // w21
  int32_t v27; // w23
  const MethodInfo *v28; // x2
  struct BattleResultExpComponent_o *v29; // x8
  struct BattleResultMasterUpStatusComponent_array *v30; // x8
  const MethodInfo *v31; // x3
  struct BattleResultExpComponent_o *v32; // x8
  struct BattleResultMasterUpStatusComponent_array *v33; // x9
  struct UserGameEntity_o *v34; // x10
  struct UserGameEntity_o *v35; // x8
  struct BattleResultExpComponent_o *v36; // x8
  struct BattleResultMasterUpStatusComponent_array *v37; // x8
  struct UserGameEntity_o *v38; // x8
  struct BattleResultExpComponent_o *v39; // x10
  struct UserGameEntity_o *v40; // x9
  struct BattleResultMasterUpStatusComponent_array *v41; // x10
  int32_t friendKeep; // w21
  int32_t v43; // w23
  const MethodInfo *v44; // x2
  struct BattleResultExpComponent_o *v45; // x8
  struct BattleResultMasterUpStatusComponent_array *v46; // x8
  const MethodInfo *v47; // x3
  struct BattleResultExpComponent_o *v48; // x8
  struct BattleResultMasterUpStatusComponent_array *v49; // x9
  struct UserGameEntity_o *v50; // x10
  struct UserGameEntity_o *v51; // x8
  struct BattleResultExpComponent_o *v52; // x8
  struct BattleResultMasterUpStatusComponent_array *v53; // x8
  struct BattleResultExpComponent_o *v54; // x8
  struct BattleResultMasterUpStatusComponent_array *v55; // x8
  EventMaster_o *v56; // x21
  const MethodInfo *v57; // x2
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x8
  BattleResultMasterUpStatusComponent_o *v60; // x8
  System_String_o **v61; // x9
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v65; // x8
  il2cpp_array_size_t v66; // w24
  int v67; // w25
  struct BattleResultExpComponent_o *v68; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v70; // x8
  struct UISprite_array *v71; // x8
  struct MasterLvRewardInfo_array *v72; // x9
  UISprite_o *v73; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v75; // x8
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  struct BattleResultExpComponent_o *v79; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v81; // x9
  MasterLvRewardInfo_o *v82; // x9
  Il2CppObject *v83; // x23
  UILabel_o *v84; // x22
  Il2CppObject *v85; // x0
  struct MasterLvRewardInfo_array *v86; // x8
  int v88; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A5E333 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_2950/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_1B885B0(&StringLiteral_2949/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_1B885B0(&StringLiteral_2945/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_1B885B0(&StringLiteral_2951/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_1B885B0(&StringLiteral_2946/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1B885B0(&StringLiteral_25020/*"{0} {1}個"*/);
    byte_4A5E333 = 1;
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
  v12 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v12 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v21 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v14 = v6->fields.__4__this;
    if ( !v14 )
      goto LABEL_128;
    v15 = v14->fields.upParamList;
    if ( !v15 )
      goto LABEL_128;
    if ( v15->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v15->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2945/*"BATTLE_RESULTEXP_APMAX"*/,
      v13);
    v17 = v6->fields.__4__this;
    if ( !v17 )
      goto LABEL_128;
    v18 = v17->fields.upParamList;
    if ( !v18 )
      goto LABEL_128;
    if ( v18->max_length <= 1 )
      goto LABEL_129;
    v19 = v6->fields.oldGame;
    if ( !v19 )
      goto LABEL_128;
    v20 = v17->fields.newGame;
    if ( !v20 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v18->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v19->fields.actMax,
      v20->fields.actMax,
      v16);
    v21 = 1;
  }
  v22 = v6->fields.oldGame;
  if ( !v22 )
    goto LABEL_128;
  v23 = v6->fields.__4__this;
  if ( !v23 )
    goto LABEL_128;
  v24 = v23->fields.newGame;
  if ( !v24 )
    goto LABEL_128;
  v25 = v23->fields.upParamList;
  if ( !v25 )
    goto LABEL_128;
  if ( v25->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v25->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v22->fields.costMax;
  v27 = v24->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v27 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v29 = v6->fields.__4__this;
    if ( !v29 )
      goto LABEL_128;
    v30 = v29->fields.upParamList;
    if ( !v30 )
      goto LABEL_128;
    if ( v30->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v30->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2946/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v28);
    v32 = v6->fields.__4__this;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.upParamList;
    if ( !v33 )
      goto LABEL_128;
    if ( v33->max_length <= 2 )
      goto LABEL_129;
    v34 = v6->fields.oldGame;
    if ( !v34 )
      goto LABEL_128;
    v35 = v32->fields.newGame;
    if ( !v35 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v33->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v34->fields.costMax,
      v35->fields.costMax,
      v31);
    v36 = v6->fields.__4__this;
    if ( !v36 )
      goto LABEL_128;
    v37 = v36->fields.upParamList;
    if ( !v37 )
      goto LABEL_128;
    if ( v37->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v37->m_Items[2];
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
    v92.fields.y = height - (float)(v21 * baseHeight);
    v92.fields.x = 0.0;
    v92.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v92, 0LL);
    ++v21;
  }
  v38 = v6->fields.oldGame;
  if ( !v38 )
    goto LABEL_128;
  v39 = v6->fields.__4__this;
  if ( !v39 )
    goto LABEL_128;
  v40 = v39->fields.newGame;
  if ( !v40 )
    goto LABEL_128;
  v41 = v39->fields.upParamList;
  if ( !v41 )
    goto LABEL_128;
  if ( v41->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v41->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v38->fields.friendKeep;
  v43 = v40->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v43 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v45 = v6->fields.__4__this;
    if ( !v45 )
      goto LABEL_128;
    v46 = v45->fields.upParamList;
    if ( !v46 )
      goto LABEL_128;
    if ( v46->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v46->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2949/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v44);
    v48 = v6->fields.__4__this;
    if ( !v48 )
      goto LABEL_128;
    v49 = v48->fields.upParamList;
    if ( !v49 )
      goto LABEL_128;
    if ( v49->max_length <= 3 )
      goto LABEL_129;
    v50 = v6->fields.oldGame;
    if ( !v50 )
      goto LABEL_128;
    v51 = v48->fields.newGame;
    if ( !v51 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v49->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v50->fields.friendKeep,
      v51->fields.friendKeep,
      v47);
    v52 = v6->fields.__4__this;
    if ( !v52 )
      goto LABEL_128;
    v53 = v52->fields.upParamList;
    if ( !v53 )
      goto LABEL_128;
    if ( v53->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v53->m_Items[3];
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
    v93.fields.y = height - (float)(v21 * baseHeight);
    v93.fields.x = 0.0;
    v93.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v93, 0LL);
    ++v21;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  v54 = v6->fields.__4__this;
  if ( !v54 )
    goto LABEL_128;
  v55 = v54->fields.upParamList;
  if ( !v55 )
    goto LABEL_128;
  if ( v55->max_length <= 4 )
    goto LABEL_129;
  v56 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v55->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v56 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v56, 0LL);
  v58 = v6->fields.__4__this;
  if ( !v58 )
    goto LABEL_128;
  v59 = v58->fields.upParamList;
  if ( !v59 )
    goto LABEL_128;
  if ( v59->max_length <= 4 )
    goto LABEL_129;
  v60 = v59->m_Items[4];
  if ( !v60 )
    goto LABEL_128;
  v61 = (System_String_o **)&StringLiteral_2951/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v61 = (System_String_o **)&StringLiteral_2950/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v60, *v61, v57);
  v62 = v6->fields.__4__this;
  if ( !v62 || (v63 = v62->fields.upParamList) == 0LL )
LABEL_128:
    sub_1B8880C(this, *(_QWORD *)&baseHeight);
  if ( v63->max_length <= 4 )
LABEL_129:
    sub_1B88814(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v63->m_Items[4];
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
  v94.fields.y = height - (float)(v21 * baseHeight);
  v94.fields.x = 0.0;
  v94.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v94, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v21 + 1);
  if ( masterLvInfoArray )
  {
    v65 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v65 <= 2 && (int)v65 >= 1 )
    {
      v88 = v21 + 1;
      v66 = 0;
      v67 = baseHeight * (_DWORD)this;
      do
      {
        v68 = v6->fields.__4__this;
        if ( !v68 )
          goto LABEL_128;
        lvUpRewardSpArray = v68->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v66 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v66];
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
        v95.fields.y = height - (float)v67;
        v95.fields.x = -30.0;
        v95.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0LL);
        v70 = v6->fields.__4__this;
        if ( !v70 )
          goto LABEL_128;
        v71 = v70->fields.lvUpRewardSpArray;
        if ( !v71 )
          goto LABEL_128;
        if ( v66 >= v71->max_length )
          goto LABEL_129;
        v72 = v6->fields.masterLvInfoArray;
        if ( !v72 )
          goto LABEL_128;
        if ( v66 >= v72->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v72->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        v73 = v71->m_Items[v66];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v73, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v75 = v6->fields.masterLvInfoArray;
        if ( !v75 )
          goto LABEL_128;
        if ( v66 >= v75->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v75->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v79 = v6->fields.__4__this;
        if ( !v79 )
          goto LABEL_128;
        lvUpRewardLabelArray = v79->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v66 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v81 = v6->fields.masterLvInfoArray;
        if ( !v81 )
          goto LABEL_128;
        if ( v66 >= v81->max_length )
          goto LABEL_129;
        v82 = v81->m_Items[v66];
        if ( !v82 )
          goto LABEL_128;
        v83 = (Il2CppObject *)nameText;
        v84 = lvUpRewardLabelArray->m_Items[v66];
        num = v82->fields.num;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v76, v77, v78);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_61721404(
                                                                     (System_String_o *)StringLiteral_25020/*"{0} {1}個"*/,
                                                                     v83,
                                                                     v85,
                                                                     0LL);
        if ( !v84 )
          goto LABEL_128;
        UILabel__set_text(v84, (System_String_o *)this, 0LL);
        v86 = v6->fields.masterLvInfoArray;
        if ( !v86 )
          goto LABEL_128;
        ++v66;
        v67 += baseHeight;
      }
      while ( (signed int)v66 < (signed int)v86->max_length );
      LODWORD(this) = v88 + v66;
    }
  }
  return (int)this;
}