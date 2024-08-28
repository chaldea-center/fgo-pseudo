void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A20869 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__, method);
    byte_4A20869 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2086A & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__,
      userId);
    byte_4A2086A = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_30F8AB8 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *__fastcall UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  System_Object_array *v23; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v26; // x23
  const MethodInfo *v27; // x2
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int max_length; // w8
  unsigned int v35; // w24
  Il2CppObject *v36; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v39; // q0
  Il2CppClass *v40; // x8
  char *v41; // x8
  __int128 v42; // q0
  System_Int64_array *v43; // x24
  int32_t v44; // w2
  int32_t v45; // w3
  EquipTargetInfo_o *v46; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_4A20867 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___, v5);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___, v6);
    sub_1B715CC(&EquipTargetInfo_TypeInfo, v7);
    sub_1B715CC(&long___TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__, v13);
    sub_1B715CC(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo, v14);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B715CC(&UserRecommendSupportEntity_TypeInfo, v16);
    byte_4A20867 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v20 = (DataMasterBase_o *)Master_object;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               list,
                                                               (const MethodInfo_2E8546C *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
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
    v26 = (UserRecommendSupportEntity_o *)sub_1B71818(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_39948144(v26, i, v27);
    if ( !v17 )
      goto LABEL_44;
    items = v17->fields._items;
    v31 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v26,
        *(const MethodInfo_34D0260 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v26;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
    }
    if ( !v23 )
      goto LABEL_44;
    max_length = v23->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= max_length )
          goto LABEL_45;
        v36 = v23->m_Items[v35];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v17,
                          i,
                          (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v36 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v36[1].monitor) )
          break;
        max_length = v23->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_41;
      }
      klass = v36[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v39 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v50.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v49 = v50;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v49, 0LL) )
        {
          Item = sub_1B71674(long___TypeInfo, 1LL);
          v40 = v36[3].klass;
          if ( !v40 )
            goto LABEL_44;
          v41 = (char *)v40->_1.properties;
          if ( !v41 )
            goto LABEL_44;
          v42 = *(_OWORD *)(v41 + 40);
          v43 = (System_Int64_array *)Item;
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v41 + 24);
          *(_OWORD *)&v50.fields.fakeValue = v42;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v48, 0LL);
          if ( !v43 )
            goto LABEL_44;
          if ( !v43->max_length )
LABEL_45:
            sub_1B71830(Item, v22);
          v43->m_Items[0] = Item;
          if ( !v20 )
            goto LABEL_44;
          Item = DataMasterBase__isEntityExistsFromId(v20, v43, 0LL);
          klass = v36[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v46 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v46;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&klass->_1.properties, (int32_t)v46, v44, v45);
            System_Collections_Generic_List_object___set_Item(
              v17,
              i,
              v36,
              (const MethodInfo_34CFFE4 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v36[3].klass;
        }
      }
      v46 = (EquipTargetInfo_o *)sub_1B71818(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v46, 0LL);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v17 )
LABEL_44:
    sub_1B71828(Item, v22);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v17,
                                               (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


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
  UserRecommendSupportMaster___c__DisplayClass1_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Object_array *Entitys_object; // x20
  System_Func_object__bool__o *v16; // x0
  System_Func_T__bool__o *v17; // x21
  __int64 *v18; // x8

  if ( (byte_4A20868 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_UserRecommendSupportEntity___, userSvtId);
    sub_1B715CC(&Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___, v7);
    sub_1B715CC(&System_Func_UserRecommendSupportEntity__bool__TypeInfo, v8);
    sub_1B715CC(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v9);
    sub_1B715CC(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__, v10);
    sub_1B715CC(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_4A20868 = 1;
  }
  v12 = (UserRecommendSupportMaster___c__DisplayClass1_0_o *)sub_1B71818(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  UserRecommendSupportMaster___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1B71828(v13, v14);
  v12->fields.userSvtId = userSvtId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E5BC7C *)Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
  v16 = (System_Func_object__bool__o *)sub_1B71818(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v17 = (System_Func_T__bool__o *)v16;
  if ( isEquip )
    v18 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v18 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v16, (Il2CppObject *)v12, *v18, 0LL);
  return BasicHelper__Any_object__48523356(
           Entitys_object,
           v17,
           (const MethodInfo_2E4685C *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A2086B & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__,
      entity);
    byte_4A2086B = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1B71828(this, 0LL);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, 0LL) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return UserRecommendSupportEntity__GetUserSvtId(x, 0LL) == this->fields.userSvtId;
}