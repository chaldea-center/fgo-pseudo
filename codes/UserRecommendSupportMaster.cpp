void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD192 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__, method);
    byte_49FD192 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FD193 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__,
      userId);
    byte_49FD193 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_30D41FC *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *__fastcall UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Object_array *v25; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v28; // x23
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int max_length; // w8
  unsigned int v37; // w24
  Il2CppObject *v38; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v41; // q0
  Il2CppClass *v42; // x8
  char *v43; // x8
  __int128 v44; // q0
  System_Int64_array *v45; // x24
  int32_t v46; // w3
  EquipTargetInfo_o *v47; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-80h]

  if ( (byte_49FD190 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___, v7);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v8);
    sub_1B640C8(&long___TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__, v14);
    sub_1B640C8(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&UserRecommendSupportEntity_TypeInfo, v17);
    byte_49FD190 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v21 = (DataMasterBase_o *)Master_object;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
  for ( i = 0; ; ++i )
  {
    Item = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Item = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Item + 184) + 172LL) )
      break;
    v28 = (UserRecommendSupportEntity_o *)sub_1B64314(UserRecommendSupportEntity_TypeInfo, v23, v24);
    UserRecommendSupportEntity___ctor_39828652(v28, i, v29);
    if ( !v18 )
      goto LABEL_44;
    items = v18->fields._items;
    v33 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v18->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        (Il2CppObject *)v28,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
    }
    if ( !v25 )
      goto LABEL_44;
    max_length = v25->max_length;
    if ( max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= max_length )
          goto LABEL_45;
        v38 = v25->m_Items[v37];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v18,
                          i,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v38 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v38[1].monitor) )
          break;
        max_length = v25->max_length;
        if ( (int)++v37 >= max_length )
          goto LABEL_41;
      }
      klass = v38[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v41 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v51.fields.fakeValue = v41;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v50 = v51;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL) )
        {
          Item = sub_1B64170(long___TypeInfo, 1LL);
          v42 = v38[3].klass;
          if ( !v42 )
            goto LABEL_44;
          v43 = (char *)v42->_1.properties;
          if ( !v43 )
            goto LABEL_44;
          v44 = *(_OWORD *)(v43 + 40);
          v45 = (System_Int64_array *)Item;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v43 + 24);
          *(_OWORD *)&v51.fields.fakeValue = v44;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v51;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v45 )
            goto LABEL_44;
          if ( !v45->max_length )
LABEL_45:
            sub_1B6432C(Item, v23);
          v45->m_Items[0] = Item;
          if ( !v21 )
            goto LABEL_44;
          Item = DataMasterBase__isEntityExistsFromId(v21, v45, 0LL);
          klass = v38[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v47 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v47;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&klass->_1.properties, (int32_t)v47, v24, v46);
            System_Collections_Generic_List_object___set_Item(
              v18,
              i,
              v38,
              (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v38[3].klass;
        }
      }
      v47 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v23, v24);
      EquipTargetInfo___ctor(v47, 0LL);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v18 )
LABEL_44:
    sub_1B64324(Item);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v18,
                                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserRecommendSupportMaster__IsSettingServant(
        UserRecommendSupportMaster_o *this,
        int64_t userSvtId,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  System_Object_array *Entitys_object; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_object__bool__o *v17; // x0
  System_Func_T__bool__o *v18; // x21
  __int64 *v19; // x8

  if ( (byte_49FD191 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_UserRecommendSupportEntity___, userSvtId);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___, v7);
    sub_1B640C8(&System_Func_UserRecommendSupportEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v9);
    sub_1B640C8(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__, v10);
    sub_1B640C8(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_49FD191 = 1;
  }
  v12 = (Il2CppObject *)sub_1B64314(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, userSvtId, isEquip);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  v12[1].klass = (Il2CppClass *)userSvtId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
  v17 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserRecommendSupportEntity__bool__TypeInfo, v15, v16);
  v18 = (System_Func_T__bool__o *)v17;
  if ( isEquip )
    v19 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v19 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v17, v12, *v19, 0LL);
  return BasicHelper__Any_object__48384284(
           Entitys_object,
           v18,
           (const MethodInfo_2E2491C *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FD194 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__,
      entity);
    byte_49FD194 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
}


void __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___ctor(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__0(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_1B64324(this);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}