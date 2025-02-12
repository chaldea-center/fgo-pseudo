void __fastcall RecommendSupportSelectListViewObject___ctor(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__Awake(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectListViewObject__ClearItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  RecommendSupportListViewItemDraw_o *v5; // x0

  if ( (byte_4BC3C5C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC3C5C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    RecommendSupportListViewItemDraw__ClearItem(v5, v4);
  }
}


void __fastcall RecommendSupportSelectListViewObject__Init(
        RecommendSupportSelectListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  this->fields._ItemIndex_k__BackingField = index;
  if ( !itemDraw )
    sub_1C1AE30(0LL, index);
  RecommendSupportListViewItemDraw__Init(itemDraw, index, method);
}


void __fastcall RecommendSupportSelectListViewObject__ModifyItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4BC3C5E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C5E = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    klass = Instance[7].klass;
    if ( !klass )
      goto LABEL_13;
    name = klass->_1.name;
    if ( !name )
      goto LABEL_13;
    ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
    if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
      sub_1C1AE38(Instance, v7);
    if ( !v5 )
LABEL_13:
      sub_1C1AE30(Instance, v7);
    RecommendSupportListViewItemDraw__SetItem(
      v5,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v8);
  }
}


void __fastcall RecommendSupportSelectListViewObject__OnClickEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BC3C62 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnClickEquip__, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C62 = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickEquip__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnClickEquip__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  RecommendSupportSelectControl__SetState_33564304(
    (RecommendSupportSelectControl_o *)Instance,
    2,
    this->fields._ItemIndex_k__BackingField,
    v8);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickMessage(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  RecommendSupportSelectListViewObject___c_c *v12; // x8
  RecommendSupportSelectControl_o *v13; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *_9__15_0; // x21
  Il2CppObject *v15; // x22
  const MethodInfo *v16; // x3
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BC3C64 & 1) == 0 )
  {
    sub_1C1ABD4(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1C1ABD4(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___, v3);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnClickMessage__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__, v6);
    sub_1C1ABD4(&RecommendSupportSelectListViewObject___c_TypeInfo, v7);
    byte_4BC3C64 = 1;
  }
  v8 = Method_RecommendSupportSelectListViewObject_OnClickMessage__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickMessage__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnClickMessage__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v12 = RecommendSupportSelectListViewObject___c_TypeInfo;
  v13 = (RecommendSupportSelectControl_o *)Instance;
  if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
    v12 = RecommendSupportSelectListViewObject___c_TypeInfo;
  }
  _9__15_0 = v12->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__15_0 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C1AE20(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      _9__15_0,
      v15,
      Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__,
      v16);
    static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v13 )
    sub_1C1AE30(Instance, v11);
  RecommendSupportSelectControl__OpenDialog_object_(
    v13,
    _9__15_0,
    this->fields._ItemIndex_k__BackingField,
    (const MethodInfo_30321DC *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickQuest(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BC3C65 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnClickQuest__, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C65 = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickQuest__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickQuest__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnClickQuest__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  RecommendSupportSelectControl__SetState_33564304(
    (RecommendSupportSelectControl_o *)Instance,
    3,
    this->fields._ItemIndex_k__BackingField,
    v8);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BC3C60 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnClickServant__, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C60 = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickServant__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnClickServant__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance->fields._IsEdit_k__BackingField = 1,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(Instance, v7);
  }
  RecommendSupportSelectControl__SetState_33564304(Instance, 1, this->fields._ItemIndex_k__BackingField, v8);
}


void __fastcall RecommendSupportSelectListViewObject__OnLongPushEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v12; // x9
  int64_t v13; // x20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22

  if ( (byte_4BC3C63 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnLongPushEquip__, v3);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_4BC3C63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  klass = Instance[7].klass;
  if ( !klass )
    goto LABEL_16;
  name = klass->_1.name;
  if ( !name )
    goto LABEL_16;
  ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
  if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
    sub_1C1AE38(Instance, v8);
  v12 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 40);
  else
    v13 = 0LL;
  v14 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v14, v14[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__,
      0LL);
    if ( v16 )
    {
      CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v16, 11, v13, 1, v17, 0LL, 0LL);
      return;
    }
LABEL_16:
    sub_1C1AE30(Instance, v8);
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__OnLongPushServant(
        RecommendSupportSelectListViewObject_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v16; // x9
  int64_t v17; // x20
  void *monitor; // x21
  Il2CppClass *v19; // x22
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *v22; // x21
  ServantStatusDialog_FormationEndDelegate_o *v23; // x22
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4BC3C61 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1C1ABD4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject_OnLongPushServant__, v7);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10);
    byte_4BC3C61 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  klass = Instance[7].klass;
  if ( !klass )
    goto LABEL_27;
  name = klass->_1.name;
  if ( !name )
    goto LABEL_27;
  ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
  if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
    sub_1C1AE38(Instance, v12);
  v16 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v16 )
    v17 = *(_QWORD *)(v16 + 32);
  else
    v17 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v17,
                               (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( v17 > 0 )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_27;
  v19 = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = monitor;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v27, 0LL) >= 1 )
  {
LABEL_19:
    v20 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    v21 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C1AE20(ServantStatusDialog_FormationEndDelegate_TypeInfo);
    ServantStatusDialog_FormationEndDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__,
      0LL);
    if ( v22 )
    {
      CommonUI__OpenServantStatusDialog_31108668((CommonUI_o *)v22, 1, v17, v23, 0LL, 0LL);
      return;
    }
LABEL_27:
    sub_1C1AE30(Instance, v12);
  }
  v24 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C1ABEC(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__ResetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RecommendSupportData_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v7; // x20
  const MethodInfo *v8; // x2
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x8
  __int64 v10; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4BC3C5D & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C5D = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_15;
  RecommendSupportData__ResetDeckData(Instance, this->fields._ItemIndex_k__BackingField, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      EventSetupInfo_k__BackingField = Instance[1].fields._EventSetupInfo_k__BackingField;
      if ( EventSetupInfo_k__BackingField )
      {
        v10 = *(_QWORD *)&EventSetupInfo_k__BackingField->fields.isQuestStart;
        if ( v10 )
        {
          ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
          if ( (unsigned int)ItemIndex_k__BackingField >= *(_DWORD *)(v10 + 24) )
            sub_1C1AE38(Instance, v5);
          if ( v7 )
          {
            RecommendSupportListViewItemDraw__SetItem(
              v7,
              *(RecommendSupportData_RecommendDeckData_o **)(v10 + 8 * ItemIndex_k__BackingField + 32),
              v8);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C1AE30(Instance, v5);
  }
}


void __fastcall RecommendSupportSelectListViewObject__SetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4BC3C5F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BC3C5F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    klass = Instance[7].klass;
    if ( !klass )
      goto LABEL_13;
    name = klass->_1.name;
    if ( !name )
      goto LABEL_13;
    ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
    if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
      sub_1C1AE38(Instance, v7);
    if ( !v5 )
LABEL_13:
      sub_1C1AE30(Instance, v7);
    RecommendSupportListViewItemDraw__SetItem(
      v5,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___OnLongPushEquip_b__14_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BC3C67 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    byte_4BC3C67 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3031F0C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
    sub_1C1AE30(Instance, v7);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___OnLongPushServant_b__12_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  bool v13; // cc
  CommonUI_o *v14; // x20
  System_Action_o *v15; // x19
  Il2CppObject *v16; // x21
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v25; // x8
  const MethodInfo *v26; // x2

  if ( (byte_4BC3C66 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    sub_1C1ABD4(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, v9);
    sub_1C1ABD4(&RecommendSupportSelectListViewObject___c_TypeInfo, v10);
    byte_4BC3C66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = questId < 1;
  v14 = (CommonUI_o *)Instance;
  if ( !v13 )
  {
    Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
      Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v15 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
      }
      v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v15 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, 0LL);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__12_1 = v15;
      sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__12_1, (int64_t)v15, v18, v19, v20, v21, v22, v23);
    }
    if ( v14 )
    {
      CommonUI__CloseServantStatusDialog(v14, v15, 0LL);
      return;
    }
LABEL_22:
    sub_1C1AE30(Instance, v12);
  }
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( *((_QWORD *)Instance + 14) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    if ( !SelfUserGame )
      goto LABEL_22;
    v25 = *((_QWORD *)Instance + 14);
    if ( !v25 )
      goto LABEL_22;
    *(_QWORD *)(v25 + 64) = SelfUserGame->fields.pushUserSvtId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3031F0C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !Instance )
    goto LABEL_22;
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v26);
}


int32_t __fastcall RecommendSupportSelectListViewObject__get_ItemIndex(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemIndex_k__BackingField;
}


void __fastcall RecommendSupportSelectListViewObject__set_ItemIndex(
        RecommendSupportSelectListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemIndex_k__BackingField = value;
}


void __fastcall RecommendSupportSelectListViewObject___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC3C68 & 1) == 0 )
  {
    sub_1C1ABD4(&RecommendSupportSelectListViewObject___c_TypeInfo, v1);
    byte_4BC3C68 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(RecommendSupportSelectListViewObject___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectListViewObject___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewObject___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)RecommendSupportSelectListViewObject___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall RecommendSupportSelectListViewObject___c___ctor(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject___c___OnClickMessage_b__15_0(
        RecommendSupportSelectListViewObject___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectListViewObject___c___OnLongPushServant_b__12_1(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BC3C69 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BC3C69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}