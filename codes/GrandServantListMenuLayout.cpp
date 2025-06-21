void __fastcall GrandServantListMenuLayout___ctor(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListMenuLayout__Initialize(
        GrandServantListMenuLayout_o *this,
        PlayMakerFSM_o *fsm,
        GrandServantListItemDraw_o *prefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  System_Action_object__o *v14; // x20

  if ( (byte_4B173CC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GrandServantListItemSlot__TypeInfo, fsm);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___, v7);
    sub_1BCAFF8(&Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__, v8);
    sub_1BCAFF8(&GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo, v9);
    byte_4B173CC = 1;
  }
  v10 = (Il2CppObject *)sub_1BCB244(GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  v10[1].klass = (Il2CppClass *)fsm;
  sub_1BCAF9C(&v10[1]);
  v10[1].monitor = prefab;
  sub_1BCAF9C(&v10[1].monitor);
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  v14 = (System_Action_object__o *)sub_1BCB244(System_Action_GrandServantListItemSlot__TypeInfo);
  System_Action_object____ctor(v14, v10, Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__, 0LL);
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)v14,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void __fastcall GrandServantListMenuLayout__Release(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  GrandServantListMenuLayout___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  System_Action_object__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct GrandServantListMenuLayout___c_StaticFields *static_fields; // x0

  if ( (byte_4B173CD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GrandServantListItemSlot__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___, v3);
    sub_1BCAFF8(&Method_GrandServantListMenuLayout___c__Release_b__4_0__, v4);
    sub_1BCAFF8(&GrandServantListMenuLayout___c_TypeInfo, v5);
    byte_4B173CD = 1;
  }
  v6 = GrandServantListMenuLayout___c_TypeInfo;
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  if ( !GrandServantListMenuLayout___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListMenuLayout___c_TypeInfo);
    v6 = GrandServantListMenuLayout___c_TypeInfo;
  }
  _9__4_0 = (System_Action_object__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = GrandServantListMenuLayout___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Action_object__o *)sub_1BCB244(System_Action_GrandServantListItemSlot__TypeInfo);
    System_Action_object____ctor(_9__4_0, v9, Method_GrandServantListMenuLayout___c__Release_b__4_0__, 0LL);
    static_fields = GrandServantListMenuLayout___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Action_GrandServantListItemSlot__o *)_9__4_0;
    sub_1BCAF9C(&static_fields->__9__4_0);
  }
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)_9__4_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void __fastcall GrandServantListMenuLayout__SetItemSlotActive(
        GrandServantListMenuLayout_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct GrandServantListItemSlot_array *slots; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0

  IsNullOrEmpty = (UnityEngine_Component_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.slots,
                                               0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    slots = this->fields.slots;
    if ( !slots )
      goto LABEL_6;
    if ( !slots->max_length )
      sub_1BCB25C(IsNullOrEmpty, v6, v7);
    IsNullOrEmpty = (UnityEngine_Component_o *)slots->m_Items[0];
    if ( !IsNullOrEmpty )
LABEL_6:
      sub_1BCB254(IsNullOrEmpty, v6);
    gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
    BasicHelper__SetActiveSafely(Parent, value, 0LL);
  }
}


void __fastcall GrandServantListMenuLayout__SetupItemInfo(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0
  UILabel_o *itemNumLabel; // x19
  int32_t v10; // w20

  if ( (byte_4B173CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B173CF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntityDefinitely = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)Master_object,
                       *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                       this->fields.itemId,
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_17;
  itemNumLabel = this->fields.itemNumLabel;
  v10 = *((_DWORD *)EntityDefinitely + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__GetNumberFormat(v10, 0LL);
  if ( !itemNumLabel )
LABEL_17:
    sub_1BCB254(EntityDefinitely, v6);
  UILabel__set_text(itemNumLabel, (System_String_o *)EntityDefinitely, 0LL);
}


void __fastcall GrandServantListMenuLayout__UpdateView(
        GrandServantListMenuLayout_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *slots; // x20
  System_Action_object__o *v12; // x22
  const MethodInfo *v13; // x1

  if ( (byte_4B173CE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GrandServantListItemSlot__TypeInfo, grandServantListData);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___, v5);
    sub_1BCAFF8(&Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__, v6);
    sub_1BCAFF8(&GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo, v7);
    byte_4B173CE = 1;
  }
  v8 = (Il2CppObject *)sub_1BCB244(GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  v8[1].klass = (Il2CppClass *)grandServantListData;
  sub_1BCAF9C(&v8[1]);
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  v12 = (System_Action_object__o *)sub_1BCB244(System_Action_GrandServantListItemSlot__TypeInfo);
  System_Action_object____ctor(v12, v8, Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__, 0LL);
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)v12,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
  GrandServantListMenuLayout__SetupItemInfo(this, v13);
}


void __fastcall GrandServantListMenuLayout___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B173D0 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListMenuLayout___c_TypeInfo, v1);
    byte_4B173D0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GrandServantListMenuLayout___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantListMenuLayout___c_TypeInfo->static_fields->__9 = (struct GrandServantListMenuLayout___c_o *)v2;
  sub_1BCAF9C(GrandServantListMenuLayout___c_TypeInfo->static_fields);
}


void __fastcall GrandServantListMenuLayout___c___ctor(GrandServantListMenuLayout___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListMenuLayout___c___Release_b__4_0(
        GrandServantListMenuLayout___c_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  if ( !slot )
    sub_1BCB254(this, 0LL);
  GrandServantListItemSlot__Release(slot, (const MethodInfo *)slot);
}


void __fastcall GrandServantListMenuLayout___c__DisplayClass3_0___ctor(
        GrandServantListMenuLayout___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListMenuLayout___c__DisplayClass3_0___Initialize_b__0(
        GrandServantListMenuLayout___c__DisplayClass3_0_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !slot )
    sub_1BCB254(this, 0LL);
  GrandServantListItemSlot__Initialize(slot, this->fields.fsm, this->fields.prefab, v3);
}


void __fastcall GrandServantListMenuLayout___c__DisplayClass5_0___ctor(
        GrandServantListMenuLayout___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListMenuLayout___c__DisplayClass5_0___UpdateView_b__0(
        GrandServantListMenuLayout___c__DisplayClass5_0_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  if ( !slot )
    sub_1BCB254(this, 0LL);
  GrandServantListItemSlot__UpdateView(slot, this->fields.grandServantListData, method);
}