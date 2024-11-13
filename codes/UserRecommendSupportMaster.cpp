void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16FC1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__,
      method,
      v2);
    byte_4B16FC1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16FC2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&idx);
    byte_4B16FC2 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, 0LL);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
}


UserRecommendSupportEntity_array *__fastcall UserRecommendSupportMaster__GetRecommendSupportDeck(
        UserRecommendSupportMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  __int64 v41; // x3
  System_Object_array *v42; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v45; // x23
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  int max_length; // w8
  unsigned int v57; // w24
  Il2CppObject *v58; // x23
  PartyOrganizationUtility_o *klass; // x24
  PartyOrganizationUtility_c *v60; // x8
  __int128 v61; // q0
  Il2CppClass *v62; // x8
  char *properties; // x8
  __int128 v64; // q0
  System_Int64_array *v65; // x24
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  EquipTargetInfo_o *v70; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+40h] [xbp-80h]

  if ( (byte_4B16FBF & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___, v11, v12);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&long___TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&UserRecommendSupportEntity_TypeInfo, v31, v32);
    byte_4B16FBF = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v37 = (DataMasterBase_o *)Master_object;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v42 = System_Linq_Enumerable__ToArray_object_(
          v38,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
  for ( i = 0; ; ++i )
  {
    Item = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
      Item = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Item + 184) + 172LL) )
      break;
    v45 = (UserRecommendSupportEntity_o *)sub_1BCAA2C(UserRecommendSupportEntity_TypeInfo, v39, v40, v41);
    UserRecommendSupportEntity___ctor_40891340(v45, i, 0LL);
    if ( !v33 )
      goto LABEL_44;
    items = v33->fields._items;
    v53 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v33->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v45,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      v33->fields._size = size + 1;
      v55[4] = (Il2CppClass *)v45;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v45, v46, v47, v48, v49, v50, v51);
    }
    if ( !v42 )
      goto LABEL_44;
    max_length = v42->max_length;
    if ( max_length >= 1 )
    {
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= max_length )
          goto LABEL_45;
        v58 = v42->m_Items[v57];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v33,
                          i,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v58 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v58[1].monitor) )
          break;
        max_length = v42->max_length;
        if ( (int)++v57 >= max_length )
          goto LABEL_41;
      }
      klass = (PartyOrganizationUtility_o *)v58[3].klass;
      if ( !klass )
        goto LABEL_44;
      v60 = klass[1].klass;
      if ( v60 )
      {
        v61 = *(_OWORD *)&v60->_1.byval_arg.bits;
        *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&v60->_1.namespaze;
        *(_OWORD *)&v74.fields.fakeValue = v61;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
        v73 = v74;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v73, 0LL) )
        {
          Item = sub_1BCA888(long___TypeInfo, 1LL);
          v62 = v58[3].klass;
          if ( !v62 )
            goto LABEL_44;
          properties = (char *)v62->_1.properties;
          if ( !properties )
            goto LABEL_44;
          v64 = *(_OWORD *)(properties + 40);
          v65 = (System_Int64_array *)Item;
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
          *(_OWORD *)&v74.fields.fakeValue = v64;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
          v72 = v74;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v72, 0LL);
          if ( !v65 )
            goto LABEL_44;
          if ( !v65->max_length )
LABEL_45:
            sub_1BCAA44(Item, v39);
          v65->m_Items[0] = Item;
          if ( !v37 )
            goto LABEL_44;
          Item = DataMasterBase__isEntityExistsFromId(v37, v65, 0LL);
          klass = (PartyOrganizationUtility_o *)v58[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v70 = (EquipTargetInfo_o *)klass[1].klass;
LABEL_40:
            klass[1].klass = (PartyOrganizationUtility_c *)v70;
            sub_1BCA784(klass + 1, (int64_t)v70, v40, v41, v66, v67, v68, v69);
            System_Collections_Generic_List_object___set_Item(
              v33,
              i,
              v58,
              (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = (PartyOrganizationUtility_o *)v58[3].klass;
        }
      }
      v70 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v39, v40, v41);
      EquipTargetInfo___ctor(v70, 0LL);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v33 )
LABEL_44:
    sub_1BCAA3C(Item, v39);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v33,
                                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserRecommendSupportMaster__IsSettingServant(
        UserRecommendSupportMaster_o *this,
        int64_t userSvtId,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_Object_array *Entitys_object; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__bool__o *v24; // x0
  System_Func_T__bool__o *v25; // x21
  __int64 *v26; // x8

  if ( (byte_4B16FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserRecommendSupportEntity___, userSvtId, isEquip);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_UserRecommendSupportEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v11, v12);
    sub_1BCA7E0(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__, v13, v14);
    sub_1BCA7E0(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B16FC0 = 1;
  }
  v17 = (Il2CppObject *)sub_1BCAA2C(
                          UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo,
                          userSvtId,
                          isEquip,
                          method);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  v17[1].klass = (Il2CppClass *)userSvtId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_UserRecommendSupportEntity___);
  v24 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_UserRecommendSupportEntity__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  v25 = (System_Func_T__bool__o *)v24;
  if ( isEquip )
    v26 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v26 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v24, v17, *v26, 0LL);
  return BasicHelper__Any_object__49274176(
           Entitys_object,
           v25,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16FC3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16FC3 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(this, 0LL);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, 0LL) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return UserRecommendSupportEntity__GetUserSvtId(x, 0LL) == this->fields.userSvtId;
}