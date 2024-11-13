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
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  RecommendSupportListViewItemDraw_o *v6; // x0

  if ( (byte_4B1242F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1242F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    RecommendSupportListViewItemDraw__ClearItem(v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject__Init(
        RecommendSupportSelectListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  this->fields._ItemIndex_k__BackingField = index;
  if ( !itemDraw )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  RecommendSupportListViewItemDraw__Init(itemDraw, index, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__ModifyItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4B12431 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12431 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1BCAA44(Instance, v9);
    if ( !v7 )
LABEL_13:
      sub_1BCAA3C(Instance, v9);
    RecommendSupportListViewItemDraw__SetItem(
      v7,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      0LL);
  }
}


void __fastcall RecommendSupportSelectListViewObject__OnClickEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B12435 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnClickEquip__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12435 = 1;
  }
  v6 = Method_RecommendSupportSelectListViewObject_OnClickEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickEquip__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnClickEquip__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  RecommendSupportSelectControl__SetState_33161256(
    (RecommendSupportSelectControl_o *)Instance,
    2,
    this->fields._ItemIndex_k__BackingField,
    0LL);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickMessage(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  RecommendSupportSelectListViewObject___c_c *v20; // x8
  RecommendSupportSelectControl_o *v21; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *_9__15_0; // x21
  Il2CppObject *v23; // x22
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B12437 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnClickMessage__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__, v10, v11);
    sub_1BCA7E0(&RecommendSupportSelectListViewObject___c_TypeInfo, v12, v13);
    byte_4B12437 = 1;
  }
  v14 = Method_RecommendSupportSelectListViewObject_OnClickMessage__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickMessage__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnClickMessage__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v20 = RecommendSupportSelectListViewObject___c_TypeInfo;
  v21 = (RecommendSupportSelectControl_o *)Instance;
  if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo, v17);
    v20 = RecommendSupportSelectListViewObject___c_TypeInfo;
  }
  _9__15_0 = v20->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      v20 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__15_0 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1BCAA2C(
                                                                         RecommendSupportSelectControl_DialogResultCallBack_TypeInfo,
                                                                         v17,
                                                                         v18,
                                                                         v19);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      _9__15_0,
      v23,
      Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__,
      0LL);
    static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v21 )
    sub_1BCAA3C(Instance, v17);
  RecommendSupportSelectControl__OpenDialog_object_(
    v21,
    _9__15_0,
    this->fields._ItemIndex_k__BackingField,
    (const MethodInfo_2FA4A30 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickQuest(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B12438 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnClickQuest__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12438 = 1;
  }
  v6 = Method_RecommendSupportSelectListViewObject_OnClickQuest__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickQuest__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnClickQuest__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  RecommendSupportSelectControl__SetState_33161256(
    (RecommendSupportSelectControl_o *)Instance,
    3,
    this->fields._ItemIndex_k__BackingField,
    0LL);
}


void __fastcall RecommendSupportSelectListViewObject__OnClickServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B12433 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnClickServant__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12433 = 1;
  }
  v6 = Method_RecommendSupportSelectListViewObject_OnClickServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickServant__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnClickServant__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance->fields._IsEdit_k__BackingField = 1,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  RecommendSupportSelectControl__SetState_33161256(Instance, 1, this->fields._ItemIndex_k__BackingField, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__OnLongPushEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v17; // x9
  int64_t v18; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  ServantStatusDialog_EndDelegate_o *v25; // x22

  if ( (byte_4B12436 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnLongPushEquip__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10, v11);
    byte_4B12436 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_1BCAA44(Instance, v13);
  v17 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 40);
  else
    v18 = 0LL;
  v19 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  if ( v18 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v22, v23, v24);
    ServantStatusDialog_EndDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__,
      0LL);
    if ( v21 )
    {
      CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v21, 11, v18, 1, v25, 0LL, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(Instance, v13);
  }
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__OnLongPushServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v25; // x9
  int64_t v26; // x20
  void *monitor; // x21
  Il2CppClass *v28; // x22
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ServantStatusDialog_FormationEndDelegate_o *v35; // x22
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B12434 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject_OnLongPushServant__, v12, v13);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v18, v19);
    byte_4B12434 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_1BCAA44(Instance, v21);
  v25 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 32);
  else
    v26 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v26,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( v26 > 0 )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_27;
  v28 = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v39.fields.currentCryptoKey = v28;
  *(_QWORD *)&v39.fields.fakeValue = monitor;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL) >= 1 )
  {
LABEL_19:
    v29 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v35 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BCAA2C(
                                                          ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                          v32,
                                                          v33,
                                                          v34);
    ServantStatusDialog_FormationEndDelegate___ctor(
      v35,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__,
      0LL);
    if ( v31 )
    {
      CommonUI__OpenServantStatusDialog_30776100((CommonUI_o *)v31, 1, v26, v35, 0LL, 0LL);
      return;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v21);
  }
  v36 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
  v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0LL);
}


void __fastcall RecommendSupportSelectListViewObject__ResetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportData_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v10; // x20
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x8
  __int64 v12; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4B12430 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12430 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_15;
  RecommendSupportData__ResetDeckData(Instance, this->fields._ItemIndex_k__BackingField, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      EventSetupInfo_k__BackingField = Instance[1].fields._EventSetupInfo_k__BackingField;
      if ( EventSetupInfo_k__BackingField )
      {
        v12 = *(_QWORD *)&EventSetupInfo_k__BackingField->fields.isQuestStart;
        if ( v12 )
        {
          ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
          if ( (unsigned int)ItemIndex_k__BackingField >= *(_DWORD *)(v12 + 24) )
            sub_1BCAA44(Instance, v7);
          if ( v10 )
          {
            RecommendSupportListViewItemDraw__SetItem(
              v10,
              *(RecommendSupportData_RecommendDeckData_o **)(v12 + 8 * ItemIndex_k__BackingField + 32),
              0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(Instance, v7);
  }
}


void __fastcall RecommendSupportSelectListViewObject__SetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4B12432 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B12432 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1BCAA44(Instance, v9);
    if ( !v7 )
LABEL_13:
      sub_1BCAA3C(Instance, v9);
    RecommendSupportListViewItemDraw__SetItem(
      v7,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___OnLongPushEquip_b__14_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1243A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6, v7);
    byte_4B1243A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewObject___OnLongPushServant_b__12_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  void *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  bool v20; // cc
  CommonUI_o *v21; // x20
  System_Action_o *v22; // x19
  Il2CppObject *v23; // x21
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v32; // x8
  const MethodInfo *v33; // x2

  if ( (byte_4B12439 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, v12, v13);
    sub_1BCA7E0(&RecommendSupportSelectListViewObject___c_TypeInfo, v14, v15);
    byte_4B12439 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = questId < 1;
  v21 = (CommonUI_o *)Instance;
  if ( !v20 )
  {
    Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo, v17);
      Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v22 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v22 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v17);
        Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
      }
      v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
      System_Action___ctor(v22, v23, Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, 0LL);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__12_1 = v22;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__12_1, (int64_t)v22, v25, v26, v27, v28, v29, v30);
    }
    if ( v21 )
    {
      CommonUI__CloseServantStatusDialog(v21, v22, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v17);
  }
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( *((_QWORD *)Instance + 14) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    if ( !SelfUserGame )
      goto LABEL_22;
    v32 = *((_QWORD *)Instance + 14);
    if ( !v32 )
      goto LABEL_22;
    *(_QWORD *)(v32 + 64) = SelfUserGame->fields.pushUserSvtId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !Instance )
    goto LABEL_22;
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v33);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1243B & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectListViewObject___c_TypeInfo, v1, v2);
    byte_4B1243B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectListViewObject___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportSelectListViewObject___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewObject___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportSelectListViewObject___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1243C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B1243C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}