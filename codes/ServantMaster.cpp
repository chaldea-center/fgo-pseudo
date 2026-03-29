void ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D313A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D313A7 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEquipIdList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantCollectionIdList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void ServantMaster__AddServantCache(ServantMaster_o *this, ServantEntity_o *servantEntity, const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4D313AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    this = (ServantMaster_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D313AA = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( ServantEntity__get_IsServantEquip(servantEntity, 0) )
  {
    servantEquipIdList = v4->fields.servantEquipIdList;
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v7;
    *(_QWORD *)&v17.fields.fakeValue = v6;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v17, 0);
    if ( !servantEquipIdList )
      goto LABEL_22;
    items = servantEquipIdList->fields._items;
    v9 = Method_System_Collections_Generic_List_int__Add__;
    ++servantEquipIdList->fields._version;
    if ( !items )
      goto LABEL_22;
    size = servantEquipIdList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        servantEquipIdList,
        (int32_t)this,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      servantEquipIdList->fields._size = size + 1;
      items->m_Items[size] = (int)this;
    }
  }
  if ( !ServantEntity__get_IsServantCollection(servantEntity, 0) )
    return;
  servantCollectionIdList = v4->fields.servantCollectionIdList;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v18, 0);
  if ( !servantCollectionIdList
    || (v14 = servantCollectionIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v14) )
  {
LABEL_22:
    sub_1C93D2C(this, servantEntity);
  }
  v16 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    servantCollectionIdList->fields._size = v16 + 1;
    v14->m_Items[v16] = (int)this;
  }
}


bool ServantMaster__CheckFriendShipSvtEquip(
        ServantMaster_o *this,
        ServantEntity_o *servant,
        ServantEntity_o *equip,
        const MethodInfo *method)
{
  __int64 v6; // x19
  ServantEntity_o *IsOrganization; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Master_object; // x0
  __int64 v16; // x21
  __int64 v17; // x22
  ServantSkillMaster_o *v18; // x20
  const MethodInfo *v19; // x5
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v21; // x21
  SkillEntity_o *v24; // [xsp+0h] [xbp-40h] BYREF
  ServantSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4D313B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantMaster___c__DisplayClass14_0__CheckFriendShipSvtEquip_b__0__);
    sub_1C93AD4(&ServantMaster___c__DisplayClass14_0_TypeInfo);
    byte_4D313B3 = 1;
  }
  v24 = 0;
  entity = 0;
  v6 = sub_1C93D20(ServantMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_23;
  *(_QWORD *)(v6 + 16) = servant;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)servant, v9, v10, v11, v12, v13, v14);
  IsOrganization = *(ServantEntity_o **)(v6 + 16);
  if ( !IsOrganization )
    goto LABEL_23;
  IsOrganization = (ServantEntity_o *)ServantEntity__get_IsOrganization(IsOrganization, 0);
  if ( ((unsigned __int8)IsOrganization & 1) == 0 )
    return 0;
  if ( !equip )
    goto LABEL_23;
  if ( !ServantEntity__get_IsFriendShipSvtEquip(equip, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v17 = *(_QWORD *)&equip->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&equip->fields.id.fields.fakeValue;
  v18 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  IsOrganization = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v26, 0);
  if ( !v18 )
LABEL_23:
    sub_1C93D2C(IsOrganization, v8);
  if ( !ServantSkillMaster__TryGetEntity(v18, &entity, (int32_t)IsOrganization, 1, 1, v19) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsOrganization = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !entity || !IsOrganization )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsOrganization,
          (Il2CppObject **)&v24,
          entity->fields.skillId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  IsOrganization = (ServantEntity_o *)v24;
  if ( !v24 )
    goto LABEL_23;
  ActIndividuality = SkillEntity__getActIndividuality(v24, 0);
  v21 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v21,
    (Il2CppObject *)v6,
    Method_ServantMaster___c__DisplayClass14_0__CheckFriendShipSvtEquip_b__0__,
    0);
  return BasicHelper__Any_int__51960056(
           ActIndividuality,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
}


void ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  ServantMaster_o *v2; // x20
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v4; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v6; // w9
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantEntity_o *v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  v2 = this;
  if ( (byte_4D313A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4D313A9 = 1;
  }
  servantEquipIdList = v2->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_29;
  v4 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v4;
  servantCollectionIdList = v2->fields.servantCollectionIdList;
  if ( !servantCollectionIdList
    || (v6 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v6,
        (this = (ServantMaster_o *)v2->fields.list) == 0) )
  {
LABEL_29:
    sub_1C93D2C(this, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v17 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                               Enumerator,
                               *(_QWORD *)(v16 + 8));
    if ( v17 )
      ServantMaster__AddServantCache(v2, v17, v18);
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_26;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_26:
    v22 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
}


System_Int32_array *ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  struct System_Int32_array *v9; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D313AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D313AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                   v13,
                                                                   0);
        if ( !v5 )
          break;
        v9 = v5->fields._items;
        v10 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v9 )
          break;
        size = v5->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= LODWORD(v9->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          v9->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(list, method);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetCollectionList_43436508(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_4D313AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D313AF = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1C93D2C(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_T__o *v7; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v10; // w24
  int32_t v11; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D313AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D313AD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v7 = list;
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0) )
      {
        items = v7->fields.items;
        klass = v7[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = klass;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantEntity__get_IsServant((ServantEntity_o *)v7, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
          v11 = (int32_t)v7[3].fields.items;
        else
          v11 = 0;
        if ( !v5 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          v10,
          v11,
          (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v6 )
        return v5;
    }
LABEL_18:
    sub_1C93D2C(list, method);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x24
  __int64 v11; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Comparison_int__o *v15; // x19
  Il2CppObject *v16; // x21
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v3 = classId;
  if ( (byte_4D313B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Sort___79008704);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__);
    sub_1C93AD4(&ServantMaster___c_TypeInfo);
    byte_4D313B1 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == v3 )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v11;
        *(_QWORD *)&v25.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v25, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C93D2C(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v15 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)list + 23);
    v15 = (System_Comparison_int__o *)sub_1C93D20(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v15, v16, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v15;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_59106204(
    v7,
    (System_Comparison_T__o *)v15,
    (const MethodInfo_385E39C *)Method_System_Collections_Generic_List_int__Sort___79008704);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x24
  __int64 v11; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Comparison_int__o *v15; // x19
  Il2CppObject *v16; // x21
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v3 = classId;
  if ( (byte_4D313B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Sort___79008704);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__);
    sub_1C93AD4(&ServantMaster___c_TypeInfo);
    byte_4D313B2 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == v3 )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v11;
        *(_QWORD *)&v25.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v25, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C93D2C(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v15 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)list + 23);
    v15 = (System_Comparison_int__o *)sub_1C93D20(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v15, v16, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v15;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_59106204(
    v7,
    (System_Comparison_T__o *)v15,
    (const MethodInfo_385E39C *)Method_System_Collections_Generic_List_int__Sort___79008704);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4D313B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D313B0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v12.fields.currentCryptoKey = items;
        *(_QWORD *)&v12.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                   v12,
                                                                   0);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_1C93D2C(list, isVoiceList);
  }
LABEL_14:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_19;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_19;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, v11);
}


void ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  ServantEntity_o *v25; // x22
  __int64 v26; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  System_Collections_IEnumerator_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  ServantEntity_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x10
  const MethodInfo *v54; // x2
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x20
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0

  v4 = this;
  if ( (byte_4D313AC & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_1C93AD4(&ServantEntity_TypeInfo);
    byte_4D313AC = 1;
  }
  if ( !e )
    sub_1C93D2C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1C93D20(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_1C93AE8(&Method_ServantMaster_OnListChangedImplementation__);
        sub_1C93BFC(v12, v13);
      }
      ServantMaster__CreateServantCache(v4, (const MethodInfo *)e);
    }
  }
  else
  {
    oldItems = e->fields._oldItems;
    if ( oldItems )
    {
      klass = oldItems->klass;
      v8 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
      if ( *(_WORD *)&oldItems->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v10 = sub_1C69E5C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      if ( !v15 )
        sub_1C93D2C(0, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_20;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_20:
          v19 = sub_1C69E5C(v15, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1C69E5C(v15, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        v25 = (ServantEntity_o *)v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)v24;
          naturalAligment = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)naturalAligment
            && *(ServantEntity_c **)(*(_QWORD *)(v26 + 200) + 8 * naturalAligment - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 376))(v24, *(_QWORD *)(v26 + 384)) )
              ServantMaster__RemoveServantCache(v4, v25, v28);
          }
        }
      }
      v29 = sub_1C93C10(v15, System_IDisposable_TypeInfo);
      if ( v29 )
      {
        v30 = *(_QWORD *)v29;
        v31 = v29;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_39;
          }
          v34 = v30 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_39:
          v34 = sub_1C69E5C(v29, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v36 = newItems->klass;
      v37 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v38 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_47;
        }
        v39 = (__int64)&v36->vtable[*v38];
      }
      else
      {
LABEL_47:
        v39 = sub_1C69E5C(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v41 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v39)(newItems, *(_QWORD *)(v39 + 8));
      if ( !v41 )
        sub_1C93D2C(0, v40);
      while ( 1 )
      {
        v42 = *(_QWORD *)v41;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_54;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_54:
          v45 = sub_1C69E5C(v41, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
          break;
        v46 = *(_QWORD *)v41;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v48 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v47;
            v48 += 2;
            if ( !v47 )
              goto LABEL_61;
          }
          v49 = v46 + 16LL * (*(_DWORD *)v48 + 1) + 312;
        }
        else
        {
LABEL_61:
          v49 = sub_1C69E5C(v41, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
        v51 = (ServantEntity_o *)v50;
        if ( v50 )
        {
          v52 = *(_QWORD *)v50;
          v53 = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) >= (unsigned int)v53
            && *(ServantEntity_c **)(*(_QWORD *)(v52 + 200) + 8 * v53 - 8) == ServantEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v52 + 376))(v50, *(_QWORD *)(v52 + 384)) )
          {
            ServantMaster__AddServantCache(v4, v51, v54);
          }
        }
      }
      v55 = sub_1C93C10(v41, System_IDisposable_TypeInfo);
      if ( v55 )
      {
        v56 = *(_QWORD *)v55;
        v57 = v55;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_73;
          }
          v60 = v56 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_73:
          v60 = sub_1C69E5C(v55, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
      }
    }
  }
}


void ServantMaster__RemoveServantCache(ServantMaster_o *this, ServantEntity_o *servantEntity, const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v9; // x19
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4D313AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    this = (ServantMaster_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D313AB = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v11.fields.currentCryptoKey = v7;
      *(_QWORD *)&v11.fields.fakeValue = v6;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v11, 0);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = v10;
      *(_QWORD *)&v12.fields.fakeValue = v9;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v12, 0);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1C93D2C(this, servantEntity);
    }
  }
}


bool ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x1
  GrandQuestFolderBoardItem_o *v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D313A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D313A8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C93D2C(0, v15);
    v23 = (GrandQuestFolderBoardItem_o *)(v14 + 48);
    v22 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(v14 + 56) = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 56), v22, v16, v17, v18, v19, v20, v21);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0);
    v23->klass = (GrandQuestFolderBoardItem_c *)v24;
    sub_1C93A78(v23, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_26;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_26:
    v34 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return 1;
}


void ServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D313B4 & 1) == 0 )
  {
    sub_1C93AD4(&ServantMaster___c_TypeInfo);
    byte_4D313B4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantMaster___c___ctor(ServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantMaster___c___GetTargetClassMaterialSvtIdList_b__12_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}


int32_t ServantMaster___c___GetTargetClassStatusUpSvtIdList_b__13_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}


void ServantMaster___c__DisplayClass14_0___ctor(ServantMaster___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantMaster___c__DisplayClass14_0___CheckFriendShipSvtEquip_b__0(
        ServantMaster___c__DisplayClass14_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  ServantMaster___c__DisplayClass14_0_o *v4; // x20
  struct ServantEntity_o *servant; // x8

  v4 = this;
  if ( (byte_4D313B5 & 1) == 0 )
  {
    this = (ServantMaster___c__DisplayClass14_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D313B5 = 1;
  }
  servant = v4->fields.servant;
  if ( !servant )
    sub_1C93D2C(this, *(_QWORD *)&x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)servant->fields.individuality,
           x,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}