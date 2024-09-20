void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF0B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
    byte_4A5BF0B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BF0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
    byte_4A5BF0C = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *__fastcall UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v12; // x23
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int max_length; // w8
  unsigned int v21; // w24
  Il2CppObject *v22; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v25; // q0
  Il2CppClass *v26; // x8
  char *v27; // x8
  __int128 v28; // q0
  System_Int64_array *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  EquipTargetInfo_o *v32; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5BF09 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserRecommendSupportEntity_TypeInfo);
    byte_4A5BF09 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v6 = (DataMasterBase_o *)Master_object;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              list,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v7,
         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
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
    v12 = (UserRecommendSupportEntity_o *)sub_1B887FC(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_40160328(v12, i, v13);
    if ( !v3 )
      goto LABEL_44;
    items = v3->fields._items;
    v17 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v12,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
    }
    if ( !v9 )
      goto LABEL_44;
    max_length = v9->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_45;
        v22 = v9->m_Items[v21];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v3,
                          i,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v22 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v22[1].monitor) )
          break;
        max_length = v9->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_41;
      }
      klass = v22[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v25 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v36.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v36;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v35, 0LL) )
        {
          Item = sub_1B88658(long___TypeInfo, 1LL);
          v26 = v22[3].klass;
          if ( !v26 )
            goto LABEL_44;
          v27 = (char *)v26->_1.properties;
          if ( !v27 )
            goto LABEL_44;
          v28 = *(_OWORD *)(v27 + 40);
          v29 = (System_Int64_array *)Item;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v27 + 24);
          *(_OWORD *)&v36.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v34 = v36;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v34, 0LL);
          if ( !v29 )
            goto LABEL_44;
          if ( !v29->max_length )
LABEL_45:
            sub_1B88814(Item, v8);
          v29->m_Items[0] = Item;
          if ( !v6 )
            goto LABEL_44;
          Item = DataMasterBase__isEntityExistsFromId(v6, v29, 0LL);
          klass = v22[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v32 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->_1.properties, (int32_t)v32, v30, v31);
            System_Collections_Generic_List_object___set_Item(
              v3,
              i,
              v22,
              (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v22[3].klass;
        }
      }
      v32 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v32, 0LL);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v3 )
LABEL_44:
    sub_1B8880C(Item, v8);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v3,
                                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


bool __fastcall UserRecommendSupportMaster__IsSettingServant(
        UserRecommendSupportMaster_o *this,
        int64_t userSvtId,
        bool isEquip,
        const MethodInfo *method)
{
  UserRecommendSupportMaster___c__DisplayClass1_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *Entitys_object; // x20
  System_Func_object__bool__o *v11; // x0
  System_Func_T__bool__o *v12; // x21
  __int64 *v13; // x8

  if ( (byte_4A5BF0A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserRecommendSupportEntity___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
    sub_1B885B0(&System_Func_UserRecommendSupportEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__);
    sub_1B885B0(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__);
    sub_1B885B0(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5BF0A = 1;
  }
  v7 = (UserRecommendSupportMaster___c__DisplayClass1_0_o *)sub_1B887FC(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  UserRecommendSupportMaster___c__DisplayClass1_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v7->fields.userSvtId = userSvtId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v12 = (System_Func_T__bool__o *)v11;
  if ( isEquip )
    v13 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v13 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v13, 0LL);
  return BasicHelper__Any_object__48672124(
           Entitys_object,
           v12,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BF0D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
    byte_4A5BF0D = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1B8880C(this, 0LL);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, 0LL) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return UserRecommendSupportEntity__GetUserSvtId(x, 0LL) == this->fields.userSvtId;
}