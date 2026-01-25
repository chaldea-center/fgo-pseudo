void UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF5A5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
    byte_4CEF5A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF5A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
    byte_4CEF5A6 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v12; // x23
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int max_length; // w8
  unsigned int v25; // w24
  Il2CppObject *v26; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v29; // q0
  Il2CppClass *v30; // x8
  char *v31; // x8
  __int128 v32; // q0
  __int64 v33; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  EquipTargetInfo_o *v40; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-80h]

  if ( (byte_4CEF5A3 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
    sub_1C7BAE8(&EquipTargetInfo_TypeInfo);
    sub_1C7BAE8(&long___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&UserRecommendSupportEntity_TypeInfo);
    byte_4CEF5A3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              list,
                                                              (const MethodInfo_319E9E0 *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v7,
         (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
  for ( i = 0; ; ++i )
  {
    Item = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Item = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Item + 184) + 188LL) )
      break;
    v12 = (UserRecommendSupportEntity_o *)sub_1C7BD34(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_43662928(v12, i, v13);
    if ( !v3 )
      goto LABEL_44;
    items = v3->fields._items;
    v21 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v12,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v12;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
    }
    if ( !v9 )
      goto LABEL_44;
    max_length = v9->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= max_length )
          goto LABEL_45;
        v26 = v9->m_Items[v25];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v3,
                          i,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v26 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v26[1].monitor) )
          break;
        max_length = v9->max_length;
        if ( (int)++v25 >= max_length )
          goto LABEL_41;
      }
      klass = v26[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v29 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v44.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v43 = v44;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v43, 0) )
        {
          Item = sub_1C7BB90(long___TypeInfo, 1);
          v30 = v26[3].klass;
          if ( !v30 )
            goto LABEL_44;
          v31 = (char *)v30->_1.properties;
          if ( !v31 )
            goto LABEL_44;
          v32 = *(_OWORD *)(v31 + 40);
          v33 = Item;
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v31 + 24);
          *(_OWORD *)&v44.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v42 = v44;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v42, 0);
          if ( !v33 )
            goto LABEL_44;
          if ( !*(_DWORD *)(v33 + 24) )
LABEL_45:
            sub_1C7BD48(Item);
          *(_QWORD *)(v33 + 32) = Item;
          if ( !v6 )
            goto LABEL_44;
          Item = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v6,
                   (System_Int64_array *)v33,
                   (const MethodInfo_342FE34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          klass = v26[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v40 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v40;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&klass->_1.properties,
              (int32_t)v40,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            System_Collections_Generic_List_object___set_Item(
              v3,
              i,
              v26,
              (const MethodInfo_383EB80 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v26[3].klass;
        }
      }
      v40 = (EquipTargetInfo_o *)sub_1C7BD34(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v40, 0);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v3 )
LABEL_44:
    sub_1C7BD40(Item, v8);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v3,
                                               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


bool UserRecommendSupportMaster__IsSettingServant(
        UserRecommendSupportMaster_o *this,
        int64_t userSvtId,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *Entitys; // x20
  System_Func_object__bool__o *v11; // x0
  System_Func_T__bool__o *v12; // x21
  intptr_t *v13; // x8

  if ( (byte_4CEF5A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_UserRecommendSupportEntity___);
    sub_1C7BAE8(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__);
    sub_1C7BAE8(&System_Func_UserRecommendSupportEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__);
    sub_1C7BAE8(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__);
    sub_1C7BAE8(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CEF5A4 = 1;
  }
  v7 = (Il2CppObject *)sub_1C7BD34(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  v7[1].klass = (Il2CppClass *)userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_3432038 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__);
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v12 = (System_Func_T__bool__o *)v11;
  if ( isEquip )
    v13 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v13 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v11, v7, *v13, 0);
  return BasicHelper__Any_object__51746772(
           Entitys,
           v12,
           (const MethodInfo_31597D4 *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF5A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
    byte_4CEF5A7 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
}


void UserRecommendSupportMaster___c__DisplayClass1_0___ctor(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__0(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_1C7BD40(this, 0);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}