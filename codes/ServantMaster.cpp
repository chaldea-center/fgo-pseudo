void ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3837A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3837A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEquipIdList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantCollectionIdList, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_3394514 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
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
  if ( (byte_4C3837D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    this = (ServantMaster_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3837D = 1;
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
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0);
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
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v18, 0);
  if ( !servantCollectionIdList
    || (v14 = servantCollectionIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v14) )
  {
LABEL_22:
    sub_1C32E7C(this);
  }
  v16 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantSkillMaster_o *v13; // x20
  const MethodInfo *v14; // x5
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v16; // x21
  SkillEntity_o *v19; // [xsp+0h] [xbp-40h] BYREF
  ServantSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C38387 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_ServantMaster___c__DisplayClass15_0__CheckFriendShipSvtEquip_b__0__);
    sub_1C32C20(&ServantMaster___c__DisplayClass15_0_TypeInfo);
    byte_4C38387 = 1;
  }
  v19 = 0;
  entity = 0;
  v6 = sub_1C32E6C(ServantMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_23;
  *(_QWORD *)(v6 + 16) = servant;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)servant, v8, v9);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v12 = *(_QWORD *)&equip->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equip->fields.id.fields.fakeValue;
  v13 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  IsOrganization = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
  if ( !v13 )
LABEL_23:
    sub_1C32E7C(IsOrganization);
  if ( !ServantSkillMaster__TryGetEntity(v13, &entity, (int32_t)IsOrganization, 1, 1, v14) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsOrganization = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !entity || !IsOrganization )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsOrganization,
          (Il2CppObject **)&v19,
          entity->fields.skillId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  IsOrganization = (ServantEntity_o *)v19;
  if ( !v19 )
    goto LABEL_23;
  ActIndividuality = SkillEntity__getActIndividuality(v19, 0);
  v16 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_ServantMaster___c__DisplayClass15_0__CheckFriendShipSvtEquip_b__0__,
    0);
  return BasicHelper__Any_int__51143952(
           ActIndividuality,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


void ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  ServantMaster_o *v2; // x20
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v4; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v6; // w9
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  ServantEntity_o *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  v2 = this;
  if ( (byte_4C3837C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C3837C = 1;
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
    sub_1C32E7C(this);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_18:
      v15 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v16 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                               Enumerator,
                               *(_QWORD *)(v15 + 8));
    if ( v16 )
      ServantMaster__AddServantCache(v2, v16, v17);
  }
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
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

  if ( (byte_4C38381 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C38381 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
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
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
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
        if ( (unsigned int)size >= LODWORD(v9->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    sub_1C32E7C(list);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ServantMaster__GetCollectionList_42623024(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_4C38382 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C38382 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1C32E7C(servantCollectionIdList);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C38380 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C38380 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
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
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v13, 0);
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
          (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v6 )
        return v5;
    }
LABEL_18:
    sub_1C32E7C(list);
  }
  return v5;
}


System_Int32_array *ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
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
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C38384 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C32C20(&System_Comparison_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Sort___78010392);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__);
    sub_1C32C20(&ServantMaster___c_TypeInfo);
    byte_4C38384 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
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
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == classId )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v11;
        *(_QWORD *)&v21.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C32E7C(list);
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
    v15 = (System_Comparison_int__o *)sub_1C32E6C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v15, v16, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v15;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)v15, v18, v19);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_58184124(
    v7,
    (System_Comparison_T__o *)v15,
    (const MethodInfo_377D1BC *)Method_System_Collections_Generic_List_int__Sort___78010392);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *ServantMaster__GetTargetClassPlayableServantIdList(
        ServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ServantMaster___c_c *v9; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__object__o *_9__14_0; // x21
  Il2CppObject *v12; // x22
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  ServantMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *_9__14_2; // x20
  Il2CppObject *v22; // x21
  struct ServantMaster___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  ServantMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_ObscuredInt__int__o *_9__14_3; // x20
  Il2CppObject *v30; // x21
  struct ServantMaster___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4C38386 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ObscuredInt__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ServantEntity____f__AnonymousType1_ServantEntity__bool____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select___f__AnonymousType1_ServantEntity__bool___ObscuredInt___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where___f__AnonymousType1_ServantEntity__bool____);
    sub_1C32C20(&System_Func_ServantEntity____f__AnonymousType1_ServantEntity__bool___TypeInfo);
    sub_1C32C20(&System_Func___f__AnonymousType1_ServantEntity__bool___bool__TypeInfo);
    sub_1C32C20(&System_Func_ObscuredInt__int__TypeInfo);
    sub_1C32C20(&System_Func___f__AnonymousType1_ServantEntity__bool___ObscuredInt__TypeInfo);
    sub_1C32C20(&Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_0__);
    sub_1C32C20(&Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_2__);
    sub_1C32C20(&Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_3__);
    sub_1C32C20(&Method_ServantMaster___c__DisplayClass14_0__GetTargetClassPlayableServantIdList_b__1__);
    sub_1C32C20(&ServantMaster___c__DisplayClass14_0_TypeInfo);
    sub_1C32C20(&ServantMaster___c_TypeInfo);
    byte_4C38386 = 1;
  }
  v5 = sub_1C32E6C(ServantMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = classIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)classIdList, v7, v8);
  v9 = ServantMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    v9 = ServantMaster___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__object__o *)v9->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__14_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ServantEntity____f__AnonymousType1_ServantEntity__bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__14_0,
      v12,
      Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_0__,
      0);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_ServantEntity____f__AnonymousType1_ServantEntity__bool___o *)_9__14_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_ServantEntity____f__AnonymousType1_ServantEntity__bool____);
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func___f__AnonymousType1_ServantEntity__bool___bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_ServantMaster___c__DisplayClass14_0__GetTargetClassPlayableServantIdList_b__1__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where___f__AnonymousType1_ServantEntity__bool____);
  v19 = ServantMaster___c_TypeInfo;
  v20 = v18;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    v19 = ServantMaster___c_TypeInfo;
  }
  _9__14_2 = (System_Func_T__TResult__o *)v19->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__14_2 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func___f__AnonymousType1_ServantEntity__bool___ObscuredInt__TypeInfo);
    System_Func_object__ObscuredInt____ctor(
      _9__14_2,
      v22,
      Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_2__,
      0);
    v23 = ServantMaster___c_TypeInfo->static_fields;
    v23->__9__14_2 = (struct System_Func___f__AnonymousType1_ServantEntity__bool___ObscuredInt__o *)_9__14_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v23->__9__14_2, (int32_t)_9__14_2, v24, v25);
  }
  v26 = System_Linq_Enumerable__Select_object__ObscuredInt_(
          v20,
          (System_Func_TSource__TResult__o *)_9__14_2,
          (const MethodInfo_3113E20 *)Method_System_Linq_Enumerable_Select___f__AnonymousType1_ServantEntity__bool___ObscuredInt___);
  v27 = ServantMaster___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    v27 = ServantMaster___c_TypeInfo;
  }
  _9__14_3 = v27->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ServantMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__14_3 = (System_Func_ObscuredInt__int__o *)sub_1C32E6C(System_Func_ObscuredInt__int__TypeInfo);
    System_Func_ObscuredInt__int____ctor(
      _9__14_3,
      v30,
      Method_ServantMaster___c__GetTargetClassPlayableServantIdList_b__14_3__,
      0);
    v31 = ServantMaster___c_TypeInfo->static_fields;
    v31->__9__14_3 = _9__14_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v31->__9__14_3, (int32_t)_9__14_3, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ObscuredInt__int_(
                                                               v28,
                                                               (System_Func_TSource__TResult__o *)_9__14_3,
                                                               (const MethodInfo_31149F0 *)Method_System_Linq_Enumerable_Select_ObscuredInt__int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v34,
                                                     (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
}


System_Int32_array *ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
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
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C38385 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C32C20(&System_Comparison_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Sort___78010392);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__);
    sub_1C32C20(&ServantMaster___c_TypeInfo);
    byte_4C38385 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
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
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == classId )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v11;
        *(_QWORD *)&v21.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C32E7C(list);
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
    v15 = (System_Comparison_int__o *)sub_1C32E6C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v15, v16, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v15;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v15, v18, v19);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_58184124(
    v7,
    (System_Comparison_T__o *)v15,
    (const MethodInfo_377D1BC *)Method_System_Collections_Generic_List_int__Sort___78010392);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C38383 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38383 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
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
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                   v12,
                                                                   0);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_1C32E7C(list);
  }
LABEL_14:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_19;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
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
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  ServantEntity_o *v24; // x22
  __int64 v25; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  System_Collections_IEnumerator_c **v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  ServantEntity_o *v49; // x21
  __int64 v50; // x8
  __int64 v51; // x10
  const MethodInfo *v52; // x2
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x20
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  v4 = this;
  if ( (byte_4C3837F & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_1C32C20(&ServantEntity_TypeInfo);
    byte_4C3837F = 1;
  }
  if ( !e )
    sub_1C32E7C(this);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1C32E6C(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_1C32C34(&Method_ServantMaster_OnListChangedImplementation__);
        sub_1C32D48(v12, v13);
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
        v10 = sub_1C83438(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      if ( !v14 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_20;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_20:
          v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = *(_QWORD *)v14;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v21 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 2;
            if ( !v20 )
              goto LABEL_27;
          }
          v22 = v19 + 16LL * (*(_DWORD *)v21 + 1) + 312;
        }
        else
        {
LABEL_27:
          v22 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
        v24 = (ServantEntity_o *)v23;
        if ( v23 )
        {
          v25 = *(_QWORD *)v23;
          naturalAligment = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)naturalAligment
            && *(ServantEntity_c **)(*(_QWORD *)(v25 + 200) + 8 * naturalAligment - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v25 + 376))(v23, *(_QWORD *)(v25 + 384)) )
              ServantMaster__RemoveServantCache(v4, v24, v27);
          }
        }
      }
      v28 = sub_1C32D5C(v14, System_IDisposable_TypeInfo);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = v28;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_39;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_39:
          v33 = sub_1C83438(v28, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v35 = newItems->klass;
      v36 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v37 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_47;
        }
        v38 = (__int64)&v35->vtable[*v37];
      }
      else
      {
LABEL_47:
        v38 = sub_1C83438(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v38)(newItems, *(_QWORD *)(v38 + 8));
      if ( !v39 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_54;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_54:
          v43 = sub_1C83438(v39, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v46 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *(v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 2;
            if ( !v45 )
              goto LABEL_61;
          }
          v47 = v44 + 16LL * (*(_DWORD *)v46 + 1) + 312;
        }
        else
        {
LABEL_61:
          v47 = sub_1C83438(v39, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
        v49 = (ServantEntity_o *)v48;
        if ( v48 )
        {
          v50 = *(_QWORD *)v48;
          v51 = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) >= (unsigned int)v51
            && *(ServantEntity_c **)(*(_QWORD *)(v50 + 200) + 8 * v51 - 8) == ServantEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v50 + 376))(v48, *(_QWORD *)(v50 + 384)) )
          {
            ServantMaster__AddServantCache(v4, v49, v52);
          }
        }
      }
      v53 = sub_1C32D5C(v39, System_IDisposable_TypeInfo);
      if ( v53 )
      {
        v54 = *(_QWORD *)v53;
        v55 = v53;
        v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
          {
            --v56;
            v57 += 4;
            if ( !v56 )
              goto LABEL_73;
          }
          v58 = v54 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_73:
          v58 = sub_1C83438(v53, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
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
  if ( (byte_4C3837E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    this = (ServantMaster_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3837E = 1;
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
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v11, 0);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
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
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v12, 0);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1C32E7C(this);
    }
  }
}


bool ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  CGThumbnailListItem_o *v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C3837B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3837B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_16:
      v12 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( !v13 )
      sub_1C32E7C(0);
    v17 = (CGThumbnailListItem_o *)(v13 + 48);
    v16 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 56) = v16;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 56), v16, v14, v15);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0);
    v17->klass = (CGThumbnailListItem_c *)v18;
    sub_1C32BC4(v17, (int32_t)v18, v19, v20);
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_26;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_26:
    v24 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return 1;
}


void ServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38388 & 1) == 0 )
  {
    sub_1C32C20(&ServantMaster___c_TypeInfo);
    byte_4C38388 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


__f__AnonymousType1_ServantEntity__bool__o *ServantMaster___c___GetTargetClassPlayableServantIdList_b__14_0(
        ServantMaster___c_o *this,
        ServantEntity_o *entity,
        const MethodInfo *method)
{
  bool v4; // w20
  __f__AnonymousType1__entity_j__TPar___isPlayable_j__TPar__o *v5; // x21

  if ( (byte_4C38389 & 1) == 0 )
  {
    sub_1C32C20(&Method___f__AnonymousType1_ServantEntity__bool___ctor__);
    this = (ServantMaster___c_o *)sub_1C32C20(&_f__AnonymousType1_ServantEntity__bool__TypeInfo);
    byte_4C38389 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  v4 = ServantEntity__get_IsServant(entity, 0)
    && ServantEntity__get_IsKeepServant(entity, 0)
    && entity->fields.collectionNo != 0;
  v5 = (__f__AnonymousType1__entity_j__TPar___isPlayable_j__TPar__o *)sub_1C32E6C(_f__AnonymousType1_ServantEntity__bool__TypeInfo);
  _f__AnonymousType1_object__bool____ctor(
    v5,
    (Il2CppObject *)entity,
    v4,
    (const MethodInfo_32B9ED0 *)Method___f__AnonymousType1_ServantEntity__bool___ctor__);
  return (__f__AnonymousType1_ServantEntity__bool__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o ServantMaster___c___GetTargetClassPlayableServantIdList_b__14_2(
        ServantMaster___c_o *this,
        __f__AnonymousType1_ServantEntity__bool__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  struct ServantEntity_o *entity_i__Field; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4C3838A & 1) == 0 )
  {
    this = (ServantMaster___c_o *)sub_1C32C20(&Method___f__AnonymousType1_ServantEntity__bool__get_entity__);
    byte_4C3838A = 1;
  }
  if ( !h__TransparentIdentifier0 || (entity_i__Field = h__TransparentIdentifier0->fields._entity_i__Field) == 0 )
    sub_1C32E7C(this);
  v5 = *(_QWORD *)&entity_i__Field->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&entity_i__Field->fields.id.fields.fakeValue;
  *(_QWORD *)&result.fields.fakeValue = v6;
  *(_QWORD *)&result.fields.currentCryptoKey = v5;
  return result;
}


int32_t ServantMaster___c___GetTargetClassPlayableServantIdList_b__14_3(
        ServantMaster___c_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o dummy,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  v3 = *(_QWORD *)&dummy.fields.fakeValue;
  v4 = *(_QWORD *)&dummy.fields.currentCryptoKey;
  if ( (byte_4C3838B & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3838B = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v6, 0);
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


bool ServantMaster___c__DisplayClass14_0___GetTargetClassPlayableServantIdList_b__1(
        ServantMaster___c__DisplayClass14_0_o *this,
        __f__AnonymousType1_ServantEntity__bool__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  ServantMaster___c__DisplayClass14_0_o *v4; // x19
  struct ServantEntity_o *entity_i__Field; // x8

  v4 = this;
  if ( (byte_4C3838C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method___f__AnonymousType1_ServantEntity__bool__get_entity__);
    this = (ServantMaster___c__DisplayClass14_0_o *)sub_1C32C20(&Method___f__AnonymousType1_ServantEntity__bool__get_isPlayable__);
    byte_4C3838C = 1;
  }
  if ( !h__TransparentIdentifier0 )
    goto LABEL_9;
  if ( h__TransparentIdentifier0->fields._isPlayable_i__Field )
  {
    entity_i__Field = h__TransparentIdentifier0->fields._entity_i__Field;
    if ( entity_i__Field )
    {
      this = (ServantMaster___c__DisplayClass14_0_o *)v4->fields.classIdList;
      if ( this )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)this,
                 entity_i__Field->fields.classId,
                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C32E7C(this);
  }
  return 0;
}


void ServantMaster___c__DisplayClass15_0___ctor(ServantMaster___c__DisplayClass15_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantMaster___c__DisplayClass15_0___CheckFriendShipSvtEquip_b__0(
        ServantMaster___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  ServantMaster___c__DisplayClass15_0_o *v4; // x20
  struct ServantEntity_o *servant; // x8

  v4 = this;
  if ( (byte_4C3838D & 1) == 0 )
  {
    this = (ServantMaster___c__DisplayClass15_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3838D = 1;
  }
  servant = v4->fields.servant;
  if ( !servant )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)servant->fields.individuality,
           x,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}