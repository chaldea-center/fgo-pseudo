void WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593982D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
    byte_593982D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    169,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


void WarAddMaster__CreateCache(WarAddMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  System_Collections_ObjectModel_Collection_T__o *v15; // x22
  System_Collections_Generic_Dictionary_int__object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x23
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  Il2CppClass **v27; // x8
  System_Collections_Generic_List_object__o *v28; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5939831 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarAddEntity__TypeInfo);
    byte_5939831 = 1;
  }
  isDirty = this->fields.isDirty;
  v28 = 0;
  value = 0;
  if ( isDirty )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    this->fields.type_idCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o *)v4;
    p_type_idCache = &this->fields.type_idCache;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.type_idCache, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_21FFECC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
        if ( list )
        {
          v15 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
          if ( *p_type_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v15->fields.items),
                    &value,
                    (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
            {
              v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v16,
                (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
              value = (Il2CppObject *)v16;
              if ( !list )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v15->fields.items),
                (Il2CppObject *)v16,
                (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v15->fields.items,
                      (Il2CppObject **)&v28,
                      (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
              {
                v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarAddEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v23,
                  (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v28 = v23;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v15->fields.items,
                  (Il2CppObject *)v23,
                  (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v28;
              if ( v28 )
              {
                items = v28->fields._items;
                v25 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
                ++v28->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v15,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v27[4] = (Il2CppClass *)v15;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                      (int32_t)v15,
                      v17,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v14;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_23;
    }
  }
}


void WarAddMaster__DeleteCache(WarAddMaster_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x19

  this->fields.type_idCache = 0;
  p_type_idCache = &this->fields.type_idCache;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.type_idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_type_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int v8; // w23
  int32_t v9; // w21
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  NetworkManager_c **v14; // x20
  __int64 v15; // x1
  int32_t Count; // w24
  int64_t Time; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int64_t v24; // x26
  Il2CppObject *v25; // x29
  int32_t v26; // w27
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v28; // x28
  bool HasBGChange; // w0
  int32_t condType; // w8
  Il2CppObject *MasterData_object; // x29
  NetworkManager_c **v32; // x19
  int v33; // w21
  int64_t value; // x20
  int32_t targetId; // w23
  int32_t v36; // w29
  Il2CppObject *v38; // [xsp+8h] [xbp-88h]
  Il2CppObject *v39; // [xsp+8h] [xbp-88h]
  WarAddEntity_o **v40; // [xsp+10h] [xbp-80h]
  int32_t v41; // [xsp+1Ch] [xbp-74h]
  int priority; // [xsp+20h] [xbp-70h]
  int v43; // [xsp+24h] [xbp-6Ch]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v8 = beforeClearQuestId;
  v9 = warId;
  if ( (byte_593982F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593982F = 1;
  }
  entity = 0;
  *changeWarAdd = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)changeWarAdd,
    0,
    *(System_String_o **)&warId,
    *(System_String_o **)&beforeClearQuestId,
    (int32_t)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_50:
    sub_21FFECC(list, v12);
  v14 = &NetworkManager_TypeInfo;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Time = NetworkManager__getTime(0);
  if ( Count < 1 )
  {
    v25 = 0;
    goto LABEL_47;
  }
  v24 = Time;
  v43 = -1;
  v25 = 0;
  v26 = 0;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_50;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v26,
                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    if ( Item )
    {
      v28 = Item;
      if ( Item->fields.startedAt <= v24
        && Item->fields.endedAt > v24
        && Item->fields.warId == v9
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v12);
        if ( v8 >= 1 && HasBGChange && v28->fields.targetId == v8 && v28->fields.priority > priority )
        {
          condType = v28->fields.condType;
          if ( condType == 1 )
          {
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
            if ( CondType__IsQuestClear_47254560(v8, -1, 0, 0) )
              goto LABEL_34;
            condType = v28->fields.condType;
          }
          if ( condType == 46 )
          {
            v38 = v25;
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_50;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)list,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !*(&(*v14)->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(*v14, v12);
            if ( !byte_5931D52 )
            {
              sub_21FFC50(v14);
              byte_5931D52 = 1;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)*v14;
            if ( !*(&(*v14)->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(list, v12);
              list = (System_Collections_ObjectModel_Collection_T__o *)*v14;
            }
            if ( !MasterData_object )
              goto LABEL_50;
            UserQuestMaster__TryGetEntity(
              (UserQuestMaster_o *)MasterData_object,
              &entity,
              (int64_t)list[7].fields.items[4].klass,
              v28->fields.targetId,
              0);
            v25 = v38;
            if ( entity )
            {
              if ( entity->fields.questPhase == v28->fields.value )
              {
LABEL_34:
                *changeWarAdd = v28;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)changeWarAdd,
                  (int32_t)v28,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
                priority = v28->fields.priority;
                goto LABEL_42;
              }
            }
          }
        }
        if ( v28->fields.priority >= v43 )
        {
          v39 = v25;
          v40 = changeWarAdd;
          v32 = v14;
          v41 = v9;
          v33 = v8;
          value = v28->fields.value;
          v36 = v28->fields.condType;
          targetId = v28->fields.targetId;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
          if ( CondType__IsOpen(v36, targetId, value, 0, 0, 0) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_50;
            v8 = v33;
            v14 = v32;
            v43 = v28->fields.priority;
            v9 = v41;
            changeWarAdd = v40;
            v25 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v26,
                    (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
          else
          {
            v14 = v32;
            v25 = v39;
            changeWarAdd = v40;
            v8 = v33;
            v9 = v41;
          }
        }
      }
    }
LABEL_42:
    ++v26;
  }
  while ( Count != v26 );
  if ( priority > v43 )
  {
    if ( v25 )
      return HIDWORD(v25[1].monitor);
    return 0;
  }
LABEL_47:
  *changeWarAdd = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)changeWarAdd, 0, v18, v19, v20, v21, v22, v23);
  if ( !v25 )
    return 0;
  return HIDWORD(v25[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetBgObjectId(WarAddMaster_o *this, int32_t warId, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x1
  int32_t v12; // w22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  WarAddMaster___c_c *v23; // x0
  struct WarAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__15_0; // x20
  Il2CppObject *v26; // x21
  struct WarAddMaster___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w20
  Il2CppObject *v35; // x21
  int32_t monitor; // w22
  int32_t monitor_high; // w23
  int64_t klass_low; // x24

  if ( (byte_5939834 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_WarAddEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_WarAddEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_WarAddMaster___c__GetBgObjectId_b__15_0__);
    sub_21FFC50(&WarAddMaster___c_TypeInfo);
    byte_5939834 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&warId);
  Time = NetworkManager__getTime(0);
  CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, 24, warId, v6);
  if ( !CacheByTypeId )
    return -1;
  v8 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
  if ( !CacheByTypeId->fields._size )
    return -1;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
  if ( v8->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               v12,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
      if ( !Item )
        break;
      v11 = Item;
      if ( (__int64)Item[3].monitor <= Time && (__int64)Item[4].klass > Time )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v11, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( ++v12 >= v8->fields._size )
        goto LABEL_18;
    }
LABEL_35:
    sub_21FFECC(Item, v11);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_35;
  if ( !v9->fields._size )
    return -1;
  v23 = WarAddMaster___c_TypeInfo;
  if ( !*(&WarAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarAddMaster___c_TypeInfo, v11);
    v23 = WarAddMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__15_0 = (System_Comparison_T__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v11);
      static_fields = WarAddMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_WarAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__15_0, v26, Method_WarAddMaster___c__GetBgObjectId_b__15_0__, 0);
    v27 = WarAddMaster___c_TypeInfo->static_fields;
    v27->__9__15_0 = (struct System_Comparison_WarAddEntity__o *)_9__15_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__15_0, (int32_t)_9__15_0, v28, v29, v30, v31, v32, v33);
  }
  System_Collections_Generic_List_object___Sort_71636404(
    v9,
    _9__15_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_WarAddEntity__Sort__);
  if ( v9->fields._size < 1 )
    return -1;
  v34 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v9,
             v34,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    if ( !Item )
      goto LABEL_35;
    v35 = Item;
    monitor = (int32_t)Item[2].monitor;
    monitor_high = HIDWORD(Item[2].monitor);
    klass_low = SLODWORD(Item[3].klass);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      return HIDWORD(v35[1].monitor);
    if ( ++v34 >= v9->fields._size )
      return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarAddEntity__o *WarAddMaster__GetCacheByTypeId(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_idCache; // x0
  Il2CppObject *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5939832 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    byte_5939832 = 1;
  }
  value = 0;
  v10 = 0;
  WarAddMaster__CreateCache(this, *(const MethodInfo **)&type);
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_idCache;
  if ( !type_idCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_idCache,
          type,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
    return 0;
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_21FFECC(type_idCache, v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         warId,
         &v10,
         (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_WarAddEntity__o *)v10;
  }
  else
  {
    return 0;
  }
}


int32_t WarAddMaster__GetClearedReturnFolderWarId(WarAddMaster_o *this, int32_t warId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarAddEntity_o *PrioredEntity; // x0
  const MethodInfo *v5; // x1

  PrioredEntity = WarAddMaster__GetPrioredEntity(this, 2, warId, v3);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = WarAddEntity__GetClearedReturnFolderWarId(PrioredEntity, v5);
  return (int)PrioredEntity;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593982B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
    sub_21FFC50(&WarAddEntity_TypeInfo);
    byte_593982B = 1;
  }
  if ( !*(&WarAddEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, *(_QWORD *)&warId);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  WarAddEntity_o *v26; // x22
  WarAddEntity_c *v27; // x0
  int32_t overwriteId; // w20
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-48h]

  if ( (byte_5939830 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&WarAddEntity_TypeInfo);
    byte_5939830 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v11);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
    {
      overwriteId = 0;
      goto LABEL_29;
    }
    if ( !v34 )
      sub_21FFECC(v17, v18);
    v19 = v34->klass;
    v20 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarAddEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v34,
            *(_QWORD *)(v22 + 8));
    v26 = (WarAddEntity_o *)v23;
    if ( !v23 )
      sub_21FFECC(0, v24);
    if ( *(_DWORD *)(v23 + 16) == warId && *(_DWORD *)(v23 + 20) == type )
    {
      v27 = WarAddEntity_TypeInfo;
      if ( !*(&WarAddEntity_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, v24);
        v27 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v26, v27->static_fields->EVENT_TOWER_ID, 0, v25) == towerId )
        break;
    }
  }
  overwriteId = v26->fields.overwriteId;
LABEL_29:
  if ( v34 )
  {
    v29 = v34->klass;
    v30 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_34;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_34:
      v32 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(v34, *(_QWORD *)(v32 + 8));
  }
  return overwriteId;
}


System_String_o *WarAddMaster__GetFirstPlayableBoardEffectName(
        WarAddMaster_o *this,
        System_Collections_Generic_HashSet_int__o *warIds,
        const MethodInfo *method)
{
  WarAddMaster_o *v4; // x19
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  System_String_o *BoardEffectName; // x20
  System_String_o *v10; // x19
  System_Collections_Generic_HashSet_Enumerator_T__o v12; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_5939833 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    this = (WarAddMaster_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5939833 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !warIds )
    sub_21FFECC(this, warIds);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v12,
    warIds,
    (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  while ( 1 )
  {
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v12,
            (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
    {
      v10 = 0;
      goto LABEL_16;
    }
    PrioredEntity = WarAddMaster__GetPrioredEntity(v4, 3, (int32_t)v12.fields._current, v5);
    if ( PrioredEntity )
    {
      BoardEffectName = WarAddEntity__GetBoardEffectName(PrioredEntity, v7);
      if ( BoardEffectName )
        break;
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(BoardEffectName, 0) )
    v10 = 0;
  else
    v10 = BoardEffectName;
LABEL_16:
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  int32_t Count; // w24
  int64_t Time; // x19
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *v14; // x22
  int32_t v15; // w21
  int monitor; // w29
  Il2CppObject *v17; // x23
  int64_t klass_low; // x26
  int32_t items; // w24
  int32_t items_high; // w25
  int32_t v21; // w25
  int v22; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x26
  int64_t v25; // x29
  int32_t v26; // w9
  int32_t monitor_high; // w28
  bool IsOpen; // w0
  int32_t v30; // [xsp+8h] [xbp-68h]
  int v31; // [xsp+Ch] [xbp-64h]

  if ( (byte_593982E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_593982E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_39;
  if ( BYTE1(list[3].klass) )
  {
    CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, type, warId, v11);
    if ( CacheByTypeId )
    {
      v13 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
      if ( CacheByTypeId->fields._size >= 1 )
      {
        v14 = 0;
        v15 = 0;
        monitor = -1;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     v13,
                                                                     v15,
                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
          if ( !list )
            break;
          v17 = (Il2CppObject *)list;
          if ( (__int64)list[2].monitor <= Time
            && (__int64)list[2].fields.items > Time
            && SLODWORD(list[1].klass) >= monitor )
          {
            klass_low = SLODWORD(list[2].klass);
            items = (int32_t)list[1].fields.items;
            items_high = HIDWORD(list[1].fields.items);
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&type);
            if ( CondType__IsOpen(items, items_high, klass_low, 0, 0, 0) )
            {
              monitor = (int)v17[1].monitor;
              v14 = v17;
            }
          }
          if ( ++v15 >= v13->fields._size )
            return (WarAddEntity_o *)v14;
        }
        goto LABEL_39;
      }
    }
  }
  else if ( Count >= 1 )
  {
    v14 = 0;
    v21 = 0;
    v22 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v21,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
      if ( Item )
      {
        v24 = Item;
        if ( (__int64)Item[3].monitor <= Time
          && (__int64)Item[4].klass > Time
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v22 )
        {
          v31 = v22;
          v25 = SLODWORD(Item[3].klass);
          v26 = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          {
            v30 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&type);
            v26 = v30;
          }
          IsOpen = CondType__IsOpen(v26, monitor_high, v25, 0, 0, 0);
          v22 = v31;
          if ( IsOpen )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v22 = (int)v24[1].monitor;
            v14 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v21,
                    (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
        }
      }
      if ( Count == ++v21 )
        return (WarAddEntity_o *)v14;
    }
LABEL_39:
    sub_21FFECC(list, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetPrioredID(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v5; // w19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, *(const MethodInfo **)&defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return v5;
}


System_String_o *WarAddMaster__GetPrioredStr(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, (const MethodInfo *)defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v5;
}


void WarAddMaster__OnListChangedImplementation(
        WarAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool WarAddMaster__TryGetEntity(
        WarAddMaster_o *this,
        WarAddEntity_o **entity,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593982C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
    sub_21FFC50(&WarAddEntity_TypeInfo);
    byte_593982C = 1;
  }
  if ( !*(&WarAddEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, entity);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}


void WarAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939835 & 1) == 0 )
  {
    sub_21FFC50(&WarAddMaster___c_TypeInfo);
    byte_5939835 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarAddMaster___c_TypeInfo->static_fields->__9 = (struct WarAddMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarAddMaster___c___ctor(WarAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarAddMaster___c___GetBgObjectId_b__15_0(
        WarAddMaster___c_o *this,
        WarAddEntity_o *a,
        WarAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}