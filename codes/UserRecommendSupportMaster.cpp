void UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593965C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
    byte_593965C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    520,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593965D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
    byte_593965D = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v10; // x23
  const MethodInfo *v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int max_length; // w8
  __int64 v23; // x24
  Il2CppObject *v24; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v27; // q1
  Il2CppClass *v28; // x8
  char *v29; // x8
  __int64 v30; // x24
  __int128 v31; // q1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  EquipTargetInfo_o *v38; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-80h]

  if ( (byte_593965A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
    sub_21FFC50(&EquipTargetInfo_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserRecommendSupportEntity_TypeInfo);
    byte_593965A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         v5,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
  for ( i = 0; ; ++i )
  {
    Item = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
      Item = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Item + 184) + 188LL) )
      break;
    v10 = (UserRecommendSupportEntity_o *)sub_21FFEBC(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_50078128(v10, i, v11);
    if ( !v3 )
      goto LABEL_44;
    items = v3->fields._items;
    v19 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v10,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
    }
    if ( !v7 )
      goto LABEL_44;
    max_length = v7->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v23 >= max_length )
          goto LABEL_45;
        v24 = v7->m_Items[v23];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v3,
                          i,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v24 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v24[1].monitor) )
          break;
        max_length = v7->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_41;
      }
      klass = v24[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v27 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v43.fields.fakeValue = v27;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
        v42 = v43;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v42, 0) )
        {
          Item = sub_21FFD10(long___TypeInfo, 1);
          v28 = v24[3].klass;
          if ( !v28 )
            goto LABEL_44;
          v29 = (char *)v28->_1.properties;
          if ( !v29 )
            goto LABEL_44;
          v30 = Item;
          v31 = *(_OWORD *)(v29 + 40);
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v29 + 24);
          *(_OWORD *)&v43.fields.fakeValue = v31;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
          v41 = v43;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v41, 0);
          if ( !v30 )
            goto LABEL_44;
          if ( !*(_DWORD *)(v30 + 24) )
LABEL_45:
            sub_21FFED4(Item);
          *(_QWORD *)(v30 + 32) = Item;
          Item = (__int64)Master_object;
          if ( !Master_object )
            goto LABEL_44;
          Item = DataMasterBase_object__object__long___isEntityExistsFromId(
                   Master_object,
                   (System_Int64_array *)v30,
                   (const MethodInfo_3EDF0C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          klass = v24[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v38 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v38;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&klass->_1.properties,
              (int32_t)v38,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            System_Collections_Generic_List_object___set_Item(
              v3,
              i,
              v24,
              (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v24[3].klass;
        }
      }
      v38 = (EquipTargetInfo_o *)sub_21FFEBC(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v38, 0);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v3 )
LABEL_44:
    sub_21FFECC(Item, v6);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v3,
                                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
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
  const MethodInfo_3EE13C0 *v10; // x1
  System_Object_array *Entitys; // x20
  System_Func_object__bool__o *v12; // x0
  intptr_t *v13; // x8
  System_Func_T__bool__o *v14; // x19

  if ( (byte_593965B & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_UserRecommendSupportEntity___);
    sub_21FFC50(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__);
    sub_21FFC50(&System_Func_UserRecommendSupportEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__);
    sub_21FFC50(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__);
    sub_21FFC50(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
    byte_593965B = 1;
  }
  v7 = (Il2CppObject *)sub_21FFEBC(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v10 = (const MethodInfo_3EE13C0 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__;
  v7[1].klass = (Il2CppClass *)userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys((DataMasterBase_TMaster__TEntity__PKType__o *)this, v10);
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  if ( isEquip )
    v13 = (intptr_t *)&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v13 = (intptr_t *)&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  v14 = (System_Func_T__bool__o *)v12;
  System_Func_object__bool____ctor(v12, v7, *v13, 0);
  return BasicHelper__Any_object__58575580(
           Entitys,
           v14,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593965E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
    byte_593965E = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_21FFECC(this, 0);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_21FFECC(this, 0);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}