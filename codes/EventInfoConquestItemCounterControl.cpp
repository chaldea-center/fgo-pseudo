void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16A37 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo, v5, v6);
    byte_4B16A37 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemSprites, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl__PlayAnim(
        EventInfoConquestItemCounterControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  if ( this->fields.playType == type && this->fields.conquestItems )
  {
    v5 = EventInfoConquestItemCounterControl__playAnim(this, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetConquestInfos(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
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
  __int64 v15; // x21
  __int64 Instance; // x0
  __int64 v17; // x1
  UserItemMaster_o *v18; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  il2cpp_array_size_t v20; // w22
  il2cpp_array_size_t v21; // w8
  __int64 v22; // x24
  __int64 v23; // x8
  __int64 v24; // x24
  __int64 v25; // t1
  int *v26; // x8
  struct EventInfoConquestItemCounterComponent_array *v27; // x9
  _DWORD *v28; // x10
  int v29; // w2
  int v30; // w1
  __int64 v31; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v33; // x8
  UserQuestMaster_o *v34; // x22
  il2cpp_array_size_t v35; // w27
  struct EventInfoConquestItemCounterComponent_array *v36; // x8
  EventInfoConquestItemCounterComponent_o *v37; // x8
  __int64 v38; // x24
  int v39; // w8
  __int64 v40; // x25
  __int64 v41; // x29
  int v42; // w23
  int32_t *v43; // x21
  int *v44; // x8
  struct EventInfoConquestItemCounterComponent_array *v45; // x9
  int v46; // w1
  __int64 v47; // x8
  Il2CppObject *v48; // [xsp+8h] [xbp-68h]

  if ( (byte_4B16A36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&EventConquestInfo___TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16A36 = 1;
  }
  v15 = sub_1BCA91C(obj, EventConquestInfo___TypeInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v18 = (UserItemMaster_o *)Instance;
  if ( v15 && *(_QWORD *)(v15 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v20 = 0;
      while ( (signed int)v20 < (signed int)conquestItems->max_length )
      {
        v21 = *(_DWORD *)(v15 + 24);
        if ( (int)v20 >= (int)v21 )
          break;
        if ( v20 >= v21 )
          goto LABEL_73;
        v22 = v15 + 8LL * (int)v20;
        v25 = *(_QWORD *)(v22 + 32);
        v24 = v22 + 32;
        v23 = v25;
        if ( !v25 )
          goto LABEL_71;
        if ( *(_DWORD *)(v23 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
          Instance = NetworkManager__get_UserId(0LL);
          if ( v20 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_73;
          if ( !*(_QWORD *)v24 || !v18 )
            goto LABEL_71;
          Instance = (__int64)UserItemMaster__GetEntityDefinitely(
                                v18,
                                Instance,
                                *(_DWORD *)(*(_QWORD *)v24 + 20LL),
                                0LL);
          if ( Instance )
          {
            if ( *(_DWORD *)(Instance + 24) == 1 )
            {
              Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_71;
              v26 = (int *)(Instance + 96);
            }
            else
            {
              v26 = (int *)(Instance + 28);
            }
            v27 = this->fields.conquestItems;
            if ( !v27 )
              goto LABEL_71;
            if ( v20 >= v27->max_length || v20 >= *(_DWORD *)(v15 + 24) )
              goto LABEL_73;
            v28 = *(_DWORD **)v24;
            if ( !*(_QWORD *)v24 )
              goto LABEL_71;
            Instance = (__int64)v27->m_Items[v20];
            if ( !Instance )
              goto LABEL_71;
            if ( *(_DWORD *)(Instance + 80) == v28[5] )
            {
              v29 = v28[8];
              v30 = *v26;
              v31 = *(_QWORD *)Instance;
              *(_DWORD *)(Instance + 88) = v28[9];
              *(_DWORD *)(Instance + 92) = v29;
              *(_DWORD *)(Instance + 84) = v30;
              Instance = (*(__int64 (**)(void))(v31 + 392))();
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v20;
        if ( !conquestItems )
          goto LABEL_71;
      }
      return;
    }
LABEL_71:
    sub_1BCAA3C(Instance, v17);
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v33 = this->fields.conquestItems;
  if ( !v33 )
    goto LABEL_71;
  v34 = (UserQuestMaster_o *)Instance;
  v35 = 0;
  v48 = MasterData_object;
  while ( (signed int)v35 < (signed int)v33->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Instance = NetworkManager__get_UserId(0LL);
    v36 = this->fields.conquestItems;
    if ( !v36 )
      goto LABEL_71;
    if ( v35 >= v36->max_length )
      goto LABEL_73;
    v37 = v36->m_Items[v35];
    if ( !v37 || !v18 )
      goto LABEL_71;
    Instance = (__int64)UserItemMaster__GetEntityDefinitely(v18, Instance, v37->fields._itemId_k__BackingField, 0LL);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_71;
      v38 = Instance;
      Instance = (__int64)EventConquestRewardMaster__getList(
                            (EventConquestRewardMaster_o *)MasterData_object,
                            this->fields.eventId,
                            0LL);
      if ( Instance )
      {
        v39 = *(_DWORD *)(Instance + 24);
        v40 = Instance;
        if ( v39 >= 1 )
        {
          v41 = 0LL;
          v42 = 0;
          while ( (unsigned int)v41 < v39 )
          {
            v43 = *(int32_t **)(v40 + 32 + 8 * v41);
            if ( !v43 )
              goto LABEL_71;
            if ( v43[6] == 2 && v43[7] == *(_DWORD *)(v38 + 24) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !v34 )
                goto LABEL_71;
              Instance = (__int64)UserQuestMaster__getEntityFromId(v34, Instance, v43[5], 0LL);
              if ( !v43[5] || Instance && *(int *)(Instance + 40) >= 1 )
                v42 += v43[8];
            }
            v39 = *(_DWORD *)(v40 + 24);
            if ( (int)++v41 >= v39 )
              goto LABEL_62;
          }
LABEL_73:
          sub_1BCAA44(Instance, v17);
        }
      }
      v42 = 0;
LABEL_62:
      if ( *(_DWORD *)(v38 + 24) == 1 )
      {
        Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_71;
        v44 = (int *)(Instance + 96);
      }
      else
      {
        v44 = (int *)(v38 + 28);
      }
      v45 = this->fields.conquestItems;
      if ( !v45 )
        goto LABEL_71;
      if ( v35 >= v45->max_length )
        goto LABEL_73;
      Instance = (__int64)v45->m_Items[v35];
      if ( !Instance )
        goto LABEL_71;
      v46 = *v44;
      v47 = *(_QWORD *)Instance;
      *(_DWORD *)(Instance + 88) = 0;
      *(_DWORD *)(Instance + 92) = v42;
      *(_DWORD *)(Instance + 84) = v46;
      Instance = (*(__int64 (**)(void))(v47 + 392))();
      MasterData_object = v48;
    }
    v33 = this->fields.conquestItems;
    ++v35;
    if ( !v33 )
      goto LABEL_71;
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetEventId(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoConquestItemCounterControl_o *v5; // x20
  EventInfoConquestItemCounterControl_o *v6; // x0
  Il2CppObject *v7; // x1
  const MethodInfo *v8; // x2

  v5 = this;
  if ( (byte_4B16A35 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1BCA7E0(&int_TypeInfo, val, method);
    byte_4B16A35 = 1;
  }
  if ( !val )
    sub_1BCAA3C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1BCACFC(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  EventInfoConquestItemCounterControl___c_c *v24; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v26; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v40; // x20
  __int64 v41; // x27
  unsigned __int64 v42; // x28
  __int64 v43; // x21
  __int64 v44; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v46; // x24
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v47; // x2
  struct EventInfoConquestItemCounterComponent_array *v48; // x8

  if ( (byte_4B16A33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, entity, method);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v16, v17);
    sub_1BCA7E0(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v18, v19);
    sub_1BCA7E0(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&EventInfoConquestItemCounterControl___c_TypeInfo, v22, v23);
    byte_4B16A33 = 1;
  }
  if ( entity )
  {
    v24 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo, entity);
      v24 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v24->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24, entity);
        v24 = EventInfoConquestItemCounterControl___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_EventUiValueEntity__int__TypeInfo,
                                                entity,
                                                method,
                                                v3);
      System_Func_object__int____ctor(_9__7_0, v26, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0LL);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v35 = System_Linq_Enumerable__ToArray_object_(
            v34,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_1BCAA3C(v35, v36);
    v40 = v35;
    v41 = 4LL;
    while ( 1 )
    {
      v42 = v41 - 4;
      if ( v41 - 4 >= (int)conquestItems->max_length )
        break;
      v43 = sub_1BCAA2C(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v36, v37, v38);
      System_Object___ctor((Il2CppObject *)v43, 0LL);
      v35 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                     (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v42 < (int)v35 )
      {
        if ( !v40 )
          goto LABEL_28;
        if ( v42 >= v40->max_length )
LABEL_30:
          sub_1BCAA44(v35, v36);
        v44 = *((_QWORD *)&v40->obj.klass + v41);
        if ( !v44 )
          goto LABEL_28;
        if ( *(_DWORD *)(v44 + 20) == 1 )
        {
          if ( !v43 )
            goto LABEL_28;
          v35 = (System_Object_array *)System_Int32__TryParse(
                                         *(System_String_o **)(v44 + 24),
                                         (int32_t *)(v43 + 16),
                                         0LL);
          if ( ((unsigned __int8)v35 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v46 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
              System_Func_object__bool____ctor(
                v46,
                (Il2CppObject *)v43,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0LL);
              v35 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v46,
                                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v47 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v35;
            }
            else
            {
              v47 = 0LL;
            }
            v48 = this->fields.conquestItems;
            if ( !v48 )
              goto LABEL_28;
            if ( v42 >= v48->max_length )
              goto LABEL_30;
            v35 = (System_Object_array *)*((_QWORD *)&v48->obj.klass + v41);
            if ( !v35 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v35,
              *(_DWORD *)(v43 + 16),
              v47,
              v38);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v41;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *crestSprite; // x20
  __int64 v13; // x1
  UISprite_o *v14; // x20
  UnityEngine_Object_o *armamentLabel; // x20
  __int64 v16; // x1
  UILabel_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4B16A32 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_17075/*"armaments_title"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5662/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v10, v11);
    byte_4B16A32 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v14 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_17075/*"armaments_title"*/, 0LL);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0LL, 0LL) )
  {
    v17 = this->fields.armamentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
    if ( !v17 )
      sub_1BCAA3C(v18, v19);
    UILabel__set_text(v17, v18, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B16A34 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback, method);
    byte_4B16A34 = 1;
  }
  v6 = sub_1BCAA2C(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoConquestItemCounterControl_ItemSpriteData___ctor(
        EventInfoConquestItemCounterControl_ItemSpriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16A38 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2);
    byte_4B16A38 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoConquestItemCounterControl___c___ctor(
        EventInfoConquestItemCounterControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoConquestItemCounterControl___c___Setup_b__7_0(
        EventInfoConquestItemCounterControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.priority;
}


void __fastcall EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoConquestItemCounterControl___c__DisplayClass7_0___Setup_b__1(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        EventInfoConquestItemCounterControl_ItemSpriteData_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  return item->fields.itemId == this->fields.itemId;
}


void __fastcall EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoConquestItemCounterControl__playAnim_d__9__MoveNext(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v10; // x19
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v13; // w22
  struct EventInfoConquestItemCounterComponent_array *v14; // x8
  int32_t i_5__2; // w9
  signed int v16; // w10
  EventInfoConquestItemCounterComponent_o *v17; // x11
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v10 = this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_22;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
LABEL_23:
          sub_1BCAA44(this, method);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v13];
        if ( !this )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim((EventInfoConquestItemCounterComponent_o *)this, method);
        max_length = conquestItems->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_10;
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
LABEL_10:
    v10->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_22;
  v14 = _4__this->fields.conquestItems;
  if ( !v14 )
    goto LABEL_22;
  i_5__2 = v10->fields._i_5__2;
  v16 = v14->max_length;
  if ( i_5__2 >= v16 )
  {
LABEL_19:
    ActionExtensions__Call(v10->fields.callback, 0LL);
    return 0;
  }
  while ( 1 )
  {
    if ( i_5__2 >= (unsigned int)v16 )
      goto LABEL_23;
    v17 = v14->m_Items[i_5__2];
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields.addProductNum )
      break;
    v10->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= v16 )
      goto LABEL_19;
  }
  v10->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v10->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_Reset(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_IDisposable_Dispose(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  ;
}