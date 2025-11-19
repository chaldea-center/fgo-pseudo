void CharaGraphListViewPatternGrandEquipNormal___ctor(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        System_Int64_array *otherUsedEquipUserId,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServantEquip___ctor((CharaGraphListViewPatternServantEquip_o *)this, 0);
  this->fields.otherUsedEquipUserSvtId = otherUsedEquipUserId;
  sub_1C6B9AC(&this->fields.otherUsedEquipUserSvtId, otherUsedEquipUserId);
  this->fields.grandServantData = grandSvtSlotData;
  sub_1C6B9AC(&this->fields.grandServantData, grandSvtSlotData);
}


bool CharaGraphListViewPatternGrandEquipNormal__Filter(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  return 1;
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ServantEquipList; // x20
  System_Func_TSource__bool__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_T1__T2__TResult__o *v8; // x21

  if ( (byte_4CB1030 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
    sub_1C6BA08(&Method_CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem_b__3_0__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandEquipListViewItem___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C6BA08(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_UserServantEntity__int__CharaGraphGrandEquipListViewItem__TypeInfo);
    byte_4CB1030 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_312E9E0 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantEquipList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getServantEquipList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0),
        Master_object = (Il2CppObject *)sub_1C6BC54(System_Func_UserServantEntity__bool__TypeInfo),
        !this) )
  {
    sub_1C6BC60(Master_object, v4);
  }
  v6 = (System_Func_TSource__bool__o *)Master_object;
  System_Func_object__bool____ctor(
    (System_Func_object__bool__o *)Master_object,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_Filter.method,
    0);
  v7 = System_Linq_Enumerable__Where_object_(
         ServantEquipList,
         v6,
         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  v8 = (System_Func_T1__T2__TResult__o *)sub_1C6BC54(System_Func_UserServantEntity__int__CharaGraphGrandEquipListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem_b__3_0__,
    0);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__51846660(
                                                                                   v7,
                                                                                   (System_Func_TSource__int__TResult__o *)v8,
                                                                                   (const MethodInfo_3171E04 *)Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandEquipListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *CharaGraphListViewPatternGrandEquipNormal__GetItemDrawPattern(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v2; // x19

  if ( (byte_4CB1031 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewItemDrawPatternGrandEquip_TypeInfo);
    byte_4CB1031 = 1;
  }
  v2 = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C6BC54(CharaGraphListViewItemDrawPatternGrandEquip_TypeInfo);
  CharaGraphListViewItemDrawPatternDefault___ctor(v2, 0);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


bool CharaGraphListViewPatternGrandEquipNormal__IsFocusItem(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C6BC60(this, 0);
  return item->fields._IsBase_k__BackingField;
}


CharaGraphGrandEquipListViewItem_o *CharaGraphListViewPatternGrandEquipNormal___GenerateListViewItem_b__3_0(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        UserServantEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  System_Int64_array *otherUsedEquipUserSvtId; // x22
  GrandServantListSlotData_o *grandServantData; // x23
  CharaGraphGrandEquipListViewItem_o *v9; // x24
  const MethodInfo *v10; // x6

  if ( (byte_4CB1032 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphGrandEquipListViewItem_TypeInfo);
    byte_4CB1032 = 1;
  }
  otherUsedEquipUserSvtId = this->fields.otherUsedEquipUserSvtId;
  grandServantData = this->fields.grandServantData;
  v9 = (CharaGraphGrandEquipListViewItem_o *)sub_1C6BC54(CharaGraphGrandEquipListViewItem_TypeInfo);
  CharaGraphGrandEquipListViewItem___ctor(
    v9,
    i,
    (CharaGraphListViewPatternBase_o *)this,
    elem,
    otherUsedEquipUserSvtId,
    grandServantData,
    v10);
  return v9;
}