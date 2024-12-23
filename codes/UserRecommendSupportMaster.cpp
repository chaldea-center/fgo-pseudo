void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B679BD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__, method);
    byte_4B679BD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B679BE & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__,
      userId);
    byte_4B679BE = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int max_length; // w8
  unsigned int v39; // w24
  Il2CppObject *v40; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v43; // q0
  Il2CppClass *v44; // x8
  char *v45; // x8
  __int128 v46; // q0
  System_Int64_array *v47; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  EquipTargetInfo_o *v54; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+40h] [xbp-80h]

  if ( (byte_4B679BB & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___, v6);
    sub_1BE4ACC(&EquipTargetInfo_TypeInfo, v7);
    sub_1BE4ACC(&long___TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo, v14);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BE4ACC(&UserRecommendSupportEntity_TypeInfo, v16);
    byte_4B679BB = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v20 = (DataMasterBase_o *)Master_object;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               list,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
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
    v26 = (UserRecommendSupportEntity_o *)sub_1BE4D18(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_41123156(v26, i, v27);
    if ( !v17 )
      goto LABEL_44;
    items = v17->fields._items;
    v35 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v26,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v26;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v26, v28, v29, v30, v31, v32, v33);
    }
    if ( !v23 )
      goto LABEL_44;
    max_length = v23->max_length;
    if ( max_length >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        if ( v39 >= max_length )
          goto LABEL_45;
        v40 = v23->m_Items[v39];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v17,
                          i,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v40 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v40[1].monitor) )
          break;
        max_length = v23->max_length;
        if ( (int)++v39 >= max_length )
          goto LABEL_41;
      }
      klass = v40[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v43 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v58.fields.fakeValue = v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v57 = v58;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v57, 0LL) )
        {
          Item = sub_1BE4B74(long___TypeInfo, 1LL);
          v44 = v40[3].klass;
          if ( !v44 )
            goto LABEL_44;
          v45 = (char *)v44->_1.properties;
          if ( !v45 )
            goto LABEL_44;
          v46 = *(_OWORD *)(v45 + 40);
          v47 = (System_Int64_array *)Item;
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(v45 + 24);
          *(_OWORD *)&v58.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v56 = v58;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v56, 0LL);
          if ( !v47 )
            goto LABEL_44;
          if ( !v47->max_length )
LABEL_45:
            sub_1BE4D30(Item, v22);
          v47->m_Items[0] = Item;
          if ( !v20 )
            goto LABEL_44;
          Item = DataMasterBase__isEntityExistsFromId(v20, v47, 0LL);
          klass = v40[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v54 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v54;
            sub_1BE4A70((PartyOrganizationUtility_o *)&klass->_1.properties, (int64_t)v54, v48, v49, v50, v51, v52, v53);
            System_Collections_Generic_List_object___set_Item(
              v17,
              i,
              v40,
              (const MethodInfo_35EBFA8 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v40[3].klass;
        }
      }
      v54 = (EquipTargetInfo_o *)sub_1BE4D18(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v54, 0LL);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v17 )
LABEL_44:
    sub_1BE4D28(Item, v22);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v17,
                                               (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
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
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Object_array *Entitys_object; // x20
  System_Func_object__bool__o *v16; // x0
  System_Func_T__bool__o *v17; // x21
  __int64 *v18; // x8

  if ( (byte_4B679BC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_UserRecommendSupportEntity___, userSvtId);
    sub_1BE4ACC(&Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___, v7);
    sub_1BE4ACC(&System_Func_UserRecommendSupportEntity__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v9);
    sub_1BE4ACC(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__, v10);
    sub_1BE4ACC(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_4B679BC = 1;
  }
  v12 = (Il2CppObject *)sub_1BE4D18(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  v12[1].klass = (Il2CppClass *)userSvtId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2F599A4 *)Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
  v16 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v17 = (System_Func_T__bool__o *)v16;
  if ( isEquip )
    v18 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v18 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v16, v12, *v18, 0LL);
  return BasicHelper__Any_object__49561896(
           Entitys_object,
           v17,
           (const MethodInfo_2F44128 *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B679BF & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__,
      entity);
    byte_4B679BF = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1BE4D28(this, 0LL);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_1BE4D28(this, 0LL);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}