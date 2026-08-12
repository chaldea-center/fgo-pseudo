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
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  RecommendSupportListViewItemDraw_o *v6; // x0

  if ( (byte_596C535 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C535 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_2213CDC(0, v5);
    RecommendSupportListViewItemDraw__ClearItem(v6, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectListViewObject__Init(
        RecommendSupportSelectListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  this->fields._ItemIndex_k__BackingField = index;
  if ( !itemDraw )
    sub_2213CDC(0, *(_QWORD *)&index);
  RecommendSupportListViewItemDraw__Init(itemDraw, *(const MethodInfo **)&index);
}


void RecommendSupportSelectListViewObject__ModifyItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_596C537 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C537 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_2213CE4(Instance);
    if ( !v5 )
LABEL_13:
      sub_2213CDC(Instance, v7);
    RecommendSupportListViewItemDraw__SetItem(
      v5,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v8);
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

  if ( (byte_596C53C & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnClickEquip__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C53C = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnClickEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  RecommendSupportSelectControl__SetState_41626680(
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
  __int64 v7; // x2
  RecommendSupportSelectListViewObject___c_c *v8; // x8
  RecommendSupportSelectControl_o *v9; // x20
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x9
  RecommendSupportSelectControl_DialogResultCallBack_o *_9__16_0; // x21
  Il2CppObject *v12; // x22
  const MethodInfo *v13; // x3
  struct RecommendSupportSelectListViewObject___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C53E & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnClickMessage__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__16_0__);
    sub_2213A60(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_596C53E = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickMessage__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickMessage__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnClickMessage__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v8 = RecommendSupportSelectListViewObject___c_TypeInfo;
  v9 = (RecommendSupportSelectControl_o *)Instance;
  if ( !*(&RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo, v6, v7);
    v8 = RecommendSupportSelectListViewObject___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_2213CCC(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      _9__16_0,
      v12,
      Method_RecommendSupportSelectListViewObject___c__OnClickMessage_b__16_0__,
      v13);
    v14 = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
    v14->__9__16_0 = _9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__16_0, (int32_t)_9__16_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v9 )
    sub_2213CDC(Instance, v6);
  RecommendSupportSelectControl__OpenDialog_object_(
    v9,
    _9__16_0,
    this->fields._ItemIndex_k__BackingField,
    (const MethodInfo_3974450 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportMessageSelectDialog___);
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

  if ( (byte_596C53F & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnClickQuest__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C53F = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickQuest__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickQuest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnClickQuest__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  RecommendSupportSelectControl__SetState_41626680(
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
  const MethodInfo_47A29F8 *v7; // x8
  const MethodInfo *v8; // x3

  if ( (byte_596C53A & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnClickServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C53A = 1;
  }
  v3 = Method_RecommendSupportSelectListViewObject_OnClickServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnClickServant__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnClickServant__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
        Instance->fields._IsEdit_k__BackingField = 1,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance(v7)) == 0) )
  {
    sub_2213CDC(Instance, v6);
  }
  RecommendSupportSelectControl__SetState_41626680(Instance, 1, this->fields._ItemIndex_k__BackingField, v8);
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
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_596C53D & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__15_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C53D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_2213CE4(Instance);
  v8 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( v9 )
    {
      v10 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
      v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportSelectListViewObject__OnLongPushEquip_b__15_0__,
        0);
      if ( v12 )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v12, 11, v9, 1, v13, 0, 0, 0);
        return;
      }
LABEL_16:
      sub_2213CDC(Instance, v4);
    }
  }
  v14 = Method_RecommendSupportSelectListViewObject_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushEquip__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnLongPushEquip__);
  v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
}


void RecommendSupportSelectListViewObject__OnLongPushServant(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9
  __int64 v9; // x9
  int64_t v10; // x20
  __int64 v11; // x2
  Il2CppClass *v12; // x21
  void *monitor; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x21
  ServantStatusDialog_FormationEndDelegate_o *v17; // x22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_596C53B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__13_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C53B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_2213CE4(Instance);
  v9 = *(_QWORD *)&name[8 * ItemIndex_k__BackingField + 32];
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 32);
  else
    v10 = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v10,
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( v10 > 0 )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_27;
  v12 = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v11);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = monitor;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0) >= 1 )
  {
LABEL_19:
    v14 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
    v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (ServantStatusDialog_FormationEndDelegate_o *)sub_2213CCC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
    ServantStatusDialog_FormationEndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewObject__OnLongPushServant_b__13_0__,
      0);
    if ( v16 )
    {
      CommonUI__OpenServantStatusDialog_37383124((CommonUI_o *)v16, 1, v10, v17, 0, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(Instance, v4);
  }
  v18 = Method_RecommendSupportSelectListViewObject_OnLongPushServant__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewObject_OnLongPushServant__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectListViewObject_OnLongPushServant__);
  v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
}


void RecommendSupportSelectListViewObject__ResetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v8; // x20
  const MethodInfo *v9; // x2
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x8
  __int64 v11; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_596C536 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C536 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_15;
  RecommendSupportData__ResetDeckData(Instance, this->fields._ItemIndex_k__BackingField, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      EventSetupInfo_k__BackingField = Instance[1].fields._EventSetupInfo_k__BackingField;
      if ( EventSetupInfo_k__BackingField )
      {
        v11 = *(_QWORD *)&EventSetupInfo_k__BackingField->fields.isQuestStart;
        if ( v11 )
        {
          ItemIndex_k__BackingField = this->fields._ItemIndex_k__BackingField;
          if ( (unsigned int)ItemIndex_k__BackingField >= *(_DWORD *)(v11 + 24) )
            sub_2213CE4(Instance);
          if ( v8 )
          {
            RecommendSupportListViewItemDraw__SetItem(
              v8,
              *(RecommendSupportData_RecommendDeckData_o **)(v11 + 8 * ItemIndex_k__BackingField + 32),
              v9);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
}


void RecommendSupportSelectListViewObject__SetItem(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  RecommendSupportListViewItemDraw_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppClass *klass; // x8
  const char *name; // x8
  __int64 ItemIndex_k__BackingField; // x9

  if ( (byte_596C538 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C538 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_2213CE4(Instance);
    if ( !v5 )
LABEL_13:
      sub_2213CDC(Instance, v7);
    RecommendSupportListViewItemDraw__SetItem(
      v5,
      *(RecommendSupportData_RecommendDeckData_o **)&name[8 * ItemIndex_k__BackingField + 32],
      v8);
  }
}


void RecommendSupportSelectListViewObject__UpdateQuestExpired(
        RecommendSupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  RecommendSupportListViewItemDraw_o *v6; // x0

  if ( (byte_596C539 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C539 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_2213CDC(0, v5);
    RecommendSupportListViewItemDraw__UpdateQuestExpired(v6, v5);
  }
}


void RecommendSupportSelectListViewObject___OnLongPushEquip_b__15_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_596C541 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C541 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v6);
}


void RecommendSupportSelectListViewObject___OnLongPushServant_b__13_0(
        RecommendSupportSelectListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  bool v9; // cc
  CommonUI_o *v10; // x20
  struct RecommendSupportSelectListViewObject___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_1; // x19
  Il2CppObject *v13; // x21
  struct RecommendSupportSelectListViewObject___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v22; // x8
  const MethodInfo *v23; // x2

  if ( (byte_596C540 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__13_1__);
    sub_2213A60(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_596C540 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = questId < 1;
  v10 = (CommonUI_o *)Instance;
  if ( !v9 )
  {
    Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    if ( !*(&RecommendSupportSelectListViewObject___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewObject___c_TypeInfo, v7, v8);
      Instance = RecommendSupportSelectListViewObject___c_TypeInfo;
    }
    static_fields = (struct RecommendSupportSelectListViewObject___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__13_1 = static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v7, v8);
        static_fields = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__13_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__13_1,
        v13,
        Method_RecommendSupportSelectListViewObject___c__OnLongPushServant_b__13_1__,
        0);
      v14 = RecommendSupportSelectListViewObject___c_TypeInfo->static_fields;
      v14->__9__13_1 = _9__13_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__13_1, (int32_t)_9__13_1, v15, v16, v17, v18, v19, v20);
    }
    if ( v10 )
    {
      CommonUI__CloseServantStatusDialog(v10, _9__13_1, 0);
      return;
    }
LABEL_22:
    sub_2213CDC(Instance, v7);
  }
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( *((_QWORD *)Instance + 14) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    if ( !SelfUserGame )
      goto LABEL_22;
    v22 = *((_QWORD *)Instance + 14);
    if ( !v22 )
      goto LABEL_22;
    *(_QWORD *)(v22 + 64) = SelfUserGame->fields.pushUserSvtId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !Instance )
    goto LABEL_22;
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields._ItemIndex_k__BackingField,
    v23);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C544 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectListViewObject___c_TypeInfo);
    byte_596C544 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectListViewObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectListViewObject___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewObject___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportSelectListViewObject___c_TypeInfo->static_fields,
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


void RecommendSupportSelectListViewObject___c___OnClickMessage_b__16_0(
        RecommendSupportSelectListViewObject___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectListViewObject___c___OnLongPushServant_b__13_1(
        RecommendSupportSelectListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C545 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C545 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}