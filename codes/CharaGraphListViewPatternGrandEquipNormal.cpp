void __fastcall CharaGraphListViewPatternGrandEquipNormal___ctor(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        System_Int64_array *otherUsedEquipUserId,
        int64_t selectedEquipUserSvtId,
        const MethodInfo *method)
{
  CharaGraphListViewPatternGrandEquipNormal_o *v6; // x21

  v6 = this;
  CharaGraphListViewPatternServantEquip___ctor((CharaGraphListViewPatternServantEquip_o *)this, 0LL);
  v6->fields.otherUsedEquipUserSvtId = otherUsedEquipUserId;
  v6 = (CharaGraphListViewPatternGrandEquipNormal_o *)((char *)v6 + 56);
  sub_1BCAF9C(v6);
  v6->monitor = (void *)selectedEquipUserSvtId;
}


bool __fastcall CharaGraphListViewPatternGrandEquipNormal__Filter(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  CharaGraphListViewPatternGrandEquipNormal_o *v4; // x19
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B173A7 & 1) == 0 )
  {
    this = (CharaGraphListViewPatternGrandEquipNormal_o *)sub_1BCAFF8(
                                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                            entity);
    byte_4B173A7 = 1;
  }
  if ( !entity )
    sub_1BCB254(this, entity);
  if ( !UserServantEntity__IsFriendShipSvtEquip(entity, 0LL) )
    return 1;
  v5 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v7, 0LL) == v4->fields.selectedEquipUserSvtId;
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ServantEquipList; // x20
  System_Func_TSource__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_T1__T2__TResult__o *v13; // x21

  if ( (byte_4B173A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___, method);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem_b__3_0__, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandEquipListViewItem___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v5);
    sub_1BCAFF8(&System_Func_UserServantEntity__bool__TypeInfo, v6);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__CharaGraphGrandEquipListViewItem__TypeInfo, v7);
    byte_4B173A6 = 1;
  }
  Master_object = CharaGraphListViewPatternBase__GetMaster_object_((const MethodInfo_300E224 *)Method_CharaGraphListViewPatternBase_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantEquipList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getServantEquipList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL),
        Master_object = (Il2CppObject *)sub_1BCB244(System_Func_UserServantEntity__bool__TypeInfo),
        !this) )
  {
    sub_1BCB254(Master_object, v9);
  }
  v11 = (System_Func_TSource__bool__o *)Master_object;
  System_Func_object__bool____ctor(
    (System_Func_object__bool__o *)Master_object,
    (Il2CppObject *)this,
    (intptr_t)this->klass[1]._1.image,
    0LL);
  v12 = System_Linq_Enumerable__Where_object_(
          ServantEquipList,
          v11,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  v13 = (System_Func_T1__T2__TResult__o *)sub_1BCB244(System_Func_UserServantEntity__int__CharaGraphGrandEquipListViewItem__TypeInfo);
  System_Func_object__int__object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_CharaGraphListViewPatternGrandEquipNormal__GenerateListViewItem_b__3_0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__Select_object__object__50655936(
                                                                                   v12,
                                                                                   (System_Func_TSource__int__TResult__o *)v13,
                                                                                   (const MethodInfo_304F2C0 *)Method_System_Linq_Enumerable_Select_UserServantEntity__CharaGraphGrandEquipListViewItem___);
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternGrandEquipNormal__GetItemDrawPattern(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v2; // x19

  if ( (byte_4B173A8 & 1) == 0 )
  {
    sub_1BCAFF8(&CharaGraphListViewItemDrawPatternGrandEquip_TypeInfo, method);
    byte_4B173A8 = 1;
  }
  v2 = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCB244(CharaGraphListViewItemDrawPatternGrandEquip_TypeInfo);
  CharaGraphListViewItemDrawPatternDefault___ctor(v2, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


bool __fastcall CharaGraphListViewPatternGrandEquipNormal__IsFocusItem(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCB254(this, 0LL);
  return item->fields._IsBase_k__BackingField;
}


CharaGraphGrandEquipListViewItem_o *__fastcall CharaGraphListViewPatternGrandEquipNormal___GenerateListViewItem_b__3_0(
        CharaGraphListViewPatternGrandEquipNormal_o *this,
        UserServantEntity_o *elem,
        int32_t i,
        const MethodInfo *method)
{
  System_Int64_array *otherUsedEquipUserSvtId; // x22
  CharaGraphEquipListViewItem_o *v8; // x23

  if ( (byte_4B173A9 & 1) == 0 )
  {
    sub_1BCAFF8(&CharaGraphGrandEquipListViewItem_TypeInfo, elem);
    byte_4B173A9 = 1;
  }
  otherUsedEquipUserSvtId = this->fields.otherUsedEquipUserSvtId;
  v8 = (CharaGraphEquipListViewItem_o *)sub_1BCB244(CharaGraphGrandEquipListViewItem_TypeInfo);
  CharaGraphEquipListViewItem___ctor(v8, i, (CharaGraphListViewPatternBase_o *)this, elem, otherUsedEquipUserSvtId, 0LL);
  return (CharaGraphGrandEquipListViewItem_o *)v8;
}