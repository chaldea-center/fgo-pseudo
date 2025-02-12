void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC82E8 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      method);
    sub_1C1ABD4(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo, v3);
    byte_4BC82E8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemSprites, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  EventInfoConquestItemCounterComponent_o *Instance; // x0
  __int64 v12; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  signed int v14; // w23
  signed int v15; // w8
  __int64 v16; // x26
  __int64 v17; // x8
  __int64 v18; // x26
  __int64 v19; // t1
  int32_t *v20; // x8
  struct EventInfoConquestItemCounterComponent_array *v21; // x9
  _DWORD *v22; // x10
  int32_t v23; // w2
  int32_t v24; // w1
  EventInfoConquestItemCounterComponent_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v27; // x8
  UserItemMaster_o *v28; // x19
  UserQuestMaster_o *v29; // x23
  il2cpp_array_size_t v30; // w27
  struct EventInfoConquestItemCounterComponent_array *v31; // x8
  EventInfoConquestItemCounterComponent_o *v32; // x8
  EventInfoConquestItemCounterComponent_o *v33; // x25
  int m_CancellationTokenSource; // w8
  EventInfoConquestItemCounterComponent_o *v35; // x26
  __int64 v36; // x22
  int32_t v37; // w24
  int32_t *v38; // x19
  int32_t *v39; // x8
  struct EventInfoConquestItemCounterComponent_array *v40; // x9
  int32_t v41; // w1
  EventInfoConquestItemCounterComponent_c *v42; // x8
  Il2CppObject *v43; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v44; // [xsp+10h] [xbp-70h]
  EventInfoConquestItemCounterControl_o *v45; // [xsp+18h] [xbp-68h]

  if ( (byte_4BC82E7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, obj);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C1ABD4(&EventConquestInfo___TypeInfo, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC82E7 = 1;
  }
  v10 = sub_1C1AD10(obj, EventConquestInfo___TypeInfo);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v44 = (UserItemMaster_o *)Instance;
  v45 = this;
  if ( v10 && *(_QWORD *)(v10 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v14 = 0;
      while ( v14 < (signed int)conquestItems->max_length )
      {
        v15 = *(_DWORD *)(v10 + 24);
        if ( v14 >= v15 )
          break;
        if ( v14 >= (unsigned int)v15 )
          goto LABEL_85;
        v16 = v10 + 8LL * v14;
        v19 = *(_QWORD *)(v16 + 32);
        v18 = v16 + 32;
        v17 = v19;
        if ( !v19 )
          goto LABEL_83;
        if ( *(_DWORD *)(v17 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
            byte_4BC2585 = 1;
          }
          Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          }
          if ( (unsigned int)v14 >= *(_DWORD *)(v10 + 24) )
            goto LABEL_85;
          if ( !*(_QWORD *)v18 || !v44 )
            goto LABEL_83;
          Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                                  v44,
                                                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                            + 64LL),
                                                                  *(_DWORD *)(*(_QWORD *)v18 + 20LL),
                                                                  0LL);
          if ( Instance )
          {
            if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 1 )
            {
              Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_83;
              v20 = (int32_t *)&Instance[1];
            }
            else
            {
              v20 = (int32_t *)&Instance->fields.m_CancellationTokenSource + 1;
            }
            v21 = v45->fields.conquestItems;
            if ( !v21 )
              goto LABEL_83;
            if ( v14 >= v21->max_length || (unsigned int)v14 >= *(_DWORD *)(v10 + 24) )
              goto LABEL_85;
            v22 = *(_DWORD **)v18;
            if ( !*(_QWORD *)v18 )
              goto LABEL_83;
            Instance = v21->m_Items[v14];
            if ( !Instance )
              goto LABEL_83;
            if ( Instance->fields._itemId_k__BackingField == v22[5] )
            {
              v23 = v22[8];
              v24 = *v20;
              klass = Instance->klass;
              Instance->fields.addProductNum = v22[9];
              Instance->fields.productNum = v23;
              Instance->fields.itemNum = v24;
              Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))klass->vtable._5_SetLabel.method)();
            }
          }
        }
        ++v14;
        conquestItems = v45->fields.conquestItems;
        if ( !conquestItems )
          goto LABEL_83;
      }
      return;
    }
LABEL_83:
    sub_1C1AE30(Instance, v12);
  }
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v27 = this->fields.conquestItems;
  v28 = v44;
  if ( !v27 )
    goto LABEL_83;
  v29 = (UserQuestMaster_o *)Instance;
  v30 = 0;
  v43 = MasterData_object;
  while ( (signed int)v30 < (signed int)v27->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
      byte_4BC2585 = 1;
    }
    Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    }
    v31 = this->fields.conquestItems;
    if ( !v31 )
      goto LABEL_83;
    if ( v30 >= v31->max_length )
      goto LABEL_85;
    v32 = v31->m_Items[v30];
    if ( !v32 || !v28 )
      goto LABEL_83;
    Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                            v28,
                                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                      + 64LL),
                                                            v32->fields._itemId_k__BackingField,
                                                            0LL);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_83;
      v33 = Instance;
      Instance = (EventInfoConquestItemCounterComponent_o *)EventConquestRewardMaster__getList(
                                                              (EventConquestRewardMaster_o *)MasterData_object,
                                                              this->fields.eventId,
                                                              0LL);
      if ( Instance )
      {
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
        v35 = Instance;
        if ( m_CancellationTokenSource >= 1 )
        {
          v36 = 0LL;
          v37 = 0;
          while ( (unsigned int)v36 < m_CancellationTokenSource )
          {
            v38 = (int32_t *)*((_QWORD *)&v35->fields.baseSprite + v36);
            if ( !v38 )
              goto LABEL_83;
            if ( v38[6] == 2 && v38[7] == LODWORD(v33->fields.m_CancellationTokenSource) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4BC2585 )
              {
                sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
                byte_4BC2585 = 1;
              }
              Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              }
              if ( !v29 )
                goto LABEL_83;
              Instance = (EventInfoConquestItemCounterComponent_o *)UserQuestMaster__getEntityFromId(
                                                                      v29,
                                                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields.addProductNum
                                                                                + 64LL),
                                                                      v38[5],
                                                                      0LL);
              if ( !v38[5] || Instance && SLODWORD(Instance->fields.itemNumTitleLabel) >= 1 )
                v37 += v38[8];
            }
            m_CancellationTokenSource = (int)v35->fields.m_CancellationTokenSource;
            if ( (int)++v36 >= m_CancellationTokenSource )
              goto LABEL_74;
          }
LABEL_85:
          sub_1C1AE38(Instance, v12);
        }
      }
      v37 = 0;
LABEL_74:
      if ( LODWORD(v33->fields.m_CancellationTokenSource) == 1 )
      {
        Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0LL);
        this = v45;
        if ( !Instance )
          goto LABEL_83;
        v39 = (int32_t *)&Instance[1];
      }
      else
      {
        this = v45;
        v39 = (int32_t *)&v33->fields.m_CancellationTokenSource + 1;
      }
      v28 = v44;
      v40 = this->fields.conquestItems;
      if ( !v40 )
        goto LABEL_83;
      if ( v30 >= v40->max_length )
        goto LABEL_85;
      Instance = v40->m_Items[v30];
      if ( !Instance )
        goto LABEL_83;
      v41 = *v39;
      v42 = Instance->klass;
      Instance->fields.addProductNum = 0;
      Instance->fields.productNum = v37;
      Instance->fields.itemNum = v41;
      Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))v42->vtable._5_SetLabel.method)();
      MasterData_object = v43;
    }
    v27 = this->fields.conquestItems;
    ++v30;
    if ( !v27 )
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
  if ( (byte_4BC82E6 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1C1ABD4(&int_TypeInfo, val);
    byte_4BC82E6 = 1;
  }
  if ( !val )
    sub_1C1AE30(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C1B0F0(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventInfoConquestItemCounterControl___c_c *v14; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v16; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x0
  __int64 v26; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v28; // x20
  __int64 v29; // x27
  unsigned __int64 v30; // x28
  __int64 v31; // x21
  __int64 v32; // x8
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v35; // x24
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v36; // x2
  struct EventInfoConquestItemCounterComponent_array *v37; // x8

  if ( (byte_4BC82E4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, entity);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v7);
    sub_1C1ABD4(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v8);
    sub_1C1ABD4(&System_Func_EventUiValueEntity__int__TypeInfo, v9);
    sub_1C1ABD4(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v10);
    sub_1C1ABD4(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v11);
    sub_1C1ABD4(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v12);
    sub_1C1ABD4(&EventInfoConquestItemCounterControl___c_TypeInfo, v13);
    byte_4BC82E4 = 1;
  }
  if ( entity )
  {
    v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v14->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v16, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0LL);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_2FC8A98 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v25 = System_Linq_Enumerable__ToArray_object_(
            v24,
            (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_1C1AE30(v25, v26);
    v28 = v25;
    v29 = 4LL;
    while ( 1 )
    {
      v30 = v29 - 4;
      if ( v29 - 4 >= (int)conquestItems->max_length )
        break;
      v31 = sub_1C1AE20(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      v25 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                     (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v30 < (int)v25 )
      {
        if ( !v28 )
          goto LABEL_28;
        if ( v30 >= v28->max_length )
LABEL_30:
          sub_1C1AE38(v25, v26);
        v32 = *((_QWORD *)&v28->obj.klass + v29);
        if ( !v32 )
          goto LABEL_28;
        if ( *(_DWORD *)(v32 + 20) == 1 )
        {
          if ( !v31 )
            goto LABEL_28;
          v25 = (System_Object_array *)System_Int32__TryParse(
                                         *(System_String_o **)(v32 + 24),
                                         (int32_t *)(v31 + 16),
                                         0LL);
          if ( ((unsigned __int8)v25 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v35 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v35,
                (Il2CppObject *)v31,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0LL);
              v25 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__50081164(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v35,
                                             (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v36 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v25;
            }
            else
            {
              v36 = 0LL;
            }
            v37 = this->fields.conquestItems;
            if ( !v37 )
              goto LABEL_28;
            if ( v30 >= v37->max_length )
              goto LABEL_30;
            v25 = (System_Object_array *)*((_QWORD *)&v37->obj.klass + v29);
            if ( !v25 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v25,
              *(_DWORD *)(v31 + 16),
              v36,
              v33);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v29;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v8; // x20
  UnityEngine_Object_o *armamentLabel; // x20
  UILabel_o *v10; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4BC82E3 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_17176/*"armaments_title"*/, v5);
    sub_1C1ABD4(&StringLiteral_5691/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v6);
    byte_4BC82E3 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v8 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_17176/*"armaments_title"*/, 0LL);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0LL, 0LL) )
  {
    v10 = this->fields.armamentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
    if ( !v10 )
      sub_1C1AE30(v11, v12);
    UILabel__set_text(v10, v11, 0LL);
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

  if ( (byte_4BC82E5 & 1) == 0 )
  {
    sub_1C1ABD4(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback);
    byte_4BC82E5 = 1;
  }
  v5 = sub_1C1AE20(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v12, v13, v14, v15, v16, v17);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC82E9 & 1) == 0 )
  {
    sub_1C1ABD4(&EventInfoConquestItemCounterControl___c_TypeInfo, v1);
    byte_4BC82E9 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
          sub_1C1AE38(this, method);
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
      sub_1C1AE30(this, method);
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
  sub_1C1AB78(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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