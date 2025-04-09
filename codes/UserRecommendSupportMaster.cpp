void __fastcall UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBCF3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__, method);
    byte_49BBCF3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *__fastcall UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBCF4 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__,
      userId);
    byte_49BBCF4 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31A2454 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
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
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Master_object; // x0
  System_Collections_IEnumerable_o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  System_Object_array *v24; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v27; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int max_length; // w8
  unsigned int v36; // w24
  Il2CppObject *v37; // x23
  Il2CppClass *klass; // x24
  char *properties; // x8
  __int128 v40; // q0
  Il2CppClass *v41; // x8
  char *v42; // x8
  __int128 v43; // q0
  System_Int64_array *v44; // x24
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  EquipTargetInfo_o *v47; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-80h]

  if ( (byte_49BBCF1 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___, v7);
    sub_1B4CF90(&EquipTargetInfo_TypeInfo, v8);
    sub_1B4CF90(&long___TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo, v15);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B4CF90(&UserRecommendSupportEntity_TypeInfo, v17);
    byte_49BBCF1 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               list,
                                                               (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v24 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
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
    v27 = (UserRecommendSupportEntity_o *)sub_1B4D1DC(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_40763060(v27, i, v28);
    if ( !v18 )
      goto LABEL_44;
    items = v18->fields._items;
    v32 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v18->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        (Il2CppObject *)v27,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v27;
      sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
    }
    if ( !v24 )
      goto LABEL_44;
    max_length = v24->max_length;
    if ( max_length >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= max_length )
          goto LABEL_45;
        v37 = v24->m_Items[v36];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v18,
                          i,
                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v37 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v37[1].monitor) )
          break;
        max_length = v24->max_length;
        if ( (int)++v36 >= max_length )
          goto LABEL_41;
      }
      klass = v37[3].klass;
      if ( !klass )
        goto LABEL_44;
      properties = (char *)klass->_1.properties;
      if ( properties )
      {
        v40 = *(_OWORD *)(properties + 40);
        *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
        *(_OWORD *)&v51.fields.fakeValue = v40;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v50 = v51;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v50, 0LL) )
        {
          Item = sub_1B4D038(long___TypeInfo, 1LL);
          v41 = v37[3].klass;
          if ( !v41 )
            goto LABEL_44;
          v42 = (char *)v41->_1.properties;
          if ( !v42 )
            goto LABEL_44;
          v43 = *(_OWORD *)(v42 + 40);
          v44 = (System_Int64_array *)Item;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v42 + 24);
          *(_OWORD *)&v51.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v51;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v49, 0LL);
          if ( !v44 )
            goto LABEL_44;
          if ( !v44->max_length )
LABEL_45:
            sub_1B4D1F4(Item, v23);
          v44->m_Items[0] = Item;
          if ( !v21 )
            goto LABEL_44;
          Item = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v21,
                   v44,
                   (const MethodInfo_319F4D4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          klass = v37[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v47 = (EquipTargetInfo_o *)klass->_1.properties;
LABEL_40:
            klass->_1.properties = v47;
            sub_1B4CF34((CGThumbnailListItem_o *)&klass->_1.properties, (int32_t)v47, v45, v46);
            System_Collections_Generic_List_object___set_Item(
              v18,
              i,
              v37,
              (const MethodInfo_357FF60 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = v37[3].klass;
        }
      }
      v47 = (EquipTargetInfo_o *)sub_1B4D1DC(EquipTargetInfo_TypeInfo);
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
    sub_1B4D1EC(Item, v23);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v18,
                                               (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
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
  __int64 v15; // x0
  System_Object_array *v16; // x20
  System_Func_object__bool__o *v17; // x0
  System_Func_T__bool__o *v18; // x21
  __int64 *v19; // x8

  if ( (byte_49BBCF2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_UserRecommendSupportEntity___, userSvtId);
    sub_1B4CF90(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys_UserRecommendSupportEntity___,
      v7);
    sub_1B4CF90(&System_Func_UserRecommendSupportEntity__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v9);
    sub_1B4CF90(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__, v10);
    sub_1B4CF90(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_49BBCF2 = 1;
  }
  v12 = (Il2CppObject *)sub_1B4D1DC(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1B4D1EC(v13, v14);
  v12[1].klass = (Il2CppClass *)userSvtId;
  v15 = sub_1B4D0C4(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys_UserRecommendSupportEntity___
                      + 40)));
  v16 = (System_Object_array *)(*(__int64 (__fastcall **)(UserRecommendSupportMaster_o *, __int64))(v15 + 8))(this, v15);
  v17 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v18 = (System_Func_T__bool__o *)v17;
  if ( isEquip )
    v19 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v19 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v17, v12, *v19, 0LL);
  return BasicHelper__Any_object__49202496(
           v16,
           v18,
           (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool __fastcall UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBCF5 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__,
      entity);
    byte_49BBCF5 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1B4D1EC(this, 0LL);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool __fastcall UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_1B4D1EC(this, 0LL);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}