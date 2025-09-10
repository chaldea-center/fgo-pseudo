void BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_C0A210;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_C09250;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2AAF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_endClose__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AAF0 = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0);
  if ( !window )
    sub_1C2D6EC(v5, v6);
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
  Il2CppObject *Object_object__51051712; // x21
  BattleResultExpComponent_o *v10; // x21
  BattleResultExpComponent_o *v11; // x22
  BattleResultExpComponent_o *v12; // x22
  BattleResultExpComponent_o *v13; // x22
  __int64 v14; // x2
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v16; // x21
  unsigned int v17; // w22

  v8 = this;
  if ( (byte_4C2AAEC & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AAEC = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              data,
                              effectName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__51051712,
                                         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4C20DA1 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4C20DA6 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                         (UnityEngine_GameObject_o *)v10,
                                         (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v16 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= m_CancellationTokenSource )
        sub_1C2D6F4(this, data, v14);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v16->fields.parentComp + (int)v17);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( (int)++v17 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C2D6EC(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
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

  if ( (byte_4C2AAE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_2833/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_1C2D490(&StringLiteral_2828/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_4C2AAE8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v3, v4, v5);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2833/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0);
  if ( !window )
    goto LABEL_33;
  v9 = (System_String_o *)window;
  if ( !System_String__Equals_63493168((System_String_o *)window, (System_String_o *)StringLiteral_2833/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v9, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2828/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0);
  if ( !window )
LABEL_33:
    sub_1C2D6EC(window, v6);
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_63493168((System_String_o *)window, (System_String_o *)StringLiteral_2828/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0) )
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

  if ( (byte_4C2AB01 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AB01 = 1;
  }
  entity = 0;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0) )
    {
LABEL_14:
      sub_1C2D6EC(Instance, v9);
    }
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
                               &entity,
                               newLv + 1,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x21
  UnityEngine_GameObject_o *v21; // x0
  Il2CppObject *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  System_Collections_Hashtable_o *v45; // x0
  __int64 v46; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v48[4]; // [xsp+28h] [xbp-48h] BYREF
  int v49; // [xsp+2Ch] [xbp-44h] BYREF
  int v50; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C2AAEF & 1) == 0 )
  {
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_5442/*"END_OPEN"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_19008/*"endMoveFigure"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AAEF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  *(_QWORD *)&v52.fields.currentCryptoKey = v10;
  *(_QWORD *)&v52.fields.fakeValue = v9;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
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
    MasterFigureManagerOld__CreatePrefab_40450840(
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
  gameObject = (UnityEngine_GameObject_o *)sub_1C2D538(object___TypeInfo, 10);
  if ( !gameObject )
LABEL_72:
    sub_1C2D6EC(gameObject, v4);
  v20 = (System_Object_array *)gameObject;
  v21 = (UnityEngine_GameObject_o *)StringLiteral_24841/*"x"*/;
  if ( StringLiteral_24841/*"x"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24841/*"x"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_24841/*"x"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_73;
  v20->m_Items[0] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v22, v18, v19);
  v50 = -1018691584;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v50, v23, v24, v25);
  v27 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_73;
  v20->m_Items[1] = v27;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v27, v18, v26);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_24049/*"time"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_73;
  v20->m_Items[2] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v22, v18, v28);
  v49 = 1061997773;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v49, v29, v30, v31);
  v33 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_73;
  v20->m_Items[3] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v33, v18, v32);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_20959/*"islocal"*/;
  if ( StringLiteral_20959/*"islocal"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_20959/*"islocal"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_73;
  v20->m_Items[4] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[4], (int32_t)v22, v18, v34);
  v48[0] = 1;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v48, v35, v36, v37);
  v39 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_73;
  v20->m_Items[5] = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v39, v18, v38);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_73;
  v20->m_Items[6] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[6], (int32_t)v22, v18, v40);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v42 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_74:
      v46 = sub_1C2D710(v21);
      sub_1C2D5B8(v46, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_73;
  v20->m_Items[7] = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v42, v18, v41);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_74;
    v22 = (Il2CppObject *)StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_73;
  v20->m_Items[8] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[8], (int32_t)v22, v18, v43);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_19008/*"endMoveFigure"*/;
  if ( StringLiteral_19008/*"endMoveFigure"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_19008/*"endMoveFigure"*/, v20->obj.klass->_1.element_class);
    if ( v21 )
    {
      v22 = (Il2CppObject *)StringLiteral_19008/*"endMoveFigure"*/;
      goto LABEL_66;
    }
    goto LABEL_74;
  }
  v22 = 0;
LABEL_66:
  if ( LODWORD(v20->max_length) <= 9 )
LABEL_73:
    sub_1C2D6F4(v21, v22, v18);
  v20->m_Items[9] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[9], (int32_t)v22, v18, v44);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v45 = iTween__Hash(v20, 0);
  iTween__MoveFrom_63096900(figureRoot, v45, 0);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5442/*"END_OPEN"*/, 0);
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
  if ( (byte_4C2AAEE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11121/*"RESULT_GET_EQUIP_EXP_ADD"*/);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    sub_1C2D490(&StringLiteral_11111/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C2D490(&StringLiteral_805/*"+ {0}"*/);
    byte_4C2AAEE = 1;
  }
  v30 = 0;
  entity = 0;
  v32 = 0;
  v11 = getExp;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  if ( v11 - this->fields.defaultExp < 1 )
  {
    v18 = (Il2CppObject *)System_Int32__ToString_64968716((int32_t)&v33, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
    Instance = System_String__Format((System_String_o *)StringLiteral_805/*"+ {0}"*/, v18, 0);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11121/*"RESULT_GET_EQUIP_EXP_ADD"*/, 0);
    v14 = (Il2CppObject *)System_Int64__ToString_64973892(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9225/*"N0"*/,
                            0);
    v30 = v11 - this->fields.defaultExp;
    v15 = (Il2CppObject *)System_Int64__ToString_64973892((int64_t)&v30, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
    Instance = System_String__Format_63499156(v13, v14, v15, 0);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(equip_getexpLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EquipExpMaster___);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RESULT_EQUIP_MAXEXP"*/, 0);
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
    Instance = System_Int32__ToString_64968716((int32_t)&v32, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
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
    sub_1C2D6EC(Instance, v17);
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
  if ( (byte_4C2AAED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11122/*"RESULT_GET_MASTER_EXP_ADD"*/);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    sub_1C2D490(&StringLiteral_11111/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C2D490(&StringLiteral_805/*"+ {0}"*/);
    byte_4C2AAED = 1;
  }
  v31 = 0;
  v32 = 0;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  if ( getExp - this->fields.defaultExp < 1 )
  {
    v15 = (Il2CppObject *)System_Int64__ToString_64973892((int64_t)&v33, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
    mst_slider = System_String__Format((System_String_o *)StringLiteral_805/*"+ {0}"*/, v15, 0);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11122/*"RESULT_GET_MASTER_EXP_ADD"*/, 0);
    v11 = (Il2CppObject *)System_Int64__ToString_64973892(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9225/*"N0"*/,
                            0);
    v32 = getExp - this->fields.defaultExp;
    v12 = (Il2CppObject *)System_Int64__ToString_64973892((int64_t)&v32, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
    mst_slider = System_String__Format_63499156(v10, v11, v12, 0);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  UILabel__set_text(mst_getexpLabel, mst_slider, 0);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_36;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_36;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserExpMaster___);
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
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RESULT_EQUIP_MAXEXP"*/, 0);
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
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_36;
    v23 = this->fields.mst_atexpLabel;
    v24 = mst_slider;
    v32 = (int64_t)mst_slider[1].klass - nowExp;
    mst_slider = System_Int64__ToString_64973892((int64_t)&v32, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
    if ( !v23 )
      goto LABEL_36;
    UILabel__set_text(v23, mst_slider, 0);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                      &v31,
                                      Level - 1,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
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
      sub_1C2D6EC(mst_slider, v14);
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
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RESULT_EQUIP_MAXEXP"*/, 0);
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
  int32_t playerExp; // w8
  Il2CppObject *v35; // x0
  struct UserGameEntity_o **p_newGame; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  struct UserEquipEntity_o **p_newEquip; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x4
  struct UserGameEntity_o *newGame; // x8
  struct UserEquipEntity_o *oldEquip; // x8
  UILabel_o *equip_nameLabel; // x27
  __int64 v47; // x28
  __int64 v48; // x29
  int32_t v49; // w0
  const MethodInfo *v50; // x5
  const MethodInfo *v51; // x2
  struct UserGameEntity_o *oldGame; // x8
  __int64 v53; // x2
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v55; // x26
  const MethodInfo *v56; // x4
  int v57; // w25
  __int64 v58; // x8
  signed __int64 v59; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length_low; // x10
  struct BattleResultMasterUpStatusComponent_array *v62; // x8
  int v63; // w8
  __int64 v64; // x24
  unsigned int v65; // w20
  struct UISprite_array *v66; // x8
  struct UISprite_array *v67; // x8
  struct UISprite_array *v68; // x8
  struct UISprite_array *v69; // x8
  const MethodInfo *v70; // x4
  struct UISprite_array *v71; // x8
  const MethodInfo *v72; // x4
  struct UISprite_array *v73; // x8
  int v74; // w8
  const MethodInfo *v75; // x2
  struct UserGameEntity_o *v76; // x8
  int64_t exp; // x10
  struct UserEquipEntity_o *v78; // x8
  struct UserEquipEntity_o *v79; // x8
  UILabel_o *equip_oldlevelLabel; // x21
  System_String_o *v81; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v84; // x1
  System_Text_StringBuilder_o *v85; // x21
  __int64 v86; // x23
  UserEquipEntity_o *v87; // x8
  __int64 v88; // x22
  __int64 v89; // x28
  System_Int32_array *SkillLvList; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // x26
  int v92; // w29
  unsigned __int64 v93; // x20
  __int64 v94; // x24
  System_Int32_array *v95; // x19
  __int64 v96; // x25
  System_String_o *v97; // x27
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x28
  Il2CppObject *v101; // x0
  System_String_o *v102; // x27
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x22
  UILabel_o *equip_confLabel; // x22
  struct UserEquipEntity_o *v106; // x8
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v110; // x21
  bool v111; // w1
  UILabel_o *damage_battleLabel; // x21
  UserEquipEntity_o **v113; // [xsp+0h] [xbp-A0h]
  BattleResultExpComponent_o *v114; // [xsp+8h] [xbp-98h]
  __int64 v115; // [xsp+10h] [xbp-90h]
  int32_t *m_Items; // [xsp+18h] [xbp-88h]
  int32_t v117; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *v118; // [xsp+30h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2AAEB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&System_Func_float__int__int__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__);
    sub_1C2D490(&BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C2D490(&StringLiteral_17260/*"bit_reward_shine01"*/);
    sub_1C2D490(&StringLiteral_11110/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_1C2D490(&StringLiteral_11109/*"RESULT_EQEXP_GETSKILL"*/);
    sub_1C2D490(&StringLiteral_17261/*"bit_reward_shine02"*/);
    sub_1C2D490(&StringLiteral_396/*"#,#"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AAEB = 1;
  }
  v118 = 0;
  entity = 0;
  v19 = sub_1C2D6DC(BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_147;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = masterLvInfoArray;
  v24 = (__int64 *)(v19 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 24), (int32_t)masterLvInfoArray, v25, v26);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = oldGameEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldGame, (int32_t)oldGameEntity, v28, v29);
  p_oldEquip = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.oldEquip;
  this->fields.oldEquip = oldEquipEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldEquip, (int32_t)oldEquipEntity, v31, v32);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Master_object, knockdownResult, 0);
  }
  this->fields.updateFlg = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_147;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0);
  playerExp = (int)entity;
  if ( entity )
    playerExp = entity->fields.playerExp;
  this->fields.defaultExp = playerExp;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v35 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v35;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newGame, (int32_t)v35, v37, v38);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !*p_oldEquip )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v39 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          *(_QWORD *)&(*p_oldEquip)[1].fields.currentCryptoKey,
          (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v39;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newEquip, (int32_t)v39, v41, v42);
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
                    v43);
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_147;
  equip_nameLabel = this->fields.equip_nameLabel;
  v48 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v120.fields.currentCryptoKey = v48;
  *(_QWORD *)&v120.fields.fakeValue = v47;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v120, 0);
  Master_object = (__int64)EquipMaster__getEquipName(v49, 0);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Master_object, 0), !*p_oldEquip)
    || (Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_oldEquip)[2], 0),
        !*p_newEquip)
    || !*p_oldEquip
    || (Master_object = BattleResultExpComponent__SetEquipExp(
                          this,
                          Master_object,
                          (*p_newEquip)->fields.exp - (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.currentCryptoKey,
                          v50),
        (oldGame = this->fields.oldGame) == 0)
    || (BattleResultExpComponent__setMasterLv(this, oldGame->fields.lv, v51),
        (upParamList = this->fields.upParamList) == 0) )
  {
LABEL_147:
    sub_1C2D6EC(Master_object, v21);
  }
  if ( !LODWORD(upParamList->max_length) )
    goto LABEL_148;
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  Master_object = (__int64)upParamList->m_Items[0];
  v113 = &this->fields.newEquip;
  if ( !Master_object )
    goto LABEL_147;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Master_object,
    (*p_oldGame)->fields.lv,
    (*p_newGame)->fields.lv,
    0);
  v55 = sub_1C2D6DC(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v55,
    (Il2CppObject *)v19,
    Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__,
    0);
  if ( !v55 )
    goto LABEL_147;
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v55 + 24))(
                    *(_QWORD *)(v55 + 64),
                    35,
                    *(_QWORD *)(v55 + 40),
                    -186.0);
  v57 = Master_object;
  if ( (int)Master_object < 6 )
  {
    v58 = *v24;
    if ( *v24 )
    {
      v59 = 0;
      while ( v59 < *(int *)(v58 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_147;
        max_length_low = LODWORD(lvUpRewardSpArray->max_length);
        if ( v59 < (int)max_length_low )
        {
          if ( v59 >= max_length_low )
            goto LABEL_148;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v59],
            (System_String_o *)StringLiteral_17260/*"bit_reward_shine01"*/,
            v56);
          v58 = *v24;
        }
        ++v59;
        if ( !v58 )
          goto LABEL_147;
      }
    }
    v74 = 35;
    goto LABEL_75;
  }
  v62 = this->fields.upParamList;
  if ( !v62 )
    goto LABEL_147;
  if ( !LODWORD(v62->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v62->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Master_object )
    goto LABEL_147;
  v63 = *(_DWORD *)(Master_object + 24);
  v64 = Master_object;
  if ( v63 >= 1 )
  {
    v65 = 0;
    while ( v65 < v63 )
    {
      Master_object = *(_QWORD *)(v64 + 8LL * (int)v65 + 32);
      if ( !Master_object )
        goto LABEL_147;
      UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)(Master_object + 424) - 2, 0);
      v63 = *(_DWORD *)(v64 + 24);
      if ( (int)++v65 >= v63 )
        goto LABEL_57;
    }
    goto LABEL_148;
  }
LABEL_57:
  v66 = this->fields.lvUpRewardSpArray;
  if ( !v66 )
    goto LABEL_147;
  if ( !LODWORD(v66->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v66->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v67 = this->fields.lvUpRewardSpArray;
  if ( !v67 )
    goto LABEL_147;
  if ( !LODWORD(v67->max_length) )
    goto LABEL_148;
  Master_object = (__int64)v67->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  v68 = this->fields.lvUpRewardSpArray;
  if ( !v68 )
    goto LABEL_147;
  if ( LODWORD(v68->max_length) <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v68->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v69 = this->fields.lvUpRewardSpArray;
  if ( !v69 )
    goto LABEL_147;
  if ( LODWORD(v69->max_length) <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v69->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v55 + 24))(
                    *(_QWORD *)(v55 + 64),
                    31,
                    *(_QWORD *)(v55 + 40),
                    -186.0);
  v71 = this->fields.lvUpRewardSpArray;
  if ( !v71 )
    goto LABEL_147;
  if ( !LODWORD(v71->max_length) )
    goto LABEL_148;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v71->m_Items[0],
    (System_String_o *)StringLiteral_17261/*"bit_reward_shine02"*/,
    v70);
  v73 = this->fields.lvUpRewardSpArray;
  if ( !v73 )
    goto LABEL_147;
  if ( LODWORD(v73->max_length) <= 1 )
LABEL_148:
    sub_1C2D6F4(Master_object, v21, v53);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v73->m_Items[1],
    (System_String_o *)StringLiteral_17261/*"bit_reward_shine02"*/,
    v72);
  v74 = 31;
LABEL_75:
  Master_object = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, v74 * v57 + 134, 0);
  v76 = this->fields.oldGame;
  if ( !v76 )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  exp = v76->fields.exp;
  v78 = this->fields.oldEquip;
  this->fields.updateFlg |= exp != (*p_newGame)->fields.exp;
  if ( !v78 )
    goto LABEL_147;
  BattleResultExpComponent__setEquipLv(this, v78->fields.lv, v75);
  v79 = this->fields.oldEquip;
  if ( !v79 )
    goto LABEL_147;
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)v79 + 48, 0);
  if ( !equip_oldlevelLabel )
    goto LABEL_147;
  v81 = (System_String_o *)(Master_object ? Master_object : StringLiteral_1/*""*/);
  UILabel__set_text(equip_oldlevelLabel, v81, 0);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_147;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)newEquip + 48, 0);
  if ( !equip_newlevelLabel )
    goto LABEL_147;
  v84 = (System_String_o *)(Master_object ? Master_object : StringLiteral_1/*""*/);
  UILabel__set_text(equip_newlevelLabel, v84, 0);
  v85 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v85, 0);
  Master_object = (__int64)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  Master_object = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)Master_object, 0);
  if ( !*v113 )
    goto LABEL_147;
  v86 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillIdList(*v113, 0);
  v87 = (UserEquipEntity_o *)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  v88 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillLvList(v87, 0);
  if ( !*v113 )
    goto LABEL_147;
  v89 = Master_object;
  SkillLvList = UserEquipEntity__getSkillLvList(*v113, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v86 )
    goto LABEL_147;
  if ( *(int *)(v86 + 24) >= 1 )
  {
    v91 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v92 = 0;
    v93 = 0;
    v115 = v89 + 32;
    m_Items = SkillLvList->m_Items;
    v94 = v88 + 32;
    v114 = this;
    while ( 1 )
    {
      v118 = 0;
      if ( !v88 )
        goto LABEL_147;
      if ( v93 >= *(unsigned int *)(v88 + 24) )
        goto LABEL_148;
      if ( !v91 )
        goto LABEL_147;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v91,
                        &v118,
                        *(_DWORD *)(v94 + 4 * v93),
                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v118 && (Master_object & 1) != 0 )
      {
        if ( v93 >= *(unsigned int *)(v86 + 24) || v93 >= *(unsigned int *)(v88 + 24) )
          goto LABEL_148;
        if ( *(_DWORD *)(v86 + 32 + 4 * v93) != *(_DWORD *)(v94 + 4 * v93) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESULT_EQEXP_GETSKILL"*/, 0);
          if ( !v118 )
            goto LABEL_147;
          v102 = (System_String_o *)Master_object;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v118, 0);
          Master_object = (__int64)System_String__Format(v102, Name, 0);
          if ( !v85 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_63544152(
                                     v85,
                                     (System_String_o *)Master_object,
                                     0);
LABEL_121:
          v92 += 3;
          goto LABEL_122;
        }
        if ( !v89 )
          goto LABEL_147;
        if ( v93 >= *(unsigned int *)(v89 + 24) )
          goto LABEL_148;
        if ( !SkillLvList )
          goto LABEL_147;
        if ( v93 >= LODWORD(SkillLvList->max_length) )
          goto LABEL_148;
        if ( *(_DWORD *)(v115 + 4 * v93) != m_Items[v93] )
        {
          v95 = SkillLvList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v96 = v89;
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_EQEXP_UPSKILLLV"*/, 0);
          if ( !v118 )
            goto LABEL_147;
          v97 = (System_String_o *)Master_object;
          Master_object = (__int64)SkillEntity__getName((SkillEntity_o *)v118, 0);
          if ( v93 >= LODWORD(v95->max_length) )
            goto LABEL_148;
          v100 = (Il2CppObject *)Master_object;
          v117 = m_Items[v93];
          v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v53, v98, v99);
          Master_object = (__int64)System_String__Format_63499156(v97, v100, v101, 0);
          if ( !v85 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_63544152(
                                     v85,
                                     (System_String_o *)Master_object,
                                     0);
          v89 = v96;
          SkillLvList = v95;
          this = v114;
          goto LABEL_121;
        }
      }
LABEL_122:
      if ( (__int64)++v93 >= *(int *)(v86 + 24) )
        goto LABEL_125;
    }
  }
  v92 = 0;
LABEL_125:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_147;
  LODWORD(v121.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0);
  v121.fields.y = (float)v92 * 10.0;
  v121.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v121, 0);
  Master_object = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, 22 * v92 + 134, 0);
  if ( !v85 )
    goto LABEL_147;
  equip_confLabel = this->fields.equip_confLabel;
  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v85->klass->vtable._3_ToString.methodPtr)(
                    v85,
                    v85->klass->vtable._3_ToString.method);
  if ( !equip_confLabel )
    goto LABEL_147;
  UILabel__set_text(equip_confLabel, (System_String_o *)Master_object, 0);
  v106 = this->fields.oldEquip;
  if ( !v106 || !*v113 )
    goto LABEL_147;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v106->fields.exp != (*v113)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Master_object = (__int64)System_Int64__ToString_64973892(
                               (int64_t)&this->fields.oldRecordDamage,
                               (System_String_o *)StringLiteral_396/*"#,#"*/,
                               0);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
      damage_battleLabel = this->fields.damage_battleLabel;
      Master_object = (__int64)System_Int64__ToString_64973892(
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
                v111 = 0;
                goto LABEL_146;
              }
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  Master_object = (__int64)System_Int64__ToString_64973892(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0);
  if ( !damage_recordLabel )
    goto LABEL_147;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
  v110 = this->fields.damage_battleLabel;
  Master_object = (__int64)System_Int64__ToString_64973892(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0);
  if ( !v110 )
    goto LABEL_147;
  UILabel__set_text(v110, (System_String_o *)Master_object, 0);
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
  v111 = 1;
LABEL_146:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v111, 0);
}


void BattleResultExpComponent__UpdateValue(BattleResultExpComponent_o *this, float val, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleResultExpComponent__updateValueActual(this, val, 0, v3);
}


void BattleResultExpComponent__activeTouch(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_1C2D6EC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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

  if ( (byte_4C2AAFC & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_checkDamageRecord__);
    sub_1C2D490(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_17245/*"bit_result_levelup01"*/);
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AAFC = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
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
                                  (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
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
          v9 = sub_1C7DCA8(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v9)(v6, *(_QWORD *)(v9 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_66404364((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/, 0);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1C2D6EC(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_70908988(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
            0);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
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
    v13 = (_QWORD *)sub_1C2D4A8(Method_BattleResultExpComponent_checkDamageRecord__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
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
  if ( (byte_4C2AAF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_checkEquipLevelUp__);
    sub_1C2D490(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_17245/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AAF9 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
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
                                             (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
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
          v10 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_66404364((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/, 0);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1C2D6EC(this, method);
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
                                             (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                             0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_70908988(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
            0);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))equipupwindow->klass->vtable._10_Open.methodPtr)(
    equipupwindow,
    v13,
    equipupwindow->klass->vtable._10_Open.method);
  v14 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C2D4A8(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
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

  if ( (byte_4C2AAF5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_checkMasterLevelUp__);
    sub_1C2D490(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_17245/*"bit_result_levelup01"*/);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AAF5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
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
                                      (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
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
          v14 = sub_1C7DCA8(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_66404364((SimpleAnimation_o *)MeterSePlayer, (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/, 0);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1C2D6EC(MeterSePlayer, v5);
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
                                    (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                    0);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_70908988(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
      0);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v17 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v17, (Il2CppObject *)this, Method_BattleResultExpComponent_endOpenMasterUp__, 0);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._10_Open.methodPtr)(
    masterupwindow,
    v17,
    masterupwindow->klass->vtable._10_Open.method);
  v18 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C2D4A8(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
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
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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

  if ( (byte_4C2AAFF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AAFF = 1;
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
    sub_1C2D6EC(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2AAFD & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    this = (BattleResultExpComponent_o *)sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AAFD = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        v4 = v2[20].klass,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0),
        !v4) )
  {
    sub_1C2D6EC(this, method);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))v4->_1.image + 63))(
    v4,
    v5,
    *((_QWORD *)v4->_1.image + 64));
}


void BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  void *monitor; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2AAFA & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_endCloseEquipUp__);
    this = (BattleResultExpComponent_o *)sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AAFA = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        monitor = v2[16].monitor,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0),
        !monitor) )
  {
    sub_1C2D6EC(this, method);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
    monitor,
    v5,
    *(_QWORD *)(*(_QWORD *)monitor + 512LL));
}


void BattleResultExpComponent__closeKnockdownRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4C2AB00 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AB00 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
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
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4C2AAF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4C2AAF7 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_14;
  if ( effectUIList->fields._size >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v4,
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
LABEL_14:
    sub_1C2D6EC(effectUIList, method);
  }
LABEL_10:
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_14;
  effectUIList = (System_Collections_Generic_List_object__o *)parentComp->fields.obj_fronttouch;
  if ( !effectUIList )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
  masterupwindow = this->fields.masterupwindow;
  v7 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v7, (Il2CppObject *)this, Method_BattleResultExpComponent_endCloseMasterUp__, 0);
  if ( !masterupwindow )
    goto LABEL_14;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._12_Close.methodPtr)(
    masterupwindow,
    v7,
    masterupwindow->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C2AAF1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAF1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4C2AAFE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAFE = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4C2AAFB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAFB = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4C2AAF8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAF8 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  __int64 v21; // x22
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  __int64 v31; // x22
  System_Collections_Hashtable_o *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  int v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2AAF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultExpComponent_endMoveFigure__);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_15197/*"UpdateValue"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_19438/*"finishUpdateValue"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AAF2 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C2D538(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C2D6EC(0, v5);
    v8 = v4;
    v9 = StringLiteral_19677/*"from"*/;
    if ( StringLiteral_19677/*"from"*/ )
    {
      v9 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v9 )
        goto LABEL_59;
      v10 = StringLiteral_19677/*"from"*/;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_58;
    *(_QWORD *)(v8 + 32) = v10;
    sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), v10, v6, v7);
    v42 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v42, v11, v12, v13);
    v15 = v9;
    if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) <= 1u )
        goto LABEL_58;
      *(_QWORD *)(v8 + 40) = v15;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), v15, v6, v14);
      v9 = StringLiteral_24088/*"to"*/;
      if ( StringLiteral_24088/*"to"*/ )
      {
        v9 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v9 )
          goto LABEL_59;
        v10 = StringLiteral_24088/*"to"*/;
      }
      else
      {
        v10 = 0;
      }
      if ( *(_DWORD *)(v8 + 24) <= 2u )
        goto LABEL_58;
      *(_QWORD *)(v8 + 48) = v10;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 48), v10, v6, v16);
      v41 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v41, v17, v18, v19);
      v21 = v9;
      if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v8 + 24) <= 3u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 56) = v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 56), v21, v6, v20);
        v9 = StringLiteral_22418/*"onupdate"*/;
        if ( StringLiteral_22418/*"onupdate"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22418/*"onupdate"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 4u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 64) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 64), v10, v6, v22);
        v9 = StringLiteral_15197/*"UpdateValue"*/;
        if ( StringLiteral_15197/*"UpdateValue"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_15197/*"UpdateValue"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_15197/*"UpdateValue"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 5u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 72) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 72), v10, v6, v23);
        v9 = StringLiteral_22410/*"oncomplete"*/;
        if ( StringLiteral_22410/*"oncomplete"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_22410/*"oncomplete"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 6u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 80) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 80), v10, v6, v24);
        v9 = StringLiteral_19438/*"finishUpdateValue"*/;
        if ( StringLiteral_19438/*"finishUpdateValue"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_19438/*"finishUpdateValue"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_19438/*"finishUpdateValue"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 7u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 88) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 88), v10, v6, v25);
        v9 = StringLiteral_24049/*"time"*/;
        if ( StringLiteral_24049/*"time"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_59;
          v10 = StringLiteral_24049/*"time"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 8u )
          goto LABEL_58;
        *(_QWORD *)(v8 + 96) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 96), v10, v6, v26);
        time_exptotal = this->fields.time_exptotal;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v27, v28, v29);
        v31 = v9;
        if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v8 + 24) > 9u )
          {
            *(_QWORD *)(v8 + 104) = v31;
            sub_1C2D434((CGThumbnailListItem_o *)(v8 + 104), v31, v6, v30);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v32 = iTween__Hash((System_Object_array *)v8, 0);
            iTween__ValueTo(gameObject, v32, 0);
            if ( this->fields.updateFlg )
            {
              v33 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v33 = (_QWORD *)sub_1C2D4A8(Method_BattleResultExpComponent_endMoveFigure__);
              v34 = (System_Reflection_MethodBase_o *)sub_1C2D474(v33, v33[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0);
              v36 = OverwriteAssetSoundName__PlaySe(v34, CommonSeName, 0, 0);
              this->fields.MeterSePlayer = v36;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v36, v37, v38);
            }
            return;
          }
LABEL_58:
          sub_1C2D6F4(v9, v10, v6);
        }
      }
    }
LABEL_59:
    v39 = sub_1C2D710(v9);
    sub_1C2D5B8(v39, 0);
  }
}


void BattleResultExpComponent__endOpenDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_1C2D6EC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_1C2D6EC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AAF6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15366/*"WAIT_OPEN"*/);
    byte_4C2AAF6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15366/*"WAIT_OPEN"*/, 0);
}


void BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AAF3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AAF3 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
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
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2AAEA & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2827/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    byte_4C2AAEA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2827/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63493168(v5, (System_String_o *)StringLiteral_2827/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_25078/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0);
  if ( !equip_Lv )
LABEL_11:
    sub_1C2D6EC(v5, v6);
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
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2AAE9 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    sub_1C2D490(&StringLiteral_2832/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_4C2AAE9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2832/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63493168(v5, (System_String_o *)StringLiteral_2832/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_25078/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0);
  if ( !mst_Lv )
LABEL_11:
    sub_1C2D6EC(v5, v6);
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
  if ( (byte_4C2AAF4 & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2AAF4 = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_46137156(v16, 0);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0 )
LABEL_21:
    sub_1C2D6EC(this, isFinish);
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
  struct BattleResultExpComponent_o *v13; // x8
  struct BattleResultMasterUpStatusComponent_array *v14; // x8
  struct BattleResultExpComponent_o *v15; // x8
  struct BattleResultMasterUpStatusComponent_array *v16; // x9
  struct UserGameEntity_o *v17; // x10
  struct UserGameEntity_o *v18; // x8
  int v19; // w22
  struct BattleResultExpComponent_o *v20; // x10
  struct UserGameEntity_o *v21; // x8
  struct UserGameEntity_o *v22; // x9
  struct BattleResultMasterUpStatusComponent_array *v23; // x10
  int32_t costMax; // w21
  int32_t v25; // w23
  struct BattleResultExpComponent_o *v26; // x8
  struct BattleResultMasterUpStatusComponent_array *v27; // x8
  struct BattleResultExpComponent_o *v28; // x8
  struct BattleResultMasterUpStatusComponent_array *v29; // x9
  struct UserGameEntity_o *v30; // x10
  struct UserGameEntity_o *v31; // x8
  struct BattleResultExpComponent_o *v32; // x8
  struct BattleResultMasterUpStatusComponent_array *v33; // x8
  struct BattleResultExpComponent_o *v34; // x10
  struct UserGameEntity_o *v35; // x8
  struct UserGameEntity_o *v36; // x9
  struct BattleResultMasterUpStatusComponent_array *v37; // x10
  int32_t friendKeep; // w21
  int32_t v39; // w23
  struct BattleResultExpComponent_o *v40; // x8
  struct BattleResultMasterUpStatusComponent_array *v41; // x8
  struct BattleResultExpComponent_o *v42; // x8
  struct BattleResultMasterUpStatusComponent_array *v43; // x9
  struct UserGameEntity_o *v44; // x10
  struct UserGameEntity_o *v45; // x8
  struct BattleResultExpComponent_o *v46; // x8
  struct BattleResultMasterUpStatusComponent_array *v47; // x8
  struct BattleResultExpComponent_o *v48; // x8
  struct BattleResultMasterUpStatusComponent_array *v49; // x8
  EventMaster_o *v50; // x21
  struct BattleResultExpComponent_o *v51; // x8
  struct BattleResultMasterUpStatusComponent_array *v52; // x8
  BattleResultMasterUpStatusComponent_o *v53; // x8
  System_String_o **v54; // x9
  struct BattleResultExpComponent_o *v55; // x8
  struct BattleResultMasterUpStatusComponent_array *v56; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned int v59; // w24
  int v60; // w25
  struct BattleResultExpComponent_o *v61; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v63; // x8
  struct UISprite_array *v64; // x8
  struct MasterLvRewardInfo_array *v65; // x9
  UISprite_o *v66; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v68; // x8
  __int64 v69; // x3
  __int64 v70; // x4
  struct BattleResultExpComponent_o *v71; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v73; // x9
  MasterLvRewardInfo_o *v74; // x9
  Il2CppObject *v75; // x23
  UILabel_o *v76; // x22
  Il2CppObject *v77; // x0
  struct MasterLvRewardInfo_array *v78; // x8
  int v80; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C2AB02 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_2830/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_1C2D490(&StringLiteral_2829/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_1C2D490(&StringLiteral_2825/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_1C2D490(&StringLiteral_2831/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_1C2D490(&StringLiteral_2826/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)sub_1C2D490(&StringLiteral_25113/*"{0} {1}個"*/);
    byte_4C2AB02 = 1;
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
    v19 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v13 = v6->fields.__4__this;
    if ( !v13 )
      goto LABEL_128;
    v14 = v13->fields.upParamList;
    if ( !v14 )
      goto LABEL_128;
    if ( LODWORD(v14->max_length) <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v14->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2825/*"BATTLE_RESULTEXP_APMAX"*/,
      0);
    v15 = v6->fields.__4__this;
    if ( !v15 )
      goto LABEL_128;
    v16 = v15->fields.upParamList;
    if ( !v16 )
      goto LABEL_128;
    if ( LODWORD(v16->max_length) <= 1 )
      goto LABEL_129;
    v17 = v15->fields.oldGame;
    if ( !v17 )
      goto LABEL_128;
    v18 = v15->fields.newGame;
    if ( !v18 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v16->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v17->fields.actMax,
      v18->fields.actMax,
      0);
    v19 = 1;
  }
  v20 = v6->fields.__4__this;
  if ( !v20 )
    goto LABEL_128;
  v21 = v20->fields.oldGame;
  if ( !v21 )
    goto LABEL_128;
  v22 = v20->fields.newGame;
  if ( !v22 )
    goto LABEL_128;
  v23 = v20->fields.upParamList;
  if ( !v23 )
    goto LABEL_128;
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v23->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v21->fields.costMax;
  v25 = v22->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v25 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v26 = v6->fields.__4__this;
    if ( !v26 )
      goto LABEL_128;
    v27 = v26->fields.upParamList;
    if ( !v27 )
      goto LABEL_128;
    if ( LODWORD(v27->max_length) <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v27->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2826/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0);
    v28 = v6->fields.__4__this;
    if ( !v28 )
      goto LABEL_128;
    v29 = v28->fields.upParamList;
    if ( !v29 )
      goto LABEL_128;
    if ( LODWORD(v29->max_length) <= 2 )
      goto LABEL_129;
    v30 = v28->fields.oldGame;
    if ( !v30 )
      goto LABEL_128;
    v31 = v28->fields.newGame;
    if ( !v31 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v29->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v30->fields.costMax,
      v31->fields.costMax,
      0);
    v32 = v6->fields.__4__this;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.upParamList;
    if ( !v33 )
      goto LABEL_128;
    if ( LODWORD(v33->max_length) <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v33->m_Items[2];
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
    v84.fields.y = height - (float)(v19 * baseHeight);
    v84.fields.x = 0.0;
    v84.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v84, 0);
    ++v19;
  }
  v34 = v6->fields.__4__this;
  if ( !v34 )
    goto LABEL_128;
  v35 = v34->fields.oldGame;
  if ( !v35 )
    goto LABEL_128;
  v36 = v34->fields.newGame;
  if ( !v36 )
    goto LABEL_128;
  v37 = v34->fields.upParamList;
  if ( !v37 )
    goto LABEL_128;
  if ( LODWORD(v37->max_length) <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v37->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v35->fields.friendKeep;
  v39 = v36->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v39 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v40 = v6->fields.__4__this;
    if ( !v40 )
      goto LABEL_128;
    v41 = v40->fields.upParamList;
    if ( !v41 )
      goto LABEL_128;
    if ( LODWORD(v41->max_length) <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v41->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2829/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0);
    v42 = v6->fields.__4__this;
    if ( !v42 )
      goto LABEL_128;
    v43 = v42->fields.upParamList;
    if ( !v43 )
      goto LABEL_128;
    if ( LODWORD(v43->max_length) <= 3 )
      goto LABEL_129;
    v44 = v42->fields.oldGame;
    if ( !v44 )
      goto LABEL_128;
    v45 = v42->fields.newGame;
    if ( !v45 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v43->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v44->fields.friendKeep,
      v45->fields.friendKeep,
      0);
    v46 = v6->fields.__4__this;
    if ( !v46 )
      goto LABEL_128;
    v47 = v46->fields.upParamList;
    if ( !v47 )
      goto LABEL_128;
    if ( LODWORD(v47->max_length) <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v47->m_Items[3];
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
    v85.fields.y = height - (float)(v19 * baseHeight);
    v85.fields.x = 0.0;
    v85.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v85, 0);
    ++v19;
  }
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  v48 = v6->fields.__4__this;
  if ( !v48 )
    goto LABEL_128;
  v49 = v48->fields.upParamList;
  if ( !v49 )
    goto LABEL_128;
  if ( LODWORD(v49->max_length) <= 4 )
    goto LABEL_129;
  v50 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v49->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !v50 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)EventMaster__IsBPEnable(v50, 0);
  v51 = v6->fields.__4__this;
  if ( !v51 )
    goto LABEL_128;
  v52 = v51->fields.upParamList;
  if ( !v52 )
    goto LABEL_128;
  if ( LODWORD(v52->max_length) <= 4 )
    goto LABEL_129;
  v53 = v52->m_Items[4];
  if ( !v53 )
    goto LABEL_128;
  v54 = (System_String_o **)&StringLiteral_2831/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v54 = (System_String_o **)&StringLiteral_2830/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v53, *v54, 0);
  v55 = v6->fields.__4__this;
  if ( !v55 || (v56 = v55->fields.upParamList) == 0 )
LABEL_128:
    sub_1C2D6EC(this, *(_QWORD *)&baseHeight);
  if ( LODWORD(v56->max_length) <= 4 )
LABEL_129:
    sub_1C2D6F4(this, *(_QWORD *)&baseHeight, method);
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v56->m_Items[4];
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
  v86.fields.y = height - (float)(v19 * baseHeight);
  v86.fields.x = 0.0;
  v86.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v86, 0);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)(unsigned int)(v19 + 1);
  if ( masterLvInfoArray )
  {
    max_length = masterLvInfoArray->max_length;
    if ( (int)max_length <= 2 && (int)max_length >= 1 )
    {
      v80 = v19 + 1;
      v59 = 0;
      v60 = baseHeight * (_DWORD)this;
      do
      {
        v61 = v6->fields.__4__this;
        if ( !v61 )
          goto LABEL_128;
        lvUpRewardSpArray = v61->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v59 >= LODWORD(lvUpRewardSpArray->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)lvUpRewardSpArray->m_Items[v59];
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
        v87.fields.y = height - (float)v60;
        v87.fields.x = -30.0;
        v87.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v87, 0);
        v63 = v6->fields.__4__this;
        if ( !v63 )
          goto LABEL_128;
        v64 = v63->fields.lvUpRewardSpArray;
        if ( !v64 )
          goto LABEL_128;
        if ( v59 >= LODWORD(v64->max_length) )
          goto LABEL_129;
        v65 = v6->fields.masterLvInfoArray;
        if ( !v65 )
          goto LABEL_128;
        if ( v59 >= LODWORD(v65->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v65->m_Items[v59];
        if ( !this )
          goto LABEL_128;
        v66 = v64->m_Items[v59];
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)AtlasManager__SetItem(v66, IconImageId, 0);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v68 = v6->fields.masterLvInfoArray;
        if ( !v68 )
          goto LABEL_128;
        if ( v59 >= LODWORD(v68->max_length) )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v68->m_Items[v59];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0);
        v71 = v6->fields.__4__this;
        if ( !v71 )
          goto LABEL_128;
        lvUpRewardLabelArray = v71->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v59 >= LODWORD(lvUpRewardLabelArray->max_length) )
          goto LABEL_129;
        v73 = v6->fields.masterLvInfoArray;
        if ( !v73 )
          goto LABEL_128;
        if ( v59 >= LODWORD(v73->max_length) )
          goto LABEL_129;
        v74 = v73->m_Items[v59];
        if ( !v74 )
          goto LABEL_128;
        v75 = (Il2CppObject *)nameText;
        v76 = lvUpRewardLabelArray->m_Items[v59];
        num = v74->fields.num;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, method, v69, v70);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)System_String__Format_63499156(
                                                                     (System_String_o *)StringLiteral_25113/*"{0} {1}個"*/,
                                                                     v75,
                                                                     v77,
                                                                     0);
        if ( !v76 )
          goto LABEL_128;
        UILabel__set_text(v76, (System_String_o *)this, 0);
        v78 = v6->fields.masterLvInfoArray;
        if ( !v78 )
          goto LABEL_128;
        ++v59;
        v60 += baseHeight;
      }
      while ( (signed int)v59 < SLODWORD(v78->max_length) );
      LODWORD(this) = v80 + v59;
    }
  }
  return (int)this;
}