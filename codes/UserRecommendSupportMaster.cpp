void UserRecommendSupportMaster___ctor(UserRecommendSupportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38918 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
    byte_4C38918 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserRecommendSupportEntity_o *UserRecommendSupportMaster__GetEntity(
        UserRecommendSupportMaster_o *this,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38919 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
    byte_4C38919 = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, *(const MethodInfo **)&idx);
  return (UserRecommendSupportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__GetEntity__);
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
  System_Object_array *v8; // x21
  int32_t i; // w22
  __int64 Item; // x0
  UserRecommendSupportEntity_o *v11; // x23
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  int max_length; // w8
  unsigned int v20; // w24
  Il2CppObject *v21; // x23
  CGThumbnailListItem_o *klass; // x24
  CGThumbnailListItem_c *v23; // x8
  __int128 v24; // q0
  Il2CppClass *v25; // x8
  char *properties; // x8
  __int128 v27; // q0
  __int64 v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  EquipTargetInfo_o *v31; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-80h]

  if ( (byte_4C38916 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
    sub_1C32C20(&EquipTargetInfo_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
    sub_1C32C20(&System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&UserRecommendSupportEntity_TypeInfo);
    byte_4C38916 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserRecommendSupportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              list,
                                                              (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_UserRecommendSupportEntity___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         v7,
         (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_UserRecommendSupportEntity___);
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
    v11 = (UserRecommendSupportEntity_o *)sub_1C32E6C(UserRecommendSupportEntity_TypeInfo);
    UserRecommendSupportEntity___ctor_43023852(v11, i, v12);
    if ( !v3 )
      goto LABEL_44;
    items = v3->fields._items;
    v16 = Method_System_Collections_Generic_List_UserRecommendSupportEntity__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_44;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v11,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v11;
      sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v11, v13, v14);
    }
    if ( !v8 )
      goto LABEL_44;
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= max_length )
          goto LABEL_45;
        v21 = v8->m_Items[v20];
        Item = (__int64)System_Collections_Generic_List_object___get_Item(
                          v3,
                          i,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__get_Item__);
        if ( !Item || !v21 )
          goto LABEL_44;
        if ( *(_DWORD *)(Item + 24) == LODWORD(v21[1].monitor) )
          break;
        max_length = v8->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_41;
      }
      klass = (CGThumbnailListItem_o *)v21[3].klass;
      if ( !klass )
        goto LABEL_44;
      v23 = klass[1].klass;
      if ( v23 )
      {
        v24 = *(_OWORD *)&v23->_1.byval_arg.bits;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v23->_1.namespaze;
        *(_OWORD *)&v35.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v34 = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v34, 0) )
        {
          Item = sub_1C32CC8(long___TypeInfo, 1);
          v25 = v21[3].klass;
          if ( !v25 )
            goto LABEL_44;
          properties = (char *)v25->_1.properties;
          if ( !properties )
            goto LABEL_44;
          v27 = *(_OWORD *)(properties + 40);
          v28 = Item;
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(properties + 24);
          *(_OWORD *)&v35.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v33 = v35;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v33, 0);
          if ( !v28 )
            goto LABEL_44;
          if ( !*(_DWORD *)(v28 + 24) )
LABEL_45:
            sub_1C32E84(Item);
          *(_QWORD *)(v28 + 32) = Item;
          if ( !v6 )
            goto LABEL_44;
          Item = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v6,
                   (System_Int64_array *)v28,
                   (const MethodInfo_3398370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          klass = (CGThumbnailListItem_o *)v21[3].klass;
          if ( (Item & 1) != 0 )
          {
            if ( !klass )
              goto LABEL_44;
            v31 = (EquipTargetInfo_o *)klass[1].klass;
LABEL_40:
            klass[1].klass = (CGThumbnailListItem_c *)v31;
            sub_1C32BC4(klass + 1, (int32_t)v31, v29, v30);
            System_Collections_Generic_List_object___set_Item(
              v3,
              i,
              v21,
              (const MethodInfo_3798540 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__set_Item__);
            continue;
          }
        }
        else
        {
          klass = (CGThumbnailListItem_o *)v21[3].klass;
        }
      }
      v31 = (EquipTargetInfo_o *)sub_1C32E6C(EquipTargetInfo_TypeInfo);
      EquipTargetInfo___ctor(v31, 0);
      if ( !klass )
        goto LABEL_44;
      goto LABEL_40;
    }
LABEL_41:
    ;
  }
  if ( !v3 )
LABEL_44:
    sub_1C32E7C(Item);
  return (UserRecommendSupportEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v3,
                                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserRecommendSupportEntity__ToArray__);
}


bool UserRecommendSupportMaster__IsSettingServant(
        UserRecommendSupportMaster_o *this,
        int64_t userSvtId,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  System_Object_array *Entitys; // x20
  System_Func_object__bool__o *v10; // x0
  System_Func_T__bool__o *v11; // x21
  intptr_t *v12; // x8

  if ( (byte_4C38917 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_UserRecommendSupportEntity___);
    sub_1C32C20(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__);
    sub_1C32C20(&System_Func_UserRecommendSupportEntity__bool__TypeInfo);
    sub_1C32C20(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__);
    sub_1C32C20(&Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__);
    sub_1C32C20(&UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C38917 = 1;
  }
  v7 = (Il2CppObject *)sub_1C32E6C(UserRecommendSupportMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v7[1].klass = (Il2CppClass *)userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_339A574 *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__getEntitys__);
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserRecommendSupportEntity__bool__TypeInfo);
  v11 = (System_Func_T__bool__o *)v10;
  if ( isEquip )
    v12 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__0__;
  else
    v12 = &Method_UserRecommendSupportMaster___c__DisplayClass1_0__IsSettingServant_b__1__;
  System_Func_object__bool____ctor(v10, v7, *v12, 0);
  return BasicHelper__Any_object__51144764(
           Entitys,
           v11,
           (const MethodInfo_30C683C *)Method_BasicHelper_Any_UserRecommendSupportEntity___);
}


bool UserRecommendSupportMaster__TryGetEntity(
        UserRecommendSupportMaster_o *this,
        UserRecommendSupportEntity_o **entity,
        int64_t userId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3891A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
    byte_4C3891A = 1;
  }
  PK = (Il2CppObject *)UserRecommendSupportEntity__CreatePK(userId, idx, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserRecommendSupportMaster__UserRecommendSupportEntity__string__TryGetEntity__);
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
    sub_1C32E7C(this);
  return UserRecommendSupportEntity__GetEquipUserSvtId(x, (const MethodInfo *)x) == this->fields.userSvtId;
}


bool UserRecommendSupportMaster___c__DisplayClass1_0___IsSettingServant_b__1(
        UserRecommendSupportMaster___c__DisplayClass1_0_o *this,
        UserRecommendSupportEntity_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  if ( !x )
    sub_1C32E7C(this);
  userSvtLeaderInfo = x->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.userSvtId;
  return userSvtLeaderInfo == (struct ServantLeaderInfo_o *)this->fields.userSvtId;
}