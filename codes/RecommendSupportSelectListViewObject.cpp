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

  if ( (byte_49F8782 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8782 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49F8784 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8784 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1B6432C(Instance, v7);
    if ( !v5 )
LABEL_13:
      sub_1B64324(Instance);
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
  const MethodInfo *v7; // x3

  if ( (byte_49F8788 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnClickEquip__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8788 = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickEquip__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnClickEquip__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  RecommendSupportSelectControl__SetState_32237412(
    (RecommendSupportSelectControl_o *)Instance,
    2,
    this->fields._ItemIndex_k__BackingField,
    v7);
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
  __int64 v12; // x2
  RecommendSupportSelectListViewObject___c_c *v13; // x8
  RecommendSupportSelectControl_o *v14; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *_9__15_0; // x21
  Il2CppObject *v16; // x22
  const MethodInfo *v17; // x3
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49F878A & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___, v3);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnClickMessage__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__, v6);
    sub_1B640C8(&RecommendSupportSelectListViewObject___c_TypeInfo, v7);
    byte_49F878A = 1;
  }
  v8 = Method_RecommendSupportSelectListViewObject_OnClickMessage__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickMessage__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnClickMessage__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v13 = RecommendSupportSelectListViewObject___c_TypeInfo;
  v14 = (RecommendSupportSelectControl_o *)Instance;
  if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
    v13 = RecommendSupportSelectListViewObject___c_TypeInfo;
  }
  _9__15_0 = v13->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__15_0 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1B64314(
                                                                         RecommendSupportSelectControl_DialogResultCallBack_TypeInfo,
                                                                         v11,
                                                                         v12);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      _9__15_0,
      v16,
      Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__,
      v17);
    static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v19, v20);
  }
  if ( !v14 )
    sub_1B64324(Instance);
  RecommendSupportSelectControl__OpenDialog_object_(
    v14,
    _9__15_0,
    this->fields._ItemIndex_k__BackingField,
    (const MethodInfo_2EC9AE8 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickQuest(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x3

  if ( (byte_49F878B & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnClickQuest__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F878B = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickQuest__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickQuest__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnClickQuest__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  RecommendSupportSelectControl__SetState_32237412(
    (RecommendSupportSelectControl_o *)Instance,
    3,
    this->fields._ItemIndex_k__BackingField,
    v7);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v7; // x3

  if ( (byte_49F8786 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnClickServant__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8786 = 1;
  }
  v4 = Method_RecommendSupportSelectListViewObject_OnClickServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickServant__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnClickServant__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance->fields._IsEdit_k__BackingField = 1,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  RecommendSupportSelectControl__SetState_32237412(Instance, 1, this->fields._ItemIndex_k__BackingField, v7);
}


void __fastcall RecommendSupportSelectListViewObject__OnLongPushEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v13; // x9
  int64_t v14; // x19
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  RecommendSupportSelectListViewObject___c_c *v19; // x8
  CommonUI_o *v20; // x20
  ServantStatusDialog_EndDelegate_o *_9__14_0; // x21
  Il2CppObject *v22; // x22
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49F8789 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnLongPushEquip__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject___c__OnLongPushEquip_b__14_0__, v6);
    sub_1B640C8(&RecommendSupportSelectListViewObject___c_TypeInfo, v7);
    byte_49F8789 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  klass = Instance[7].klass;
  if ( !klass )
    goto LABEL_22;
  name = klass->_1.name;
  if ( !name )
    goto LABEL_22;
  ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
  if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
    sub_1B6432C(Instance, v9);
  v13 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v13 )
    v14 = *(_QWORD *)(v13 + 40);
  else
    v14 = 0LL;
  v15 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
  if ( v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = RecommendSupportSelectListViewObject___c_TypeInfo;
    v20 = (CommonUI_o *)Instance;
    if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
      v19 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    _9__14_0 = v19->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = RecommendSupportSelectListViewObject___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__14_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18);
      ServantStatusDialog_EndDelegate___ctor(
        _9__14_0,
        v22,
        Method_RecommendSupportSelectListViewObject___c__OnLongPushEquip_b__14_0__,
        0LL);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v24, v25);
    }
    if ( v20 )
    {
      CommonUI__OpenServantEquipStatusDialog(v20, 11, v14, 1, _9__14_0, 0LL, 0LL);
      return;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
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
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v17; // x9
  int64_t v18; // x19
  void *monitor; // x20
  Il2CppClass *v20; // x21
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  CommonUI_o *v25; // x20
  RecommendSupportSelectListViewObject___c_c *v26; // x8
  ServantStatusDialog_FormationEndDelegate_o *_9__12_0; // x21
  Il2CppObject *v28; // x22
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49F8787 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject_OnLongPushServant__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_0__, v10);
    sub_1B640C8(&RecommendSupportSelectListViewObject___c_TypeInfo, v11);
    byte_49F8787 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  klass = Instance[7].klass;
  if ( !klass )
    goto LABEL_33;
  name = klass->_1.name;
  if ( !name )
    goto LABEL_33;
  ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
  if ( (unsigned int)ItemIndex_k__BackingField >= *((_DWORD *)name + 6) )
    sub_1B6432C(Instance, v13);
  v17 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 32);
  else
    v18 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v18,
                               (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( v18 > 0 )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_33;
  v20 = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v20;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL) >= 1 )
  {
LABEL_19:
    v21 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (CommonUI_o *)Instance;
    v26 = RecommendSupportSelectListViewObject___c_TypeInfo;
    if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
      v26 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    _9__12_0 = v26->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = RecommendSupportSelectListViewObject___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__12_0 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B64314(
                                                                 ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                 v23,
                                                                 v24);
      ServantStatusDialog_FormationEndDelegate___ctor(
        _9__12_0,
        v28,
        Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_0__,
        0LL);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = _9__12_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v30, v31);
    }
    if ( v25 )
    {
      CommonUI__OpenServantStatusDialog_30354836(v25, 1, v18, _9__12_0, 0LL, 0LL);
      return;
    }
LABEL_33:
    sub_1B64324(Instance);
  }
  v32 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B640AC(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__ResetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RecommendSupportData_o *Instance; // x0
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x8
  __int64 v10; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_49F8783 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8783 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    v6 = this->fields.itemDraw;
    Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
            sub_1B6432C(Instance, v7);
          if ( v6 )
          {
            RecommendSupportListViewItemDraw__SetItem(
              v6,
              *(RecommendSupportData_RecommendDeckData_o **)(v10 + 8 * ItemIndex_k__BackingField + 32),
              v8);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(Instance);
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

  if ( (byte_49F8785 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_49F8785 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1B6432C(Instance, v7);
    if ( !v5 )
LABEL_13:
      sub_1B64324(Instance);
    RecommendSupportListViewItemDraw__SetItem(
      v5,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v8);
  }
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F878C & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportSelectListViewObject___c_TypeInfo, v1);
    byte_49F878C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportSelectListViewObject___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportSelectListViewObject___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewObject___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectListViewObject___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___c___OnLongPushEquip_b__14_0(
        RecommendSupportSelectListViewObject___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49F878F & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_49F878F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2EC9818 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  RecommendSupportSelectListViewMenu__Redisplay((RecommendSupportSelectListViewMenu_o *)Instance, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___c___OnLongPushServant_b__12_0(
        RecommendSupportSelectListViewObject___c_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // cc
  CommonUI_o *v14; // x19
  System_Action_o *v15; // x20
  Il2CppObject *v16; // x21
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UserGameEntity_o *SelfUserGame; // x19
  __int64 v21; // x8
  const MethodInfo *v22; // x2

  if ( (byte_49F878D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v7);
    sub_1B640C8(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, v8);
    sub_1B640C8(&RecommendSupportSelectListViewObject___c_TypeInfo, v9);
    byte_49F878D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(v15, v16, Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, 0LL);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__12_1 = v15;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_1, (int32_t)v15, v18, v19);
    }
    if ( v14 )
    {
      CommonUI__CloseServantStatusDialog(v14, v15, 0LL);
      return;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( *((_QWORD *)Instance + 14) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    if ( !SelfUserGame )
      goto LABEL_22;
    v21 = *((_QWORD *)Instance + 14);
    if ( !v21 )
      goto LABEL_22;
    *(_QWORD *)(v21 + 64) = SelfUserGame->fields.pushUserSvtId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2EC9818 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !Instance )
    goto LABEL_22;
  RecommendSupportSelectListViewMenu__Redisplay((RecommendSupportSelectListViewMenu_o *)Instance, -1, v22);
}


void __fastcall RecommendSupportSelectListViewObject___c___OnLongPushServant_b__12_1(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F878E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F878E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}