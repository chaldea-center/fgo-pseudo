void RecommendSupportSelectListViewObject___ctor(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportSelectListViewObject__Awake(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectListViewObject__ClearItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  RecommendSupportListViewItemDraw_o *v5; // x0

  if ( (byte_4D2C799 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C799 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    RecommendSupportListViewItemDraw__ClearItem(v5, v4);
  }
}


void RecommendSupportSelectListViewObject__Init(
        RecommendSupportSelectListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  this->fields._ItemIndex_k__BackingField = index;
  if ( !itemDraw )
    sub_1C93D2C(0, index);
  RecommendSupportListViewItemDraw__Init(itemDraw, index, method);
}


void RecommendSupportSelectListViewObject__ModifyItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v4; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4D2C79B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v4 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1C93D34(Instance);
    if ( !v4 )
LABEL_13:
      sub_1C93D2C(Instance, v6);
    RecommendSupportListViewItemDraw__SetItem(
      v4,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v7);
  }
}


void RecommendSupportSelectListViewObject__OnClickEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2C79F & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnClickEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79F = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnClickEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  RecommendSupportSelectControl__SetState_35394324(
    (RecommendSupportSelectControl_o *)Instance,
    2,
    this->fields._ItemIndex_k__BackingField,
    v7);
}


void RecommendSupportSelectListViewObject__OnClickMessage(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  RecommendSupportSelectListViewObject___c_c *v7; // x8
  RecommendSupportSelectControl_o *v8; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *_9__15_0; // x21
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x3
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2C7A1 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnClickMessage__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__);
    sub_1C93AD4(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_4D2C7A1 = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickMessage__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickMessage__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnClickMessage__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v7 = RecommendSupportSelectListViewObject___c_TypeInfo;
  v8 = (RecommendSupportSelectControl_o *)Instance;
  if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
    v7 = RecommendSupportSelectListViewObject___c_TypeInfo;
  }
  _9__15_0 = v7->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__15_0 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C93D20(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      _9__15_0,
      v10,
      Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__15_0__,
      v11);
    static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
      (int32_t)_9__15_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v8 )
    sub_1C93D2C(Instance, v6);
  RecommendSupportSelectControl__OpenDialog_object_(
    v8,
    _9__15_0,
    this->fields._ItemIndex_k__BackingField,
    (const MethodInfo_323EB5C *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
}


void RecommendSupportSelectListViewObject__OnClickQuest(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2C7A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnClickQuest__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C7A2 = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickQuest__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickQuest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnClickQuest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  RecommendSupportSelectControl__SetState_35394324(
    (RecommendSupportSelectControl_o *)Instance,
    3,
    this->fields._ItemIndex_k__BackingField,
    v7);
}


void RecommendSupportSelectListViewObject__OnClickServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2C79D & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnClickServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79D = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickServant__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnClickServant__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance->fields._IsEdit_k__BackingField = 1,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v6);
  }
  RecommendSupportSelectControl__SetState_35394324(Instance, 1, this->fields._ItemIndex_k__BackingField, v7);
}


void RecommendSupportSelectListViewObject__OnLongPushEquip(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v8; // x9
  int64_t v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *v12; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4D2C7A0 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C7A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_1C93D34(Instance);
  v8 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 40);
  else
    v9 = 0;
  v10 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
  if ( v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__14_0__,
      0);
    if ( v12 )
    {
      CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v12, 11, v9, 1, v13, 0, 0, 0);
      return;
    }
LABEL_16:
    sub_1C93D2C(Instance, v4);
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
}


void RecommendSupportSelectListViewObject__OnLongPushServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v8; // x9
  int64_t v9; // x20
  void *monitor; // x21
  Il2CppClass *v11; // x22
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x21
  ServantStatusDialog_FormationEndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D2C79E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_1C93D34(Instance);
  v8 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 32);
  else
    v9 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v9,
                               (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( v9 > 0 )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_27;
  v11 = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = monitor;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0) >= 1 )
  {
LABEL_19:
    v12 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C93D20(ServantStatusDialog_FormationEndDelegate_TypeInfo);
    ServantStatusDialog_FormationEndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__12_0__,
      0);
    if ( v14 )
    {
      CommonUI__OpenServantStatusDialog_31590468((CommonUI_o *)v14, 1, v9, v15, 0, 0);
      return;
    }
LABEL_27:
    sub_1C93D2C(Instance, v4);
  }
  v16 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
}


void RecommendSupportSelectListViewObject__ResetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x2
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x8
  __int64 v9; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4D2C79A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79A = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_15;
  RecommendSupportData__ResetDeckData(Instance, this->fields._ItemIndex_k__BackingField, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      EventSetupInfo_k__BackingField = Instance[1].fields._EventSetupInfo_k__BackingField;
      if ( EventSetupInfo_k__BackingField )
      {
        v9 = *(_QWORD *)&EventSetupInfo_k__BackingField->fields.isQuestStart;
        if ( v9 )
        {
          ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
          if ( (unsigned int)ItemIndex_k__BackingField >= *(_DWORD *)(v9 + 24) )
            sub_1C93D34(Instance);
          if ( v6 )
          {
            RecommendSupportListViewItemDraw__SetItem(
              v6,
              *(RecommendSupportData_RecommendDeckData_o **)(v9 + 8 * ItemIndex_k__BackingField + 32),
              v7);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C93D2C(Instance, v4);
  }
}


void RecommendSupportSelectListViewObject__SetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v4; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_4D2C79C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C79C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v4 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1C93D34(Instance);
    if ( !v4 )
LABEL_13:
      sub_1C93D2C(Instance, v6);
    RecommendSupportListViewItemDraw__SetItem(
      v4,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v7);
  }
}


void RecommendSupportSelectListViewObject___OnLongPushEquip_b__14_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2C7A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C7A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_323E88C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0 )
  {
    sub_1C93D2C(Instance, v5);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v6);
}


void RecommendSupportSelectListViewObject___OnLongPushServant_b__12_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  bool v8; // cc
  CommonUI_o *v9; // x20
  System_Action_o *v10; // x19
  Il2CppObject *v11; // x21
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v20; // x8
  const MethodInfo *v21; // x2

  if ( (byte_4D2C7A3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C93AD4(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__);
    sub_1C93AD4(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_4D2C7A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = questId < 1;
  v9 = (CommonUI_o *)Instance;
  if ( !v8 )
  {
    Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    if ( !RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo);
      Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    v10 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v10, v11, Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__12_1__, 0);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      static_fields->__9__12_1 = v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_1, (int32_t)v10, v13, v14, v15, v16, v17, v18);
    }
    if ( v9 )
    {
      CommonUI__CloseServantStatusDialog(v9, v10, 0);
      return;
    }
LABEL_22:
    sub_1C93D2C(Instance, v7);
  }
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( *((_QWORD *)Instance + 14) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    if ( !SelfUserGame )
      goto LABEL_22;
    v20 = *((_QWORD *)Instance + 14);
    if ( !v20 )
      goto LABEL_22;
    *(_QWORD *)(v20 + 64) = SelfUserGame->fields.pushUserSvtId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_323E88C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !Instance )
    goto LABEL_22;
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v21);
}


int32_t RecommendSupportSelectListViewObject__get_ItemIndex(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemIndex_k__BackingField;
}


void RecommendSupportSelectListViewObject__set_ItemIndex(
        RecommendSupportSelectListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemIndex_k__BackingField = value;
}


void RecommendSupportSelectListViewObject___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C7A5 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_4D2C7A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(RecommendSupportSelectListViewObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectListViewObject___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewObject___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectListViewObject___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportSelectListViewObject___c___ctor(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectListViewObject___c___OnClickMessage_b__15_0(
        RecommendSupportSelectListViewObject___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectListViewObject___c___OnLongPushServant_b__12_1(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2C7A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2C7A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}