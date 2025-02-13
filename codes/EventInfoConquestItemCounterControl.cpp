void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDCD84 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
    byte_4BDCD84 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.itemSprites, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 v5; // x22
  EventInfoConquestItemCounterComponent_o *Instance; // x0
  __int64 v7; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  signed int v9; // w23
  signed int v10; // w8
  __int64 v11; // x26
  __int64 v12; // x8
  __int64 v13; // x26
  __int64 v14; // t1
  int32_t *v15; // x8
  struct EventInfoConquestItemCounterComponent_array *v16; // x9
  _DWORD *v17; // x10
  int32_t v18; // w2
  int32_t v19; // w1
  EventInfoConquestItemCounterComponent_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v22; // x8
  UserItemMaster_o *v23; // x19
  UserQuestMaster_o *v24; // x23
  il2cpp_array_size_t v25; // w27
  struct EventInfoConquestItemCounterComponent_array *v26; // x8
  EventInfoConquestItemCounterComponent_o *v27; // x8
  EventInfoConquestItemCounterComponent_o *v28; // x25
  int m_CancellationTokenSource; // w8
  EventInfoConquestItemCounterComponent_o *v30; // x26
  __int64 v31; // x22
  int32_t v32; // w24
  int32_t *v33; // x19
  int32_t *v34; // x8
  struct EventInfoConquestItemCounterComponent_array *v35; // x9
  int32_t v36; // w1
  EventInfoConquestItemCounterComponent_c *v37; // x8
  Il2CppObject *v38; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v39; // [xsp+10h] [xbp-70h]
  EventInfoConquestItemCounterControl_o *v40; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDCD83 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventConquestRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&EventConquestInfo___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCD83 = 1;
  }
  v5 = sub_1C21F74(obj, EventConquestInfo___TypeInfo);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v39 = (UserItemMaster_o *)Instance;
  v40 = this;
  if ( v5 && *(_QWORD *)(v5 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v9 = 0;
      while ( v9 < (signed int)conquestItems->max_length )
      {
        v10 = *(_DWORD *)(v5 + 24);
        if ( v9 >= v10 )
          break;
        if ( v9 >= (unsigned int)v10 )
          goto LABEL_85;
        v11 = v5 + 8LL * v9;
        v14 = *(_QWORD *)(v11 + 32);
        v13 = v11 + 32;
        v12 = v14;
        if ( !v14 )
          goto LABEL_83;
        if ( *(_DWORD *)(v12 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          }
          if ( (unsigned int)v9 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_85;
          if ( !*(_QWORD *)v13 || !v39 )
            goto LABEL_83;
          Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                                  v39,
                                                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                            + 64LL),
                                                                  *(_DWORD *)(*(_QWORD *)v13 + 20LL),
                                                                  0LL);
          if ( Instance )
          {
            if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 1 )
            {
              Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_83;
              v15 = (int32_t *)&Instance[1];
            }
            else
            {
              v15 = (int32_t *)&Instance->fields.m_CancellationTokenSource + 1;
            }
            v16 = v40->fields.conquestItems;
            if ( !v16 )
              goto LABEL_83;
            if ( v9 >= v16->max_length || (unsigned int)v9 >= *(_DWORD *)(v5 + 24) )
              goto LABEL_85;
            v17 = *(_DWORD **)v13;
            if ( !*(_QWORD *)v13 )
              goto LABEL_83;
            Instance = v16->m_Items[v9];
            if ( !Instance )
              goto LABEL_83;
            if ( Instance->fields._itemId_k__BackingField == v17[5] )
            {
              v18 = v17[8];
              v19 = *v15;
              klass = Instance->klass;
              Instance->fields.addProductNum = v17[9];
              Instance->fields.productNum = v18;
              Instance->fields.itemNum = v19;
              Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))klass->vtable._5_SetLabel.method)();
            }
          }
        }
        ++v9;
        conquestItems = v40->fields.conquestItems;
        if ( !conquestItems )
          goto LABEL_83;
      }
      return;
    }
LABEL_83:
    sub_1C22094(Instance, v7);
  }
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v22 = this->fields.conquestItems;
  v23 = v39;
  if ( !v22 )
    goto LABEL_83;
  v24 = (UserQuestMaster_o *)Instance;
  v25 = 0;
  v38 = MasterData_object;
  while ( (signed int)v25 < (signed int)v22->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    }
    v26 = this->fields.conquestItems;
    if ( !v26 )
      goto LABEL_83;
    if ( v25 >= v26->max_length )
      goto LABEL_85;
    v27 = v26->m_Items[v25];
    if ( !v27 || !v23 )
      goto LABEL_83;
    Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                            v23,
                                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                      + 64LL),
                                                            v27->fields._itemId_k__BackingField,
                                                            0LL);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_83;
      v28 = Instance;
      Instance = (EventInfoConquestItemCounterComponent_o *)EventConquestRewardMaster__getList(
                                                              (EventConquestRewardMaster_o *)MasterData_object,
                                                              this->fields.eventId,
                                                              0LL);
      if ( Instance )
      {
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
        v30 = Instance;
        if ( m_CancellationTokenSource >= 1 )
        {
          v31 = 0LL;
          v32 = 0;
          while ( (unsigned int)v31 < m_CancellationTokenSource )
          {
            v33 = (int32_t *)*((_QWORD *)&v30->fields.baseSprite + v31);
            if ( !v33 )
              goto LABEL_83;
            if ( v33[6] == 2 && v33[7] == LODWORD(v28->fields.m_CancellationTokenSource) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4BD6FF5 )
              {
                sub_1C21E38(&NetworkManager_TypeInfo);
                byte_4BD6FF5 = 1;
              }
              Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              }
              if ( !v24 )
                goto LABEL_83;
              Instance = (EventInfoConquestItemCounterComponent_o *)UserQuestMaster__getEntityFromId(
                                                                      v24,
                                                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                                + 64LL),
                                                                      v33[5],
                                                                      0LL);
              if ( !v33[5] || Instance && SLODWORD(Instance->fields.itemNumTitleLabel) >= 1 )
                v32 += v33[8];
            }
            m_CancellationTokenSource = (int)v30->fields.m_CancellationTokenSource;
            if ( (int)++v31 >= m_CancellationTokenSource )
              goto LABEL_74;
          }
LABEL_85:
          sub_1C2209C(Instance, v7);
        }
      }
      v32 = 0;
LABEL_74:
      if ( LODWORD(v28->fields.m_CancellationTokenSource) == 1 )
      {
        Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0LL);
        this = v40;
        if ( !Instance )
          goto LABEL_83;
        v34 = (int32_t *)&Instance[1];
      }
      else
      {
        this = v40;
        v34 = (int32_t *)&v28->fields.m_CancellationTokenSource + 1;
      }
      v23 = v39;
      v35 = this->fields.conquestItems;
      if ( !v35 )
        goto LABEL_83;
      if ( v25 >= v35->max_length )
        goto LABEL_85;
      Instance = v35->m_Items[v25];
      if ( !Instance )
        goto LABEL_83;
      v36 = *v34;
      v37 = Instance->klass;
      Instance->fields.addProductNum = 0;
      Instance->fields.productNum = v32;
      Instance->fields.itemNum = v36;
      Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))v37->vtable._5_SetLabel.method)();
      MasterData_object = v38;
    }
    v22 = this->fields.conquestItems;
    ++v25;
    if ( !v22 )
      goto LABEL_83;
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
  if ( (byte_4BDCD82 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1C21E38(&int_TypeInfo);
    byte_4BDCD82 = 1;
  }
  if ( !val )
    sub_1C22094(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C22354(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl___c_c *v5; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  __int64 v17; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v19; // x20
  __int64 v20; // x27
  unsigned __int64 v21; // x28
  __int64 v22; // x21
  __int64 v23; // x8
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v26; // x24
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v27; // x2
  struct EventInfoConquestItemCounterComponent_array *v28; // x8

  if ( (byte_4BDCD80 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C21E38(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
    sub_1C21E38(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C21E38(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__);
    sub_1C21E38(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__);
    sub_1C21E38(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
    sub_1C21E38(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4BDCD80 = 1;
  }
  if ( entity )
  {
    v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v5->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v7, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0LL);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v9, v10, v11, v12, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_1C22094(v16, v17);
    v19 = v16;
    v20 = 4LL;
    while ( 1 )
    {
      v21 = v20 - 4;
      if ( v20 - 4 >= (int)conquestItems->max_length )
        break;
      v22 = sub_1C22084(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      v16 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                     (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v21 < (int)v16 )
      {
        if ( !v19 )
          goto LABEL_28;
        if ( v21 >= v19->max_length )
LABEL_30:
          sub_1C2209C(v16, v17);
        v23 = *((_QWORD *)&v19->obj.klass + v20);
        if ( !v23 )
          goto LABEL_28;
        if ( *(_DWORD *)(v23 + 20) == 1 )
        {
          if ( !v22 )
            goto LABEL_28;
          v16 = (System_Object_array *)System_Int32__TryParse(
                                         *(System_String_o **)(v23 + 24),
                                         (int32_t *)(v22 + 16),
                                         0LL);
          if ( ((unsigned __int8)v16 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v26,
                (Il2CppObject *)v22,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0LL);
              v16 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v26,
                                             (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v27 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v16;
            }
            else
            {
              v27 = 0LL;
            }
            v28 = this->fields.conquestItems;
            if ( !v28 )
              goto LABEL_28;
            if ( v21 >= v28->max_length )
              goto LABEL_30;
            v16 = (System_Object_array *)*((_QWORD *)&v28->obj.klass + v20);
            if ( !v16 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v16,
              *(_DWORD *)(v22 + 16),
              v27,
              v24);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v20;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v4; // x20
  UnityEngine_Object_o *armamentLabel; // x20
  UILabel_o *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDCD7F & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17189/*"armaments_title"*/);
    sub_1C21E38(&StringLiteral_5701/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/);
    byte_4BDCD7F = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v4 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_17189/*"armaments_title"*/, 0LL);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0LL, 0LL) )
  {
    v6 = this->fields.armamentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
    if ( !v6 )
      sub_1C22094(v7, v8);
    UILabel__set_text(v6, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDCD81 & 1) == 0 )
  {
    sub_1C21E38(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
    byte_4BDCD81 = 1;
  }
  v5 = sub_1C22084(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventInfoConquestItemCounterControl_ItemSpriteData___ctor(
        EventInfoConquestItemCounterControl_ItemSpriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCD85 & 1) == 0 )
  {
    sub_1C21E38(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4BDCD85 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
          sub_1C2209C(this, method);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v13];
        if ( !this )
          break;
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)((__int64 (__fastcall *)(EventInfoConquestItemCounterControl__playAnim_d__9_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                         this,
                                                                         this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        max_length = conquestItems->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_10;
      }
LABEL_22:
      sub_1C22094(this, method);
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
  sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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