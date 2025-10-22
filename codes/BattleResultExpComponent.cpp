void BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_C12BE0;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_C11C00;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C5A619 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_endClose__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C5A619 = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0);
  if ( !window )
    sub_1C3E7C0(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v4,
    window->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__CreateRewardEffect(
        BattleResultExpComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v8; // x20
  Il2CppObject *Object_object__51228128; // x21
  BattleResultExpComponent_o *v10; // x21
  BattleResultExpComponent_o *v11; // x22
  BattleResultExpComponent_o *v12; // x22
  BattleResultExpComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4C5A615 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A615 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              data,
                              effectName,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__51228128,
                                         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v10 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !targetIcon )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v12 = this;
  if ( !byte_4C506A1 )
  {
    this = (BattleResultExpComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4C506A6 )
  {
    this = (BattleResultExpComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                         (UnityEngine_GameObject_o *)v10,
                                         (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C3E7C8(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C3E7C0(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v9; // x20
  System_String_o *v10; // x20

  if ( (byte_4C5A611 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_2836/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_1C3E564(&StringLiteral_2831/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_4C5A611 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v3, v4, v5);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.knockdownRecordWindow;
    if ( !window )
      goto LABEL_33;
    ((void (__fastcall *)(BattleWindowComponent_o *, void *))window->klass[1]._1.image)(
      window,
      window->klass[1]._1.gc_desc);
  }
  window = (BattleWindowComponent_o *)this->fields.masterLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)this->fields.equipLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)this->fields.damageRecordRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2836/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0);
  if ( !window )
    goto LABEL_33;
  v9 = (System_String_o *)window;
  if ( !System_String__Equals_63671772((System_String_o *)window, (System_String_o *)StringLiteral_2836/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v9, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2831/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0);
  if ( !window )
LABEL_33:
    sub_1C3E7C0(window, v6);
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_63671772((System_String_o *)window, (System_String_o *)StringLiteral_2831/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v10, 0);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


bool BattleResultExpComponent__IsResultEquipMaxExpDisp(
        BattleResultExpComponent_o *this,
        int32_t oldLv,
        int32_t newLv,
        UserExpMaster_o *userExpMst,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t monitor_high; // w19
  int32_t monitor; // w21
  int64_t klass_low; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A62A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A62A = 1;
  }
  entity = 0;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0) )
    {
LABEL_14:
      sub_1C3E7C0(Instance, v9);
    }
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
                               &entity,
                               newLv + 1,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_14;
  monitor = (int32_t)entity[3].monitor;
  monitor_high = HIDWORD(entity[3].monitor);
  klass_low = SLODWORD(entity[4].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0);
}


void BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  void *monitor; // x8
  __int64 naturalAligment; // x11
  _QWORD *v7; // x24
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  bool IsUseOverwriteMasterImage; // w21
  __int64 v13; // x23
  __int64 v14; // x22
  System_Nullable_Vector3__o ResultOverwriteMasterImagePosition; // kr00_16
  __int64 v16; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x21
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v66[4]; // [xsp+28h] [xbp-48h] BYREF
  int v67; // [xsp+2Ch] [xbp-44h] BYREF
  int v68; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4C5A618 & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent_TypeInfo);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&StringLiteral_24884/*"x"*/);
    sub_1C3E564(&StringLiteral_5451/*"END_OPEN"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_19038/*"endMoveFigure"*/);
    sub_1C3E564(&StringLiteral_20992/*"islocal"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A618 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)naturalAligment) )
  {
    v7 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo
       ? gameObject[1].monitor
       : 0LL;
  }
  else
  {
    v7 = 0;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_72;
  v10 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v10;
  *(_QWORD *)&v70.fields.fakeValue = v9;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v70, 0);
  if ( !v7 )
    goto LABEL_72;
  v11 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0);
  v4 = (unsigned int)overwriteImageId;
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  IsUseOverwriteMasterImage = BattleData__IsUseOverwriteMasterImage((BattleData_o *)gameObject, overwriteImageId, 0);
  v13 = 0;
  v14 = 0;
  if ( IsUseOverwriteMasterImage )
  {
    gameObject = (UnityEngine_GameObject_o *)v7[8];
    if ( !gameObject )
      goto LABEL_72;
    ResultOverwriteMasterImagePosition = BattleData__GetResultOverwriteMasterImagePosition(
                                           (BattleData_o *)gameObject,
                                           0);
    v4 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v14 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.hasValue;
    v13 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
  }
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0);
  if ( overwriteImageId != -1 )
  {
    v16 = v7[8];
    if ( !v16 )
      goto LABEL_72;
    *(_QWORD *)&offset.fields.hasValue = v14;
    *(_QWORD *)&offset.fields.value.fields.y = v13;
    MasterFigureManagerOld__CreatePrefab_40718712(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v16 + 408),
      v11,
      60,
      0,
      overwriteImageId,
      offset,
      IsUseOverwriteMasterImage,
      0);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1C3E60C(object___TypeInfo, 10);
  if ( !gameObject )
LABEL_72:
    sub_1C3E7C0(gameObject, v4);
  v20 = (System_Object_array *)gameObject;
  v21 = (Il2CppObject *)StringLiteral_24884/*"x"*/;
  if ( StringLiteral_24884/*"x"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_24884/*"x"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_24884/*"x"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_73;
  v20->m_Items[0] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v22, v18, v19);
  v68 = -1018691584;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68, v23, v24, v25, v26, v27, v28);
  v31 = v21;
  if ( v21 )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_73;
  v20->m_Items[1] = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v31, v29, v30);
  v21 = (Il2CppObject *)StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_24091/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_24091/*"time"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_73;
  v20->m_Items[2] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v22, v32, v33);
  v67 = 1061997773;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67, v34, v35, v36, v37, v38, v39);
  v42 = v21;
  if ( v21 )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_73;
  v20->m_Items[3] = v42;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v42, v40, v41);
  v21 = (Il2CppObject *)StringLiteral_20992/*"islocal"*/;
  if ( StringLiteral_20992/*"islocal"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_20992/*"islocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_20992/*"islocal"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_73;
  v20->m_Items[4] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[4], (int32_t)v22, v43, v44);
  v66[0] = 1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v66, v45, v46, v47, v48, v49, v50);
  v53 = v21;
  if ( v21 )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_73;
  v20->m_Items[5] = v53;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v53, v51, v52);
  v21 = (Il2CppObject *)StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_73;
  v20->m_Items[6] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[6], (int32_t)v22, v54, v55);
  v21 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v58 = v21;
  if ( v21 )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_74:
      v64 = sub_1C3E7E4(v21);
      sub_1C3E68C(v64, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_73;
  v20->m_Items[7] = v58;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v58, v56, v57);
  v21 = (Il2CppObject *)StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_73;
  v20->m_Items[8] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[8], (int32_t)v22, v59, v60);
  v21 = (Il2CppObject *)StringLiteral_19038/*"endMoveFigure"*/;
  if ( StringLiteral_19038/*"endMoveFigure"*/ )
  {
    v21 = (Il2CppObject *)sub_1C3E6A0(StringLiteral_19038/*"endMoveFigure"*/, v20->obj.klass->_1.element_class);
    if ( v21 )
    {
      v22 = (Il2CppObject *)StringLiteral_19038/*"endMoveFigure"*/;
      goto LABEL_66;
    }
    goto LABEL_74;
  }
  v22 = 0;
LABEL_66:
  if ( LODWORD(v20->max_length) <= 9 )
LABEL_73:
    sub_1C3E7C8(v21, v22);
  v20->m_Items[9] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[9], (int32_t)v22, v61, v62);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v63 = iTween__Hash(v20, 0);
  iTween__MoveFrom_63275504(figureRoot, v63, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !gameObject )
    goto LABEL_72;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.generic_class)(
    gameObject,
    0,
    gameObject->klass[1]._1.typeMetadataHandle);
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5451/*"END_OPEN"*/, 0);
}


bool BattleResultExpComponent__SetEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getExp,
        int32_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  __int64 v11; // x29
  UILabel_o *equip_getexpLabel; // x23
  System_String_o *v13; // x25
  Il2CppObject *v14; // x26
  Il2CppObject *v15; // x0
  System_String_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
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
  int64_t v30; // [xsp+0h] [xbp-80h] BYREF
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  int v32; // [xsp+18h] [xbp-68h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-64h] BYREF

  v33 = getExp;
  if ( (byte_4C5A617 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_11130/*"RESULT_GET_EQUIP_EXP_ADD"*/);
    sub_1C3E564(&StringLiteral_9232/*"N0"*/);
    sub_1C3E564(&StringLiteral_11120/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C3E564(&StringLiteral_805/*"+ {0}"*/);
    byte_4C5A617 = 1;
  }
  v30 = 0;
  entity = 0;
  v32 = 0;
  v11 = getExp;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  if ( v11 - this->fields.defaultExp < 1 )
  {
    v18 = (Il2CppObject *)System_Int32__ToString_65146576((int32_t)&v33, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    Instance = System_String__Format((System_String_o *)StringLiteral_805/*"+ {0}"*/, v18, 0);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RESULT_GET_EQUIP_EXP_ADD"*/, 0);
    v14 = (Il2CppObject *)System_Int64__ToString_65151752(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9232/*"N0"*/,
                            0);
    v30 = v11 - this->fields.defaultExp;
    v15 = (Il2CppObject *)System_Int64__ToString_65151752((int64_t)&v30, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    Instance = System_String__Format_63677760(v13, v14, v15, 0);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(equip_getexpLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  v19 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowExp, startLevel, 0);
  LevelMax = EquipExpMaster__getLevelMax(v19, equipId, 0);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v19, equipId, Level, 0);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_32;
  v22 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !equip_atexpLabel )
      goto LABEL_32;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0);
    if ( !v22 )
      goto LABEL_32;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v32 = LODWORD(v22[1].klass) - nowExp;
    Instance = System_Int32__ToString_65146576((int32_t)&v32, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    if ( !equip_atexpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0);
  BattleResultExpComponent__setEquipLv(this, Level, v24);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v19, &entity, equipId, Level - 1, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_32:
    sub_1C3E7C0(Instance, v17);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0);
  Instance = (System_String_o *)this->fields.equip_slider;
  v27 = value;
  if ( Level == LevelMax )
  {
    v28 = 1.0;
    if ( !Instance )
      goto LABEL_32;
  }
  else
  {
    if ( !v22 || !Instance )
      goto LABEL_32;
    v28 = 1.0 - (float)((float)(LODWORD(v22[1].klass) - nowExp) / (float)(LODWORD(v22[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v28, 0);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_32;
  return v27 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0);
}


bool BattleResultExpComponent__SetMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getExp,
        int64_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  UILabel_o *mst_getexpLabel; // x23
  System_String_o *v10; // x25
  Il2CppObject *v11; // x26
  Il2CppObject *v12; // x0
  System_String_o *mst_slider; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  float value; // s8
  UserExpMaster_o *v17; // x22
  int v18; // w23
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v20; // x2
  bool v21; // w21
  int32_t Level; // w24
  UILabel_o *v23; // x26
  System_String_o *v24; // x25
  char *monitor; // x8
  float v26; // s0
  BattleResultExpComponent_o *v27; // x0
  const MethodInfo *v28; // x4
  UILabel_o *v29; // x20
  Il2CppObject *v31; // [xsp+0h] [xbp-80h] BYREF
  int64_t v32; // [xsp+8h] [xbp-78h] BYREF
  int64_t v33; // [xsp+18h] [xbp-68h] BYREF

  v33 = getExp;
  if ( (byte_4C5A616 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_11131/*"RESULT_GET_MASTER_EXP_ADD"*/);
    sub_1C3E564(&StringLiteral_9232/*"N0"*/);
    sub_1C3E564(&StringLiteral_11120/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C3E564(&StringLiteral_805/*"+ {0}"*/);
    byte_4C5A616 = 1;
  }
  v31 = 0;
  v32 = 0;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  if ( getExp - this->fields.defaultExp < 1 )
  {
    v15 = (Il2CppObject *)System_Int64__ToString_65151752((int64_t)&v33, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    mst_slider = System_String__Format((System_String_o *)StringLiteral_805/*"+ {0}"*/, v15, 0);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11131/*"RESULT_GET_MASTER_EXP_ADD"*/, 0);
    v11 = (Il2CppObject *)System_Int64__ToString_65151752(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9232/*"N0"*/,
                            0);
    v32 = getExp - this->fields.defaultExp;
    v12 = (Il2CppObject *)System_Int64__ToString_65151752((int64_t)&v32, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    mst_slider = System_String__Format_63677760(v10, v11, v12, 0);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  UILabel__set_text(mst_getexpLabel, mst_slider, 0);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_36;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_36;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !mst_slider )
    goto LABEL_36;
  v17 = (UserExpMaster_o *)mst_slider;
  mst_slider = (System_String_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)mst_slider, 0);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_36;
  v18 = (int)mst_slider;
  if ( (_DWORD)mst_slider == startLevel )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !mst_atexpLabel )
      goto LABEL_36;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_36;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0);
    v21 = 0;
    Level = startLevel;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0);
    Level = UserExpMaster__getLevel(v17, nowExp, startLevel, 0);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                      Level,
                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_36;
    v23 = this->fields.mst_atexpLabel;
    v24 = mst_slider;
    v32 = (int64_t)mst_slider[1].klass - nowExp;
    mst_slider = System_Int64__ToString_65151752((int64_t)&v32, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
    if ( !v23 )
      goto LABEL_36;
    UILabel__set_text(v23, mst_slider, 0);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                      &v31,
                                      Level - 1,
                                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_36;
      monitor = (char *)v31[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v26 = 1.0 - (double)((unsigned __int64)v24[1].klass - nowExp) / (double)((char *)v24[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v26, 0),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0) )
    {
LABEL_36:
      sub_1C3E7C0(mst_slider, v14);
    }
    v21 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v20);
  if ( Level == v18 || BattleResultExpComponent__IsResultEquipMaxExpDisp(v27, startLevel, Level, v17, v28) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( !mst_slider )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0);
    v29 = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !v29 )
      goto LABEL_36;
    UILabel__set_text(v29, mst_slider, 0);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_36;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0);
  }
  return v21;
}


void BattleResultExpComponent__SetResultData(
        BattleResultExpComponent_o *this,
        UserGameEntity_o *oldGameEntity,
        UserEquipEntity_o *oldEquipEntity,
        MasterLvRewardInfo_array *masterLvInfoArray,
        AssetData_o *resultAssetData,
        int64_t maxTurnDamage,
        int64_t oldRecord,
        QuestKnockdownResult_o *knockdownResult,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v19; // x25
  __int64 Master_object; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UserGameEntity_o **p_oldGame; // x26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_oldEquip; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *knockdownRecordWindow; // x23
  const MethodInfo *v34; // x2
  int32_t playerExp; // w8
  Il2CppObject *v36; // x0
  struct UserGameEntity_o **p_newGame; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  struct UserEquipEntity_o **p_newEquip; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  struct UserGameEntity_o *newGame; // x8
  struct UserEquipEntity_o *oldEquip; // x8
  UILabel_o *equip_nameLabel; // x27
  __int64 v48; // x28
  __int64 v49; // x29
  int32_t v50; // w0
  const MethodInfo *v51; // x5
  const MethodInfo *v52; // x2
  struct UserGameEntity_o *oldGame; // x8
  const MethodInfo *v54; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v56; // x26
  const MethodInfo *v57; // x4
  int v58; // w25
  __int64 v59; // x8
  signed __int64 v60; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length_low; // x10
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  int v64; // w8
  __int64 v65; // x24
  unsigned int v66; // w20
  struct UISprite_array *v67; // x8
  struct UISprite_array *v68; // x8
  struct UISprite_array *v69; // x8
  struct UISprite_array *v70; // x8
  const MethodInfo *v71; // x4
  struct UISprite_array *v72; // x8
  const MethodInfo *v73; // x4
  struct UISprite_array *v74; // x8
  int v75; // w8
  const MethodInfo *v76; // x2
  struct UserGameEntity_o *v77; // x8
  int64_t exp; // x10
  struct UserEquipEntity_o *v79; // x8
  struct UserEquipEntity_o *v80; // x8
  UILabel_o *equip_oldlevelLabel; // x21
  System_String_o *v82; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v85; // x1
  System_Text_StringBuilder_o *v86; // x21
  __int64 v87; // x23
  UserEquipEntity_o *v88; // x8
  __int64 v89; // x22
  __int64 v90; // x28
  System_Int32_array *SkillLvList; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x26
  int v93; // w29
  unsigned __int64 v94; // x20
  __int64 v95; // x24
  System_Int32_array *v96; // x19
  __int64 v97; // x25
  System_String_o *v98; // x27
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x5
  __int64 v103; // x6
  __int64 v104; // x7
  Il2CppObject *v105; // x28
  Il2CppObject *v106; // x0
  System_String_o *v107; // x27
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x22
  UILabel_o *equip_confLabel; // x22
  struct UserEquipEntity_o *v111; // x8
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v115; // x21
  bool v116; // w1
  UILabel_o *damage_battleLabel; // x21
  UserEquipEntity_o **v118; // [xsp+0h] [xbp-A0h]
  BattleResultExpComponent_o *v119; // [xsp+8h] [xbp-98h]
  __int64 v120; // [xsp+10h] [xbp-90h]
  int32_t *m_Items; // [xsp+18h] [xbp-88h]
  int32_t v122; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *v123; // [xsp+30h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5A614 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C3E564(&System_Func_float__int__int__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__);
    sub_1C3E564(&BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C3E564(&StringLiteral_17282/*"bit_reward_shine01"*/);
    sub_1C3E564(&StringLiteral_11119/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_1C3E564(&StringLiteral_11118/*"RESULT_EQEXP_GETSKILL"*/);
    sub_1C3E564(&StringLiteral_17283/*"bit_reward_shine02"*/);
    sub_1C3E564(&StringLiteral_396/*"#,#"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A614 = 1;
  }
  v123 = 0;
  entity = 0;
  v19 = sub_1C3E7B0(BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_147;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = masterLvInfoArray;
  v24 = (__int64 *)(v19 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 24), (int32_t)masterLvInfoArray, v25, v26);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = oldGameEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldGame, (int32_t)oldGameEntity, v28, v29);
  p_oldEquip = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.oldEquip;
  this->fields.oldEquip = oldEquipEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldEquip, (int32_t)oldEquipEntity, v31, v32);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    Master_object = (__int64)this->fields.knockdownRecordWindow;
    if ( !Master_object )
      goto LABEL_147;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Master_object, knockdownResult, v34);
  }
  this->fields.updateFlg = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_147;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0);
  playerExp = (int)entity;
  if ( entity )
    playerExp = entity->fields.playerExp;
  this->fields.defaultExp = playerExp;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v36 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v36;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.newGame, (int32_t)v36, v38, v39);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !*p_oldEquip )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v40 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          *(_QWORD *)&(*p_oldEquip)[1].fields.currentCryptoKey,
          (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.newEquip, (int32_t)v40, v42, v43);
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_147;
  if ( !*p_oldGame )
    goto LABEL_147;
  Master_object = BattleResultExpComponent__SetMasterExp(
                    this,
                    newGame->fields.exp - (*p_oldGame)->fields.exp,
                    (*p_oldGame)->fields.exp,
                    (*p_oldGame)->fields.lv,
                    v44);
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_147;
  equip_nameLabel = this->fields.equip_nameLabel;
  v49 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v125.fields.currentCryptoKey = v49;
  *(_QWORD *)&v125.fields.fakeValue = v48;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v125, 0);
  Master_object = (__int64)EquipMaster__getEquipName(v50, 0);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Master_object, 0), !*p_oldEquip)
    || (Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*p_oldEquip)[2], 0),
        !*p_newEquip)
    || !*p_oldEquip
    || (Master_object = BattleResultExpComponent__SetEquipExp(
                          this,
                          Master_object,
                          (*p_newEquip)->fields.exp - (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.currentCryptoKey,
                          v51),
        (oldGame = this->fields.oldGame) == 0)
    || (BattleResultExpComponent__setMasterLv(this, oldGame->fields.lv, v52),
        (upParamList = this->fields.upParamList) == 0) )
  {
LABEL_147:
    sub_1C3E7C0(Master_object, v21);
  }
  if ( !LODWORD(upParamList->max_length) )
    goto LABEL_148;
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  Master_object = (__int64)upParamList->m_Items[0];
  v118 = &this->fields.newEquip;
  if ( !Master_object )
    goto LABEL_147;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Master_object,
    (*p_oldGame)->fields.lv,
    (*p_newGame)->fields.lv,
    v54);
  v56 = sub_1C3E7B0(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v56,
    (Il2CppObject *)v19,
    Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__,
    0);
  if ( !v56 )
    goto LABEL_147;
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v56 + 24))(
                    *(_QWORD *)(v56 + 64),
                    35,
                    *(_QWORD *)(v56 + 40),
                    -186.0);
  v58 = Master_object;
  if ( (int)Master_object < 6 )
  {
    v59 = *v24;
    if ( *v24 )
    {
      v60 = 0;
      while ( v60 < *(int *)(v59 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_147;
        max_length_low = LODWORD(lvUpRewardSpArray->max_length);
        if ( v60 < (int)max_length_low )
        {
          if ( v60 >= max_length_low )
            goto LABEL_148;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v60],
            (System_String_o *)StringLiteral_17282/*"bit_reward_shine01"*/,
            v57);
          v59 = *v24;
        }
        ++v60;
        if ( !v59 )
          goto LABEL_147;
      }
    }
    v75 = 35;
    goto LABEL_75;
  }
  v63 = this->fields.upParamList;
  if ( !v63 )
    goto LABEL_147;
  if ( !LODWORD(v63->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v63->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Master_object )
    goto LABEL_147;
  v64 = *(_DWORD *)(Master_object + 24);
  v65 = Master_object;
  if ( v64 >= 1 )
  {
    v66 = 0;
    while ( v66 < v64 )
    {
      Master_object = *(_QWORD *)(v65 + 8LL * (int)v66 + 32);
      if ( !Master_object )
        goto LABEL_147;
      UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)(Master_object + 424) - 2, 0);
      v64 = *(_DWORD *)(v65 + 24);
      if ( (int)++v66 >= v64 )
        goto LABEL_57;
    }
    goto LABEL_148;
  }
LABEL_57:
  v67 = this->fields.lvUpRewardSpArray;
  if ( !v67 )
    goto LABEL_147;
  if ( !LODWORD(v67->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v67->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v68 = this->fields.lvUpRewardSpArray;
  if ( !v68 )
    goto LABEL_147;
  if ( !LODWORD(v68->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v68->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  v69 = this->fields.lvUpRewardSpArray;
  if ( !v69 )
    goto LABEL_147;
  if ( LODWORD(v69->max_length) <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v69->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v70 = this->fields.lvUpRewardSpArray;
  if ( !v70 )
    goto LABEL_147;
  if ( LODWORD(v70->max_length) <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v70->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v56 + 24))(
                    *(_QWORD *)(v56 + 64),
                    31,
                    *(_QWORD *)(v56 + 40),
                    -186.0);
  v72 = this->fields.lvUpRewardSpArray;
  if ( !v72 )
    goto LABEL_147;
  if ( !LODWORD(v72->max_length) )
    goto LABEL_148;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v72->m_Items[0],
    (System_String_o *)StringLiteral_17283/*"bit_reward_shine02"*/,
    v71);
  v74 = this->fields.lvUpRewardSpArray;
  if ( !v74 )
    goto LABEL_147;
  if ( LODWORD(v74->max_length) <= 1 )
LABEL_148:
    sub_1C3E7C8(Master_object, v21);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v74->m_Items[1],
    (System_String_o *)StringLiteral_17283/*"bit_reward_shine02"*/,
    v73);
  v75 = 31;
LABEL_75:
  Master_object = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, v75 * v58 + 134, 0);
  v77 = this->fields.oldGame;
  if ( !v77 )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  exp = v77->fields.exp;
  v79 = this->fields.oldEquip;
  this->fields.updateFlg |= exp != (*p_newGame)->fields.exp;
  if ( !v79 )
    goto LABEL_147;
  BattleResultExpComponent__setEquipLv(this, v79->fields.lv, v76);
  v80 = this->fields.oldEquip;
  if ( !v80 )
    goto LABEL_147;
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)v80 + 48, 0);
  if ( !equip_oldlevelLabel )
    goto LABEL_147;
  v82 = (System_String_o *)(Master_object ? Master_object : StringLiteral_1/*""*/);
  UILabel__set_text(equip_oldlevelLabel, v82, 0);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_147;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)newEquip + 48, 0);
  if ( !equip_newlevelLabel )
    goto LABEL_147;
  v85 = (System_String_o *)(Master_object ? Master_object : StringLiteral_1/*""*/);
  UILabel__set_text(equip_newlevelLabel, v85, 0);
  v86 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v86, 0);
  Master_object = (__int64)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  Master_object = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)Master_object, 0);
  if ( !*v118 )
    goto LABEL_147;
  v87 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillIdList(*v118, 0);
  v88 = (UserEquipEntity_o *)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  v89 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillLvList(v88, 0);
  if ( !*v118 )
    goto LABEL_147;
  v90 = Master_object;
  SkillLvList = UserEquipEntity__getSkillLvList(*v118, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v87 )
    goto LABEL_147;
  if ( *(int *)(v87 + 24) >= 1 )
  {
    v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v93 = 0;
    v94 = 0;
    v120 = v90 + 32;
    m_Items = SkillLvList->m_Items;
    v95 = v89 + 32;
    v119 = this;
    while ( 1 )
    {
      v123 = 0;
      if ( !v89 )
        goto LABEL_147;
      if ( v94 >= *(unsigned int *)(v89 + 24) )
        goto LABEL_148;
      if ( !v92 )
        goto LABEL_147;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v92,
                        &v123,
                        *(_DWORD *)(v95 + 4 * v94),
                        (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v123 && (Master_object & 1) != 0 )
      {
        if ( v94 >= *(unsigned int *)(v87 + 24) || v94 >= *(unsigned int *)(v89 + 24) )
          goto LABEL_148;
        if ( *(_DWORD *)(v87 + 32 + 4 * v94) != *(_DWORD *)(v95 + 4 * v94) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11118/*"RESULT_EQEXP_GETSKILL"*/, 0);
          if ( !v123 )
            goto LABEL_147;
          v107 = (System_String_o *)Master_object;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v123, 0);
          Master_object = (__int64)System_String__Format(v107, Name, 0);
          if ( !v86 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_63722756(
                                     v86,
                                     (System_String_o *)Master_object,
                                     0);
LABEL_121:
          v93 += 3;
          goto LABEL_122;
        }
        if ( !v90 )
          goto LABEL_147;
        if ( v94 >= *(unsigned int *)(v90 + 24) )
          goto LABEL_148;
        if ( !SkillLvList )
          goto LABEL_147;
        if ( v94 >= LODWORD(SkillLvList->max_length) )
          goto LABEL_148;
        if ( *(_DWORD *)(v120 + 4 * v94) != m_Items[v94] )
        {
          v96 = SkillLvList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v97 = v90;
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RESULT_EQEXP_UPSKILLLV"*/, 0);
          if ( !v123 )
            goto LABEL_147;
          v98 = (System_String_o *)Master_object;
          Master_object = (__int64)SkillEntity__getName((SkillEntity_o *)v123, 0);
          if ( v94 >= LODWORD(v96->max_length) )
            goto LABEL_148;
          v105 = (Il2CppObject *)Master_object;
          v122 = m_Items[v94];
          v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v99, v100, v101, v102, v103, v104);
          Master_object = (__int64)System_String__Format_63677760(v98, v105, v106, 0);
          if ( !v86 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_63722756(
                                     v86,
                                     (System_String_o *)Master_object,
                                     0);
          v90 = v97;
          SkillLvList = v96;
          this = v119;
          goto LABEL_121;
        }
      }
LABEL_122:
      if ( (__int64)++v94 >= *(int *)(v87 + 24) )
        goto LABEL_125;
    }
  }
  v93 = 0;
LABEL_125:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_147;
  LODWORD(v126.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0);
  v126.fields.y = (float)v93 * 10.0;
  v126.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v126, 0);
  Master_object = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, 22 * v93 + 134, 0);
  if ( !v86 )
    goto LABEL_147;
  equip_confLabel = this->fields.equip_confLabel;
  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v86->klass->vtable._3_ToString.methodPtr)(
                    v86,
                    v86->klass->vtable._3_ToString.method);
  if ( !equip_confLabel )
    goto LABEL_147;
  UILabel__set_text(equip_confLabel, (System_String_o *)Master_object, 0);
  v111 = this->fields.oldEquip;
  if ( !v111 || !*v118 )
    goto LABEL_147;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v111->fields.exp != (*v118)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Master_object = (__int64)System_Int64__ToString_65151752(
                               (int64_t)&this->fields.oldRecordDamage,
                               (System_String_o *)StringLiteral_396/*"#,#"*/,
                               0);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
      damage_battleLabel = this->fields.damage_battleLabel;
      Master_object = (__int64)System_Int64__ToString_65151752(
                                 (int64_t)&this->fields.bestTurnDamage,
                                 (System_String_o *)StringLiteral_396/*"#,#"*/,
                                 0);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Master_object, 0);
        Master_object = (__int64)this->fields.damage_recordLabel;
        if ( Master_object )
        {
          UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_intactColor, 0);
          Master_object = (__int64)this->fields.damage_battleLabel;
          if ( Master_object )
          {
            UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_intactColor, 0);
            Master_object = (__int64)this->fields.damage_recordRenewalSp;
            if ( Master_object )
            {
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              if ( Master_object )
              {
                v116 = 0;
                goto LABEL_146;
              }
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  Master_object = (__int64)System_Int64__ToString_65151752(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0);
  if ( !damage_recordLabel )
    goto LABEL_147;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
  v115 = this->fields.damage_battleLabel;
  Master_object = (__int64)System_Int64__ToString_65151752(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0);
  if ( !v115 )
    goto LABEL_147;
  UILabel__set_text(v115, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.damage_recordLabel;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_renewalColor, 0);
  Master_object = (__int64)this->fields.damage_battleLabel;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_renewalColor, 0);
  Master_object = (__int64)this->fields.damage_recordRenewalSp;
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_147;
  v116 = 1;
LABEL_146:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v116, 0);
}


void BattleResultExpComponent__UpdateValue(BattleResultExpComponent_o *this, float val, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleResultExpComponent__updateValueActual(this, val, 0, v3);
}


void BattleResultExpComponent__activeTouch(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1C3E7C0(0, method);
  BattleResultComponent__setTouch(parentComp, 1, 0);
}


void BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C5A625 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_checkDamageRecord__);
    sub_1C3E564(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_17267/*"bit_result_levelup01"*/);
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A625 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
      return;
    }
    goto LABEL_31;
  }
  myFsm = (PlayMakerFSM_o *)this->fields.damageRecordRoot;
  if ( !myFsm )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v6 = myFsm;
        v7 = *(unsigned __int16 *)&myFsm->klass->_2.rank;
        if ( *(_WORD *)&myFsm->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v7;
            p_offset += 2;
            if ( !v7 )
              goto LABEL_14;
          }
          v9 = (__int64)(&klass->vtable._4_OnBeforeSerialize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v9 = sub_1C8ED7C(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v9)(v6, *(_QWORD *)(v9 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_66582224((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/, 0);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1C3E7C0(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_71086848(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
            0);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))damageRecordWindow->klass->vtable._10_Open.methodPtr)(
    damageRecordWindow,
    v12,
    damageRecordWindow->klass->vtable._10_Open.method);
  v13 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C3E57C(Method_BattleResultExpComponent_checkDamageRecord__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C3E548(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
}


void BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4C5A622 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_checkEquipLevelUp__);
    sub_1C3E564(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_17267/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A622 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
      return;
    }
    goto LABEL_33;
  }
  this = (BattleResultExpComponent_o *)v2->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0, 0) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                             0);
      if ( this )
      {
        klass = this->klass;
        v7 = this;
        v8 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v8;
            p_offset += 4;
            if ( !v8 )
              goto LABEL_16;
          }
          v10 = (__int64)&klass[1] + 16 * *p_offset;
        }
        else
        {
LABEL_16:
          v10 = sub_1C8ED7C(this, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_66582224((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/, 0);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1C3E7C0(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0, 0) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                             0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_71086848(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
            0);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))equipupwindow->klass->vtable._10_Open.methodPtr)(
    equipupwindow,
    v13,
    equipupwindow->klass->vtable._10_Open.method);
  v14 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C3E57C(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 6, 0, 0);
}


void BattleResultExpComponent__checkMasterLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C5A61E & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_checkMasterLevelUp__);
    sub_1C3E564(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_17267/*"bit_result_levelup01"*/);
    sub_1C3E564(&StringLiteral_9264/*"NEXT"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A61E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63384372(gameObject, 0);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v4);
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0);
      return;
    }
    goto LABEL_42;
  }
  MeterSePlayer = (SePlayer_o *)this->fields.masterLevelupRoot;
  if ( !MeterSePlayer )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MeterSePlayer, 1, 0);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0, 0) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                      0);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v11 = MeterSePlayer;
        v12 = *(unsigned __int16 *)&MeterSePlayer->klass->_2.rank;
        if ( *(_WORD *)&MeterSePlayer->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v12;
            p_offset += 2;
            if ( !v12 )
              goto LABEL_20;
          }
          v14 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
        }
        else
        {
LABEL_20:
          v14 = sub_1C8ED7C(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_66582224((SimpleAnimation_o *)MeterSePlayer, (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/, 0);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1C3E7C0(MeterSePlayer, v5);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0, 0) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
                                    0);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_71086848(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17267/*"bit_result_levelup01"*/,
      0);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v17 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v17, (Il2CppObject *)this, Method_BattleResultExpComponent_endOpenMasterUp__, 0);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._10_Open.methodPtr)(
    masterupwindow,
    v17,
    masterupwindow->klass->vtable._10_Open.method);
  v18 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C3E57C(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C3E548(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
  v20 = this->fields.oldGame;
  if ( !v20 )
    goto LABEL_42;
  v21 = this->fields.newGame;
  if ( !v21 )
    goto LABEL_42;
  v22 = v20->fields.lv + 1;
  while ( v22 <= v21->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v22, -1, 0, 0);
      v21 = this->fields.newGame;
      ++v22;
      if ( v21 )
        continue;
    }
    goto LABEL_42;
  }
}


void BattleResultExpComponent__checkOpenKnockdownRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A628 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A628 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.knockdownRecordWindow;
    if ( !myFsm )
      goto LABEL_11;
    if ( LOBYTE(myFsm[2].monitor) )
    {
      ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, Il2CppClass *))myFsm->klass[1]._1.element_class)(
        myFsm,
        0,
        myFsm->klass[1]._1.castClass);
      return;
    }
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_11:
    sub_1C3E7C0(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4C5A626 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C5A626 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0),
        damageRecordWindow = this->fields.damageRecordWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0),
        !damageRecordWindow) )
  {
    sub_1C3E7C0(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))damageRecordWindow->klass->vtable._12_Close.methodPtr)(
    damageRecordWindow,
    v5,
    damageRecordWindow->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4C5A623 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_endCloseEquipUp__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C5A623 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0),
        equipupwindow = this->fields.equipupwindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0),
        !equipupwindow) )
  {
    sub_1C3E7C0(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))equipupwindow->klass->vtable._12_Close.methodPtr)(
    equipupwindow,
    v5,
    equipupwindow->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__closeKnockdownRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4C5A629 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A629 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, const MethodInfo *))v5->klass->vtable._12_Close.methodPtr)(
      v5,
      0,
      v5->klass->vtable._12_Close.method);
  }
}


void BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v4; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4C5A620 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4C5A620 = 1;
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        break;
      effectUIList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)effectUIList,
                                                                    0);
      if ( !effectUIList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
      effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
      if ( !effectUIList )
        break;
      if ( ++v4 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1C3E7C0(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0);
  masterupwindow = this->fields.masterupwindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultExpComponent_endCloseMasterUp__, 0);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._12_Close.methodPtr)(
    masterupwindow,
    v6,
    masterupwindow->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5A61A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C5A61A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4C5A627 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C5A627 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4C5A624 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C5A624 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4C5A621 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C5A621 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x22
  System_Collections_Hashtable_o *v50; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v59; // [xsp+18h] [xbp-38h] BYREF
  int v60; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C5A61B & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultExpComponent_endMoveFigure__);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&SeManager_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_15210/*"UpdateValue"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_19470/*"finishUpdateValue"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A61B = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C3E60C(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C3E7C0(0, v5);
    v8 = v4;
    v9 = StringLiteral_19710/*"from"*/;
    if ( StringLiteral_19710/*"from"*/ )
    {
      v9 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v9 )
        goto LABEL_59;
      v10 = StringLiteral_19710/*"from"*/;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_58;
    *(_QWORD *)(v8 + 32) = v10;
    sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), v10, v6, v7);
    v60 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v60, v11, v12, v13, v14, v15, v16);
    v19 = v9;
    if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) <= 1u )
        goto LABEL_58;
      *(_QWORD *)(v8 + 40) = v19;
      sub_1C3E508((CGThumbnailListItem_o *)(v8 + 40), v19, v17, v18);
      v9 = StringLiteral_24130/*"to"*/;
      if ( StringLiteral_24130/*"to"*/ )
      {
        v9 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v9 )
          goto LABEL_59;
        v10 = StringLiteral_24130/*"to"*/;
      }
      else
      {
        v10 = 0;
      }
      if ( *(_DWORD *)(v8 + 24) <= 2u )
        goto LABEL_58;
      *(_QWORD *)(v8 + 48) = v10;
      sub_1C3E508((CGThumbnailListItem_o *)(v8 + 48), v10, v20, v21);
      v59 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v59, v22, v23, v24, v25, v26, v27);
      v30 = v9;
      if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v8 + 24) <= 3u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 56) = v30;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 56), v30, v28, v29);
        v9 = StringLiteral_22456/*"onupdate"*/;
        if ( StringLiteral_22456/*"onupdate"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22456/*"onupdate"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 4u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 64) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 64), v10, v31, v32);
        v9 = StringLiteral_15210/*"UpdateValue"*/;
        if ( StringLiteral_15210/*"UpdateValue"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_15210/*"UpdateValue"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_15210/*"UpdateValue"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 5u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 72) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 72), v10, v33, v34);
        v9 = StringLiteral_22448/*"oncomplete"*/;
        if ( StringLiteral_22448/*"oncomplete"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22448/*"oncomplete"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 6u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 80) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 80), v10, v35, v36);
        v9 = StringLiteral_19470/*"finishUpdateValue"*/;
        if ( StringLiteral_19470/*"finishUpdateValue"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_19470/*"finishUpdateValue"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_19470/*"finishUpdateValue"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 7u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 88) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 88), v10, v37, v38);
        v9 = StringLiteral_24091/*"time"*/;
        if ( StringLiteral_24091/*"time"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_24091/*"time"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 8u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 96) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 96), v10, v39, v40);
        time_exptotal = this->fields.time_exptotal;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v41, v42, v43, v44, v45, v46);
        v49 = v9;
        if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v8 + 24) > 9u )
          {
            *(_QWORD *)(v8 + 104) = v49;
            sub_1C3E508((CGThumbnailListItem_o *)(v8 + 104), v49, v47, v48);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v50 = iTween__Hash((System_Object_array *)v8, 0);
            iTween__ValueTo(gameObject, v50, 0);
            if ( this->fields.updateFlg )
            {
              v51 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v51 = (_QWORD *)sub_1C3E57C(Method_BattleResultExpComponent_endMoveFigure__);
              v52 = (System_Reflection_MethodBase_o *)sub_1C3E548(v51, v51[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0);
              v54 = OverwriteAssetSoundName__PlaySe(v52, CommonSeName, 0, 0);
              this->fields.MeterSePlayer = v54;
              sub_1C3E508((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v54, v55, v56);
            }
            return;
          }
LABEL_58:
          sub_1C3E7C8(v9, v10);
        }
      }
    }
LABEL_59:
    v57 = sub_1C3E7E4(v9);
    sub_1C3E68C(v57, 0);
  }
}


void BattleResultExpComponent__endOpenDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1C3E7C0(0, method);
  BattleResultComponent__setTouch(parentComp, 1, 0);
}


void BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1C3E7C0(0, method);
  BattleResultComponent__setTouch(parentComp, 1, 0);
}


void BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A61F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15379/*"WAIT_OPEN"*/);
    byte_4C5A61F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15379/*"WAIT_OPEN"*/, 0);
}


void BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A61C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9264/*"NEXT"*/);
    byte_4C5A61C = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0);
}


void BattleResultExpComponent__setEquipLv(BattleResultExpComponent_o *this, int32_t level, const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5A613 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2830/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    byte_4C5A613 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63671772(v5, (System_String_o *)StringLiteral_2830/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25121/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11, v12, v13, v14);
    v17 = v7;
  }
  v5 = System_String__Format(v17, v16, 0);
  if ( !equip_Lv )
LABEL_11:
    sub_1C3E7C0(v5, v6);
  UILabel__set_text(equip_Lv, v5, 0);
}


void BattleResultExpComponent__setMasterLv(BattleResultExpComponent_o *this, int32_t level, const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5A612 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    sub_1C3E564(&StringLiteral_2835/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_4C5A612 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63671772(v5, (System_String_o *)StringLiteral_2835/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25121/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11, v12, v13, v14);
    v17 = v7;
  }
  v5 = System_String__Format(v17, v16, 0);
  if ( !mst_Lv )
LABEL_11:
    sub_1C3E7C0(v5, v6);
  UILabel__set_text(mst_Lv, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultExpComponent__updateValueActual(
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
  if ( (byte_4C5A61D & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5A61D = 1;
  }
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_21;
  newGame = v6->fields.newGame;
  if ( !newGame )
    goto LABEL_21;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v9, 0);
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
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__SetMasterExp(
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
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_46454028(v16, 0);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v24, 0);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0 )
LABEL_21:
    sub_1C3E7C0(this, isFinish);
  BattleResultExpComponent__SetEquipExp(v6, (int32_t)this, v22->fields.exp - v23->fields.exp, v18, v23->fields.lv, v21);
}


void BattleResultExpComponent___c__DisplayClass62_0___ctor(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleResultExpComponent___c__DisplayClass62_0___SetResultData_b__0(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        float height,
        int32_t baseHeight,
        const MethodInfo *method)
{
  BattleResultExpComponent___c__DisplayClass62_0_o *v6; // x20
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *oldGame; // x8
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
  struct BattleResultExpComponent_o *v22; // x10
  struct UserGameEntity_o *v23; // x8
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
  struct BattleResultExpComponent_o *v38; // x10
  struct UserGameEntity_o *v39; // x8
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
  il2cpp_array_size_t max_length; // x8
  unsigned int v66; // w24
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
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  struct BattleResultExpComponent_o *v82; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v84; // x9
  MasterLvRewardInfo_o *v85; // x9
  Il2CppObject *v86; // x23
  UILabel_o *v87; // x22
  Il2CppObject *v88; // x0
  struct MasterLvRewardInfo_array *v89; // x8
  int v91; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C5A62B & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_2833/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_1C3E564(&StringLiteral_2832/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_1C3E564(&StringLiteral_2828/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_1C3E564(&StringLiteral_2834/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_1C3E564(&StringLiteral_2829/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)sub_1C3E564(&StringLiteral_25156/*"{0} {1}個"*/);
    byte_4C5A62B = 1;
  }
  countText = 0;
  nameText = 0;
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_128;
  oldGame = _4__this->fields.oldGame;
  if ( !oldGame )
    goto LABEL_128;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_128;
  upParamList = _4__this->fields.upParamList;
  if ( !upParamList )
    goto LABEL_128;
  if ( LODWORD(upParamList->max_length) <= 1 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)upParamList->m_Items[1];
  if ( !this )
    goto LABEL_128;
  actMax = oldGame->fields.actMax;
  v12 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v12 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v21 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v14 = v6->fields.__4__this;
    if ( !v14 )
      goto LABEL_128;
    v15 = v14->fields.upParamList;
    if ( !v15 )
      goto LABEL_128;
    if ( LODWORD(v15->max_length) <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v15->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2828/*"BATTLE_RESULTEXP_APMAX"*/,
      v13);
    v17 = v6->fields.__4__this;
    if ( !v17 )
      goto LABEL_128;
    v18 = v17->fields.upParamList;
    if ( !v18 )
      goto LABEL_128;
    if ( LODWORD(v18->max_length) <= 1 )
      goto LABEL_129;
    v19 = v17->fields.oldGame;
    if ( !v19 )
      goto LABEL_128;
    v20 = v17->fields.newGame;
    if ( !v20 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v18->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v19->fields.actMax,
      v20->fields.actMax,
      v16);
    v21 = 1;
  }
  v22 = v6->fields.__4__this;
  if ( !v22 )
    goto LABEL_128;
  v23 = v22->fields.oldGame;
  if ( !v23 )
    goto LABEL_128;
  v24 = v22->fields.newGame;
  if ( !v24 )
    goto LABEL_128;
  v25 = v22->fields.upParamList;
  if ( !v25 )
    goto LABEL_128;
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v25->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v23->fields.costMax;
  v27 = v24->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v27 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v29 = v6->fields.__4__this;
    if ( !v29 )
      goto LABEL_128;
    v30 = v29->fields.upParamList;
    if ( !v30 )
      goto LABEL_128;
    if ( LODWORD(v30->max_length) <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v30->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2829/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v28);
    v32 = v6->fields.__4__this;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.upParamList;
    if ( !v33 )
      goto LABEL_128;
    if ( LODWORD(v33->max_length) <= 2 )
      goto LABEL_129;
    v34 = v32->fields.oldGame;
    if ( !v34 )
      goto LABEL_128;
    v35 = v32->fields.newGame;
    if ( !v35 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v33->m_Items[2];
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
    if ( LODWORD(v37->max_length) <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v37->m_Items[2];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_128;
    v95.fields.y = height - (float)(v21 * baseHeight);
    v95.fields.x = 0.0;
    v95.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0);
    ++v21;
  }
  v38 = v6->fields.__4__this;
  if ( !v38 )
    goto LABEL_128;
  v39 = v38->fields.oldGame;
  if ( !v39 )
    goto LABEL_128;
  v40 = v38->fields.newGame;
  if ( !v40 )
    goto LABEL_128;
  v41 = v38->fields.upParamList;
  if ( !v41 )
    goto LABEL_128;
  if ( LODWORD(v41->max_length) <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v41->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v39->fields.friendKeep;
  v43 = v40->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v43 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v45 = v6->fields.__4__this;
    if ( !v45 )
      goto LABEL_128;
    v46 = v45->fields.upParamList;
    if ( !v46 )
      goto LABEL_128;
    if ( LODWORD(v46->max_length) <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v46->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2832/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v44);
    v48 = v6->fields.__4__this;
    if ( !v48 )
      goto LABEL_128;
    v49 = v48->fields.upParamList;
    if ( !v49 )
      goto LABEL_128;
    if ( LODWORD(v49->max_length) <= 3 )
      goto LABEL_129;
    v50 = v48->fields.oldGame;
    if ( !v50 )
      goto LABEL_128;
    v51 = v48->fields.newGame;
    if ( !v51 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v49->m_Items[3];
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
    if ( LODWORD(v53->max_length) <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v53->m_Items[3];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_128;
    v96.fields.y = height - (float)(v21 * baseHeight);
    v96.fields.x = 0.0;
    v96.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v96, 0);
    ++v21;
  }
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  v54 = v6->fields.__4__this;
  if ( !v54 )
    goto LABEL_128;
  v55 = v54->fields.upParamList;
  if ( !v55 )
    goto LABEL_128;
  if ( LODWORD(v55->max_length) <= 4 )
    goto LABEL_129;
  v56 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v55->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !v56 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)EventMaster__IsBPEnable(v56, 0);
  v58 = v6->fields.__4__this;
  if ( !v58 )
    goto LABEL_128;
  v59 = v58->fields.upParamList;
  if ( !v59 )
    goto LABEL_128;
  if ( LODWORD(v59->max_length) <= 4 )
    goto LABEL_129;
  v60 = v59->m_Items[4];
  if ( !v60 )
    goto LABEL_128;
  v61 = (System_String_o **)&StringLiteral_2834/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v61 = (System_String_o **)&StringLiteral_2833/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v60, *v61, v57);
  v62 = v6->fields.__4__this;
  if ( !v62 || (v63 = v62->fields.upParamList) == 0 )
LABEL_128:
    sub_1C3E7C0(this, *(_QWORD *)&baseHeight);
  if ( LODWORD(v63->max_length) <= 4 )
LABEL_129:
    sub_1C3E7C8(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v63->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  v97.fields.y = height - (float)(v21 * baseHeight);
  v97.fields.x = 0.0;
  v97.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)(unsigned int)(v21 + 1);
  if ( masterLvInfoArray )
  {
    max_length = masterLvInfoArray->max_length;
    if ( (int)max_length <= 2 && (int)max_length >= 1 )
    {
      v91 = v21 + 1;
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
        if ( v66 >= LODWORD(lvUpRewardSpArray->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)lvUpRewardSpArray->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Transform__get_parent(
                                                                     (UnityEngine_Transform_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        v98.fields.y = height - (float)v67;
        v98.fields.x = -30.0;
        v98.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v98, 0);
        v70 = v6->fields.__4__this;
        if ( !v70 )
          goto LABEL_128;
        v71 = v70->fields.lvUpRewardSpArray;
        if ( !v71 )
          goto LABEL_128;
        if ( v66 >= LODWORD(v71->max_length) )
          goto LABEL_129;
        v72 = v6->fields.masterLvInfoArray;
        if ( !v72 )
          goto LABEL_128;
        if ( v66 >= LODWORD(v72->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v72->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        v73 = v71->m_Items[v66];
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)AtlasManager__SetItem(v73, IconImageId, 0);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v75 = v6->fields.masterLvInfoArray;
        if ( !v75 )
          goto LABEL_128;
        if ( v66 >= LODWORD(v75->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v75->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0);
        v82 = v6->fields.__4__this;
        if ( !v82 )
          goto LABEL_128;
        lvUpRewardLabelArray = v82->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v66 >= LODWORD(lvUpRewardLabelArray->max_length) )
          goto LABEL_129;
        v84 = v6->fields.masterLvInfoArray;
        if ( !v84 )
          goto LABEL_128;
        if ( v66 >= LODWORD(v84->max_length) )
          goto LABEL_129;
        v85 = v84->m_Items[v66];
        if ( !v85 )
          goto LABEL_128;
        v86 = (Il2CppObject *)nameText;
        v87 = lvUpRewardLabelArray->m_Items[v66];
        num = v85->fields.num;
        v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v76, v77, v78, v79, v80, v81);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)System_String__Format_63677760(
                                                                     (System_String_o *)StringLiteral_25156/*"{0} {1}個"*/,
                                                                     v86,
                                                                     v88,
                                                                     0);
        if ( !v87 )
          goto LABEL_128;
        UILabel__set_text(v87, (System_String_o *)this, 0);
        v89 = v6->fields.masterLvInfoArray;
        if ( !v89 )
          goto LABEL_128;
        ++v66;
        v67 += baseHeight;
      }
      while ( (signed int)v66 < SLODWORD(v89->max_length) );
      LODWORD(this) = v91 + v66;
    }
  }
  return (int)this;
}