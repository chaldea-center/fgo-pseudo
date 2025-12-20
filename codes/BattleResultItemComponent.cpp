void BattleResultItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattleResultItemComponent_StaticFields *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D30327 & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent_TypeInfo);
    sub_1C94098(&StringLiteral_20506/*"img_bg_total_dp"*/);
    sub_1C94098(&StringLiteral_2840/*"BATTLE_RESULT_GET_EP"*/);
    sub_1C94098(&StringLiteral_20507/*"img_bg_total_ep"*/);
    byte_4D30327 = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20507/*"img_bg_total_ep"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleResultItemComponent_TypeInfo->static_fields,
    StringLiteral_20507/*"img_bg_total_ep"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20506/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20506/*"img_bg_total_dp"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->DP_SP_BASE_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v15->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v15->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v16 = StringLiteral_2840/*"BATTLE_RESULT_GET_EP"*/;
  v15->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2840/*"BATTLE_RESULT_GET_EP"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v15->EP_GET_LOCALE_KEY, v16, v17, v18, v19, v20, v21, v22);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30326 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Color___TypeInfo);
    byte_4D30326 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1C94140(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v4; // x20
  int32_t v5; // w24
  int32_t v6; // w21
  BattleResultItemComponent_o *v7; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v9; // w9
  struct BattleViewItemlistComponent_o *v10; // x8
  int v11; // w20
  int v12; // w21
  float v13; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D3030A & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3030A = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_27;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_27;
    if ( v6 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6,
                                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v7 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v9 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v9 )
          {
            v5 = v6;
            v4 = (UnityEngine_Object_o *)v7;
          }
          ++v6;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
      if ( this )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v10 = v2->fields.itemWindow;
        if ( v10 )
        {
          v11 = 0;
          v12 = v5 + 1;
          v13 = localPosition.fields.y + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v10->fields.itemObjectList;
            if ( !this )
              break;
            if ( v12 + v11 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v12 + v11,
                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0);
            if ( !this )
              break;
            v15.fields.x = (float)((float)(v11 % 7) * 110.0) + -22.0;
            v15.fields.y = v13 + (float)((float)(v11 / 7) * -113.57);
            v15.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0);
            v10 = v2->fields.itemWindow;
            ++v11;
          }
          while ( v10 );
        }
      }
    }
LABEL_27:
    sub_1C942F0(this, method);
  }
}


void BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4D3031D & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_endClose__);
    sub_1C94098(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D3031D = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C942E4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0),
        !window) )
  {
    sub_1C942F0(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattleResultItemComponent__DialogCallBack(BattleResultItemComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D30313 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30313 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C942F0(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__EndCloseDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D30314 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3502/*"CLOSE"*/);
    byte_4D30314 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3502/*"CLOSE"*/, 0);
}


int32_t BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w19
  __int64 v9; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v11; // x20
  const MethodInfo *v12; // x2
  _BOOL8 IsOpen; // x0
  __int64 v14; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v16; // w21
  signed __int64 i; // x25
  _DWORD *v18; // x8
  int32_t v19; // w22
  int32_t v20; // w24
  int64_t v21; // x23
  int32_t v22; // w22
  int32_t v23; // w24
  int64_t v24; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D30323 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30323 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0) )
  {
    sub_1C942F0(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v27 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v27.fields._current.fields.value )
      sub_1C942F0(0, v9);
    key = (int32_t)v27.fields._current.fields.key;
    v11 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v27.fields._current.fields.value,
                                           (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v11, (EventPointUpperReleaseEntity_array *)v11, v12);
    if ( !v11 )
      sub_1C942F0(IsOpen, v14);
    m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = IsOpen;
      for ( i = 0; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1C942F8(IsOpen);
        v18 = (_DWORD *)*((_QWORD *)&v11->fields.parentComp + i);
        if ( v16 )
        {
          if ( !v18 )
            sub_1C942F0(IsOpen, v14);
          v20 = v18[9];
          v19 = v18[10];
          v21 = (int)v18[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v20, v19, v21, 0, 0, 0);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v18 )
            sub_1C942F0(IsOpen, v14);
          v23 = v18[9];
          v22 = v18[10];
          v24 = (int)v18[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v23, v22, v24, 0, 0, 0);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v11->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      }
    }
    if ( v8 < key )
      v8 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v27,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v8;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w24
  EventPointUpperReleaseEntity_o *v9; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4D30324 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4D30324 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C942F8(Item);
      v9 = entities->m_Items[v8];
      if ( !v9 || !v4 )
        break;
      priority = v9->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v4,
              priority,
              (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          priority,
          (Il2CppObject *)v11,
          (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v4,
                                                            priority,
                                                            (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v19 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v9,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v9;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_18:
    sub_1C942F0(Item, v6);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v7; // w9
  EventPointUpperEntity_o *v8; // x10
  BalanceConfig_c *v9; // x0

  if ( (byte_4D30325 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D30325 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1C942F0(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    return v9->static_fields->UserPointEventMax;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_1C942F8(this);
      v8 = entities->m_Items[v7];
      if ( !v8 )
        goto LABEL_15;
      if ( v8->fields.priority == priority )
        return v8->fields.value;
      if ( max_length == ++v7 )
        goto LABEL_10;
    }
  }
}


bool BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v4; // w9
  int v5; // w10
  EventPointUpperReleaseEntity_o *v6; // x11
  int32_t condGroup; // w11

  if ( !entities )
    goto LABEL_12;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    v5 = -1;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_1C942F8(this);
      v6 = entities->m_Items[v4];
      if ( !v6 )
        break;
      condGroup = v6->fields.condGroup;
      if ( condGroup != v5 )
      {
        ++v4;
        v5 = condGroup;
        if ( max_length != v4 )
          continue;
      }
      return v4 < max_length;
    }
LABEL_12:
    sub_1C942F0(this, entities);
  }
  v4 = 0;
  return v4 < max_length;
}


bool BattleResultItemComponent__GetIsShowEventPointMax(
        BattleResultItemComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v6; // x20
  const MethodInfo *v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v9; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4D30322 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30322 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1C942F8(this);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1C942F0(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             HIDWORD(parentComp->fields.m_CachedPtr),
                                                             v7);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v9,
                   v12) <= userEventPoint;
  return (char)this;
}


void BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20

  if ( (byte_4D30303 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2833/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_4D30303 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_14;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2833/*"BATTLE_RESULTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_14;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_64453064((System_String_o *)window, (System_String_o *)StringLiteral_2833/*"BATTLE_RESULTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v4, 0);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1C942F0(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
}


void BattleResultItemComponent__OnClickSwitchShowMode(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v8; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D30320 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_OnClickSwitchShowMode__);
    sub_1C94098(&StringLiteral_17533/*"btn_bg_20"*/);
    sub_1C94098(&StringLiteral_17534/*"btn_bg_21"*/);
    byte_4D30320 = 1;
  }
  v3 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v8 = &StringLiteral_17533/*"btn_bg_20"*/) : (v8 = &StringLiteral_17534/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v8, 0),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0) )
  {
LABEL_18:
    sub_1C942F0(showModeChangeButton, v5);
  }
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &showModeChanButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !showModeChangeButton )
        goto LABEL_18;
      goto LABEL_16;
    }
LABEL_19:
    sub_1C942F8(showModeChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !showModeChangeButton )
    goto LABEL_18;
LABEL_16:
  v15.fields.a = *p_a;
  v15.fields.b = *p_b;
  v15.fields.g = *p_g;
  v15.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v15, 0);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_18;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0);
}


void BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4D30304 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_endOpen__);
    sub_1C94098(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&StringLiteral_5455/*"END_OPEN"*/);
    byte_4D30304 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5455/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C942E4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0),
        !window) )
  {
LABEL_9:
    sub_1C942F0(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v5,
    window->klass->vtable._10_Open.method);
  BattleResultItemComponent__setCondensedScale(this, v6);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D3030F & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
    byte_4D3030F = 1;
  }
  v3 = sub_1C942E4(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D3030E & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
    byte_4D3030E = 1;
  }
  v5 = sub_1C942E4(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleResultItemComponent__SetAddItemIconEffect(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v6; // w22
  int v7; // w23
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  struct BattleViewItemlistComponent_o *v11; // x8
  int32_t v12; // w28
  Il2CppObject *v13; // x20
  int32_t v14; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v16; // x23
  BattleResultItemComponent_o *v17; // x24
  BattleResultItemComponent_o *v18; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4D3030C & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_18911/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_1C94098(&StringLiteral_5860/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4D3030C = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v2->fields.g_eventId;
  v6 = 7 * (size / 7);
  if ( size == v6 )
    v7 = -21;
  else
    v7 = -14;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = v2->fields.animationSvtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v10 = System_String__Format_64459052((System_String_o *)StringLiteral_5860/*"Effect/BattleResult/{0}/{1}"*/, v8, v9, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v10, 0);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__51893132(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18911/*"ef_additem"*/,
                                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816),
        (v11 = v2->fields.itemWindow) == 0) )
  {
LABEL_30:
    sub_1C942F0(this, method);
  }
  v12 = v7 + v6;
  v13 = (Il2CppObject *)this;
  v14 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v11->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v14 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v12 <= v14 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v14,
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v16 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v13,
                                                (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v17 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_30;
        v18 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v2->fields.effectRoot, 0);
        if ( !byte_4D25F19 )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( !byte_4D25F1E )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F1E = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 0, 0);
        v16->fields.eventPointMaxSprite = (struct UISprite_o *)v17;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v16->fields.eventPointMaxSprite,
          (int32_t)v17,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
    }
    v11 = v2->fields.itemWindow;
    ++v14;
    if ( !v11 )
      goto LABEL_30;
  }
}


void BattleResultItemComponent__SetAddItemSvtAnimation(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  Il2CppObject *Object_object__51893132; // x20
  UnityEngine_GameObject_o *v9; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D3030B & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_18981/*"ef_presenter"*/);
    sub_1C94098(&StringLiteral_5860/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4D3030B = 1;
  }
  g_eventId = this->fields.g_eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v5 = System_String__Format_64459052((System_String_o *)StringLiteral_5860/*"Effect/BattleResult/{0}/{1}"*/, v3, v4, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v5, 0);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18981/*"ef_presenter"*/,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__51893132,
                                  (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v9 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0),
        (itemWindow = this->fields.itemWindow) == 0)
    || (v11 = (UnityEngine_Transform_o *)AssetStorage) == 0 )
  {
LABEL_16:
    sub_1C942F0(AssetStorage, v7);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UnityEngine_GameObject__SetActive(v9, 0, 0);
  this->fields.addItemSvtAnimationObj = v9;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.addItemSvtAnimationObj,
    (int32_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void BattleResultItemComponent__SetEventInfo(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUserPoint,
        int64_t addDamagePoint,
        int32_t boostRate,
        int32_t countQp,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass51_0_o *v18; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v22; // x21
  il2cpp_array_size_t v23; // x8
  UserEventPointEntity_o *v24; // x8
  int32_t v25; // w26
  int64_t EventPointNoGroup; // x0
  il2cpp_array_size_t max_length; // x8
  EventConquestInfo_o *v28; // x23
  Il2CppObject *v29; // x21
  EventConquestInfo_o *v30; // x8
  int64_t getNum; // x21
  int64_t MasterName_k__BackingField_high; // x22
  int32_t ImageId; // w4
  const MethodInfo *v34; // x7
  BattleResultItemComponent_o *v35; // x0
  int32_t v36; // w1
  int64_t v37; // x2
  int64_t v38; // x3
  bool IsShowEventPointMax; // w5
  int32_t v40; // w6
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v42; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v45; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v47; // x20
  int64_t v48; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v50; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v52; // x0
  BattleResultItemComponent_c *v53; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v55; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v57; // x20
  BattleResultItemComponent_c *v58; // x0
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v61; // x25
  System_Func_object__bool__o *v62; // x27
  __int64 v63; // x27
  const MethodInfo *v64; // x3
  UserEventPointEntity_o *v65; // x8
  int64_t v66; // x26
  UserEventPointEntity_o *v67; // x8
  int32_t v68; // w23
  int64_t v69; // [xsp+8h] [xbp-78h] BYREF
  int64_t v70; // [xsp+10h] [xbp-70h] BYREF
  int32_t v71; // [xsp+1Ch] [xbp-64h] BYREF

  v71 = eventId;
  if ( (byte_4D30308 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BattleResultItemComponent_TypeInfo);
    sub_1C94098(&Method_BetterList_string__Contains__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    sub_1C94098(&System_Func_UserEventPointEntity__bool__TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__);
    sub_1C94098(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_801/*"+ {0:#,0}"*/);
    byte_4D30308 = 1;
  }
  v18 = (BattleResultItemComponent___c__DisplayClass51_0_o *)sub_1C942E4(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass51_0___ctor(v18, 0);
  if ( !v18 )
    goto LABEL_92;
  v18->fields.eventGroupId = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___GetEntity(
          Master_object,
          eventId,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             eventId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v22 = (EventDetailEntity_o *)Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPoint(
                                                                  (EventDetailEntity_o *)Entity,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v23 = oldUserPoint->max_length) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      max_length = eventConquestInfos->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
        goto LABEL_93;
      v28 = eventConquestInfos->m_Items[0];
      if ( !v28 || v28->fields.rewardNum < 1 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( v29 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__GetEntityDefinitely(
                                                                        (UserItemMaster_o *)v29,
                                                                        (int64_t)Master_object[2].fields.list[1].monitor,
                                                                        v28->fields.objectId,
                                                                        0);
        if ( !LODWORD(eventConquestInfos->max_length) )
          goto LABEL_93;
        v30 = eventConquestInfos->m_Items[0];
        if ( v30 )
        {
          if ( Master_object )
          {
            getNum = v30->fields.getNum;
            MasterName_k__BackingField_high = SHIDWORD(Master_object->fields._MasterName_k__BackingField);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              Master_object,
                                                                              v28->fields.objectId,
                                                                              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
                v35 = this;
                v36 = eventId;
                v37 = getNum;
                v38 = MasterName_k__BackingField_high;
                IsShowEventPointMax = 0;
                v40 = 0;
LABEL_91:
                BattleResultItemComponent__SetEventPointUi(v35, v36, v37, v38, ImageId, IsShowEventPointMax, v40, v34);
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( addDamagePoint < 0 )
        return;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_92;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v42 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0, 0) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v42, eventId, 0);
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v45->static_fields->UserRaidDamagePointMax;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v47 = System_Math__Min_65939904(TotalDamagePoint, UserRaidDamagePointMax, 0);
      v48 = System_Math__Min_65939904(addDamagePoint, BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax, 0);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v70 = v48;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v70);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                      (System_String_o *)StringLiteral_801/*"+ {0:#,0}"*/,
                                                                      v50,
                                                                      0);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v69 = v47;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v69);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_25304/*"{0:#,0}"*/,
                                                                        v52,
                                                                        0);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0);
          v53 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
            v53 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v53->static_fields->DP_SP_BASE_NAME;
          v55 = System_Int32__ToString((int32_t)&v71, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_64417744(
                                                                          DP_SP_BASE_NAME,
                                                                          v55,
                                                                          0);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v57 = (Il2CppObject *)Master_object;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UIAtlas__GetListOfSprites(
                                                                              (UIAtlas_o *)Master_object,
                                                                              0);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v57,
                        (const MethodInfo_33D37E4 *)Method_BetterList_string__Contains__) )
                {
                  v58 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v58 = BattleResultItemComponent_TypeInfo;
                  }
                  v57 = (Il2CppObject *)v58->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v57, 0);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v22->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.rootEventDamagePoint;
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_92:
    sub_1C942F0(Master_object, v20);
  }
  if ( !(_DWORD)v23 )
    goto LABEL_93;
  v24 = oldUserPoint->m_Items[0];
  if ( !v24 )
    goto LABEL_92;
  v25 = v18->fields.eventGroupId;
  if ( v25 > 0 || !v24->fields.groupId )
  {
    if ( v25 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v25, 0);
    v61 = EventPointNoGroup;
    v62 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v62,
      (Il2CppObject *)v18,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__First_object__52180708(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                                                                    (System_Func_TSource__bool__o *)v62,
                                                                    (const MethodInfo_31C36E4 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v25 <= 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_93;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_92;
    }
    else if ( !Master_object )
    {
      goto LABEL_92;
    }
    v63 = v61 - *(_QWORD *)&Master_object->fields.revision;
    if ( v61 <= 0 && v63 < 1 )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPointByQp(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_93;
      v65 = oldUserPoint->m_Items[0];
      if ( !v65 )
        goto LABEL_92;
      v66 = v65->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v61, v64) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleResultItemComponent__GetIsShowEventPointMax(
                                                                        this,
                                                                        v22,
                                                                        v66,
                                                                        v64);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v66 = v61;
        if ( LODWORD(oldUserPoint->max_length) )
        {
          v67 = oldUserPoint->m_Items[0];
          if ( !v67 )
            goto LABEL_92;
          v63 = v66 - v67->fields.value;
          goto LABEL_90;
        }
LABEL_93:
        sub_1C942F8(Master_object);
      }
      v63 = countQp;
    }
    else
    {
      v66 = v61;
    }
LABEL_90:
    v68 = v22->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v66, v64);
    v35 = this;
    v36 = eventId;
    v37 = v63;
    v38 = v66;
    ImageId = v68;
    v40 = boostRate;
    goto LABEL_91;
  }
}


void BattleResultItemComponent__SetEventPointUi(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        int64_t addEventPoint,
        int64_t totalEventPoint,
        int32_t imageId,
        bool isEventPointMax,
        int32_t boostRate,
        const MethodInfo *method)
{
  UILabel_o *getEventPointLabel; // x25
  Il2CppObject *v15; // x0
  System_String_o *IfExists; // x0
  System_String_o *v17; // x1
  UILabel_o *nowEventPointLabel; // x24
  Il2CppObject *v19; // x0
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v22; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v27; // x9
  UILabel_o *v28; // x22
  __int64 v29; // x0
  BattleResultItemComponent_c *v30; // x8
  __int64 v31; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_String_o *v46; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  BattleResultItemComponent_c *v50; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v52; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v54; // x21
  BattleResultItemComponent_c *v55; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v57; // [xsp+8h] [xbp-68h] BYREF
  int64_t v58; // [xsp+10h] [xbp-60h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-54h] BYREF

  v59 = eventId;
  if ( (byte_4D30309 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&BattleResultItemComponent_TypeInfo);
    sub_1C94098(&Method_BetterList_string__Contains__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_2841/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_801/*"+ {0:#,0}"*/);
    byte_4D30309 = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v58 = addEventPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58);
  IfExists = System_String__Format((System_String_o *)StringLiteral_801/*"+ {0:#,0}"*/, v15, 0);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v57 = totalEventPoint;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v57);
  IfExists = System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v19, 0);
  if ( !nowEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(nowEventPointLabel, IfExists, 0);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(eventIconSprite, imageId, 0);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel )
    goto LABEL_49;
  v22 = 24;
  if ( boostRate > 0 )
    v22 = 28;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v22),
    0);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
  v24 = BattleResultItemComponent_TypeInfo;
  v25 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v24 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v24->static_fields;
  v27 = 16;
  if ( boostRate > 0 )
    v27 = 20;
  GameObjectExtensions__SetLocalPositionY(v25, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v27), 0);
  v28 = this->fields.getTitleLabel;
  v29 = sub_1C94140(string___TypeInfo, 2);
  v30 = BattleResultItemComponent_TypeInfo;
  v31 = v29;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v30 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v30->static_fields->EP_GET_LOCALE_KEY;
  v33 = System_Int32__ToString((int32_t)&v59, 0);
  IfExists = System_String__Concat_64417744(EP_GET_LOCALE_KEY, v33, 0);
  if ( !v31 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v31 + 24)
    || (*(_QWORD *)(v31 + 32) = IfExists,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)IfExists, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v31 + 24) <= 1u) )
  {
    sub_1C942F8(IfExists);
  }
  v46 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v31 + 40) = v46;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 40), (int32_t)v46, v40, v41, v42, v43, v44, v45);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v31, 0);
  if ( !v28 )
LABEL_49:
    sub_1C942F0(IfExists, v17);
  UILabel__set_text(v28, IfExists, 0);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2841/*"BATTLE_RESULT_GET_EP_RATE"*/, 0);
    *(float *)&v58 = (float)((float)boostRate / 1000.0) + 1.0;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v58);
    IfExists = System_String__Format(v48, v49, 0);
    v17 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v17, 0);
  v50 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v50 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v50->static_fields->EP_SP_BASE_NAME;
  v52 = System_Int32__ToString((int32_t)&v59, 0);
  IfExists = System_String__Concat_64417744(EP_SP_BASE_NAME, v52, 0);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v54 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v54,
          (const MethodInfo_33D37E4 *)Method_BetterList_string__Contains__) )
  {
    v55 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
      v55 = BattleResultItemComponent_TypeInfo;
    }
    v54 = (Il2CppObject *)v55->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v54, 0);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0, 0) )
  {
    IfExists = (System_String_o *)this->fields.eventPointMaxSprite;
    if ( !IfExists )
      goto LABEL_49;
    IfExists = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
    if ( !IfExists )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, isEventPointMax, 0);
  }
  IfExists = (System_String_o *)this->fields.rootEventPoint;
  if ( !IfExists )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetGroupEventRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        System_Int32_array *viewGroupIds,
        int64_t conquestRewardQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalRootObj; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0)) == 0
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0) )
  {
    sub_1C942F0(nomalRootObj, *(_QWORD *)&eventId);
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    (BattleResultEventItemGroupComponent_o *)nomalRootObj,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetNormalRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        int32_t boostRate,
        int32_t conquestRewardQp,
        int32_t firstClearRewardQp,
        UserGameEntity_o *oldGame,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v24; // x0
  int64_t qp; // x28
  int64_t QpMax; // x8
  int64_t v27; // x26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v31; // [xsp+8h] [xbp-78h]
  int64_t v32; // [xsp+10h] [xbp-70h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D30307 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_801/*"+ {0:#,0}"*/);
    byte_4D30307 = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0);
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0);
  getQpLabel = this->fields.getQpLabel;
  v33 = countQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_801/*"+ {0:#,0}"*/, v24, 0);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_30;
    v27 = oldGame->fields.qp + countQp;
    if ( v27 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v27 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v27 = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
    }
  }
  else
  {
    v27 = userGame->fields.qp - (firstClearRewardQp + (__int64)conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v32 = v27;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v29, 0);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0) )
  {
LABEL_30:
    sub_1C942F0(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0, 0) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
      goto LABEL_27;
    }
    goto LABEL_30;
  }
LABEL_27:
  if ( eventId >= 1 )
    BattleResultItemComponent__SetEventInfo(
      this,
      eventId,
      oldUsrPoint,
      addDamagePoint,
      boostRate,
      countQp,
      eventConquestInfos,
      isNotDisplayEventPoint,
      eventGroupId,
      v31);
}


void BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v10; // x2
  struct BattleViewItemlistComponent_o *v11; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v13; // s8
  float v14; // s10
  float v15; // s9
  System_Collections_IEnumerator_o *v16; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3030D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4D3030D = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)itemWindow->fields.itemObjectList;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)addItemSvtAnimationObj,
                                                         LODWORD(addItemSvtAnimationObj[1].klass) - 1,
                                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v18.fields.y = y;
  v18.fields.z = z;
  v18.fields.x = x + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v18, 0);
  v11 = this->fields.itemWindow;
  if ( !v11 )
    goto LABEL_19;
  itemObjectList = v11->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_19;
  if ( itemObjectList->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0);
      if ( addItemSvtAnimationObj )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v13 = localPosition.fields.x;
          v14 = localPosition.fields.y;
          v15 = localPosition.fields.z;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0);
          if ( addItemSvtAnimationObj )
          {
            v20.fields.y = v14 + 9.0;
            v20.fields.x = v13;
            v20.fields.z = v15;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v20, 0);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1C942F0(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v16 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D3031B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3031B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C942F0(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D3031E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D3031E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C942F0(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
}


void BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3031C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3502/*"CLOSE"*/);
    byte_4D3031C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3502/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endItemDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D30318 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3502/*"CLOSE"*/);
    byte_4D30318 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3502/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D30305 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D30305 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9285/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_1C942F0(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0);
}


BattleDropItem_o *BattleResultItemComponent__getNewDrop(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v6; // x8
  BattleDropItem_o *v7; // x19

  if ( (byte_4D3031F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4D3031F = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_1C942F0(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


void BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D30317 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_1C94098(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_4D30317 = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_1C942F0(v8, v9);
  ItemDetailInfoComponent__Close_33886108(itemDialog, v7, 0);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D30310 & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
    byte_4D30310 = 1;
  }
  v6 = sub_1C942E4(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v6,
    0,
    0);
  if ( !v6 )
    sub_1C942F0(v7, v8);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)dropItem, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleResultItemComponent__setCondensedScale(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4D30321 & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent_TypeInfo);
    byte_4D30321 = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0,
          0),
        (getBoostLabel = this->fields.getBoostLabel) == 0) )
  {
    sub_1C942F0(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0,
    0);
}


void BattleResultItemComponent__setResultData(
        BattleResultItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t getqp,
        int32_t originalGetQp,
        UserGameEntity_o *oldGame,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        System_Int32_array *viewGroupIds,
        int32_t boostRate,
        DropUpInfo_array *dropupinfos,
        EventConquestInfo_array *eventConquestInfos,
        int32_t firstClearRewardQp,
        bool isNotDisplayEventPoint,
        BattleResultAddRewardBonus_o *rewardBonus,
        const MethodInfo *method)
{
  __int64 v24; // x26
  System_Collections_Generic_List_object__o *v25; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o **v34; // x24
  System_Collections_Generic_List_object__o *v35; // x27
  System_Predicate_object__o *v36; // x22
  Il2CppObject *v37; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x22
  __int64 v53; // x8
  int v54; // w9
  System_Predicate_object__o **v55; // x25
  System_Predicate_object__o *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  _DWORD *v63; // x22
  int max_length; // w8
  __int64 v65; // x9
  BattleDropItem_o *v66; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_Collections_Generic_List_object__o *v74; // x23
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v76; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v78; // x26
  struct BattleResultItemComponent___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v87; // x23
  BattleDropItemComponent_ClickDelegate_o *v88; // x25
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x28
  int32_t v94; // w26
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  int klass; // w8
  UserEventEntity_array *v103; // x2
  int64_t v104; // x4
  int v105; // w8
  int v106; // w20
  int32_t v107; // w29
  EventConquestInfo_o *v108; // x22
  int v109; // w8
  il2cpp_array_size_t v110; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v113; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v114; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4D30306 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Find_DropUpInfo___);
    sub_1C94098(&BattleDropItem_TypeInfo);
    sub_1C94098(&Method_BattleResultItemComponent_setShowConf__);
    sub_1C94098(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C94098(&System_Predicate_DropUpInfo__TypeInfo);
    sub_1C94098(&System_Predicate_BattleDropItem__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_1C94098(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_1C94098(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_1C94098(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_1C94098(&BattleResultItemComponent___c_TypeInfo);
    byte_4D30306 = 1;
  }
  entity = 0;
  memset(&v118, 0, sizeof(v118));
  v24 = sub_1C942E4(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v24, 0);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v24 )
    goto LABEL_27;
  *(_QWORD *)(v24 + 16) = v25;
  v34 = (System_Collections_Generic_List_object__o **)(v24 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 16), (int32_t)v25, v28, v29, v30, v31, v32, v33);
  object = *(void **)(v24 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v35 = *v34;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v36 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)object + 23);
    v36 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v36, v37, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v36;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__48_0, (int32_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v35 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v35,
          (System_Predicate_T__o *)v36,
          (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.newDroplist, (int32_t)All, v46, v47, v48, v49, v50, v51);
  if ( getqp >= 1 )
  {
    v52 = sub_1C942E4(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v52, 0);
    if ( !v52 )
      goto LABEL_27;
    *(_QWORD *)(v52 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v52, getqp, originalGetQp, 0);
    object = *v34;
    if ( !*v34 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v52,
      (const MethodInfo_386BBE4 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v114 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v53 = *(_QWORD *)(v24 + 16);
    *(_DWORD *)(v24 + 24) = 0;
    if ( !v53 )
      goto LABEL_27;
    v54 = 0;
    v55 = (System_Predicate_object__o **)(v24 + 32);
    while ( v54 < *(_DWORD *)(v53 + 24) )
    {
      v56 = *v55;
      if ( !*v55 )
      {
        v56 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v56,
          (Il2CppObject *)v24,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0);
        *(_QWORD *)(v24 + 32) = v56;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v56, v57, v58, v59, v60, v61, v62);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v56,
                 (const MethodInfo_32A2954 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v63 = object;
        object = *v34;
        if ( !*v34 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v24 + 24),
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v63[5];
      }
      v53 = *(_QWORD *)(v24 + 16);
      v54 = *(_DWORD *)(v24 + 24) + 1;
      *(_DWORD *)(v24 + 24) = v54;
      if ( !v53 )
        goto LABEL_27;
    }
  }
  if ( rewardBonus )
  {
    gifts = rewardBonus->fields.gifts;
    if ( gifts )
    {
      max_length = gifts->max_length;
      if ( max_length >= 1 )
      {
        v65 = 0;
        while ( (unsigned int)v65 < max_length )
        {
          v66 = gifts->m_Items[v65];
          if ( !v66 )
            goto LABEL_27;
          ++v65;
          v66->fields.isAddReward = 1;
          if ( (int)v65 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1C942F8(object);
      }
LABEL_35:
      object = *v34;
      if ( !*v34 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.voiceIds,
        (int32_t)voiceIds,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v74 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v74,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v74 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v74,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v76 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v76 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v76->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = BattleResultItemComponent___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(_9__48_2, v78, Method_BattleResultItemComponent___c__setResultData_b__48_2__, 0);
        v79 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v79->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v79->__9__48_2, (int32_t)_9__48_2, v80, v81, v82, v83, v84, v85);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v74,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1C942F0(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v34;
  if ( !*v34 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v87 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v88 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C942E4(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v88,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_48482332(
    itemWindow,
    v87,
    eventIda,
    v88,
    this->fields.itemColumnCount,
    0);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v89);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v90);
    BattleResultItemComponent__SetAddItemIconEffect(this, v91);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v34 )
    goto LABEL_27;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    *v34,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v94 = 0;
  v118 = v117;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v95 )
      break;
    current = (BattleDropItem_o *)v118.fields._current;
    if ( !v118.fields._current )
      sub_1C942F0(v95, v96);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v118.fields._current, 0);
    if ( current->fields.type == 2 )
    {
      if ( !v93 )
        sub_1C942F0(isAutoSellItem, v99);
      v100 = DataMasterBase_object__object__int___GetEntity(
               v93,
               current->fields.objectId,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v100 )
        sub_1C942F0(0, v101);
      klass = (int)v100[3].klass;
      if ( klass == 1 || klass == 16 )
        v94 += BattleDropItem__getTotalNum(current, 0);
    }
    v94 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v105 = eventConquestInfos->max_length;
  if ( v105 < 1 )
  {
    v107 = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v106 = 0;
    v107 = 0;
    do
    {
      if ( v106 >= (unsigned int)v105 )
        goto LABEL_94;
      v108 = eventConquestInfos->m_Items[v106];
      if ( !v108 )
        goto LABEL_27;
      if ( v108->fields.type == 2 )
      {
        if ( !v93 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v93,
                   v108->fields.objectId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v109 = *((_DWORD *)object + 12);
          if ( v109 == 16 || v109 == 1 )
            v107 += v108->fields.getNum;
        }
      }
      v105 = eventConquestInfos->max_length;
      ++v106;
    }
    while ( v106 < v105 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v110 = viewGroupIds->max_length;
  if ( (_DWORD)v110 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      object = entity;
      if ( !entity )
        goto LABEL_27;
      object = (void *)EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0);
      if ( ((unsigned __int8)object & 1) != 0 )
      {
        if ( !LODWORD(viewGroupIds->max_length) )
          goto LABEL_94;
        eventGroupId = viewGroupIds->m_Items[0];
        goto LABEL_93;
      }
    }
    v110 = viewGroupIds->max_length;
  }
  if ( v110 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v103,
      oldUsrPointa,
      v104,
      SelfUserGame,
      v94,
      viewGroupIds,
      v107,
      (const MethodInfo *)oldGamea);
    return;
  }
  eventGroupId = 0;
LABEL_93:
  BattleResultItemComponent__SetNormalRoot(
    this,
    eventIda,
    oldUsrPointa,
    addDamagePoint,
    SelfUserGame,
    v94,
    boostRate,
    v107,
    firstClearRewardQp,
    v114,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v113);
}


void BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D30319 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9658/*"OPEN_COMMANDCODE"*/);
    byte_4D30319 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1C942F0(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9658/*"OPEN_COMMANDCODE"*/, 0);
}


void BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_1C942F0(this, 0);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D30315 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9665/*"OPEN_ITEM"*/);
    byte_4D30315 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1C942F0(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9665/*"OPEN_ITEM"*/, 0);
}


void BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4D30311 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C94098(&StringLiteral_9673/*"OPEN_SERVANT"*/);
    byte_4D30311 = 1;
  }
  v4->fields.tmp_userSvtId = 0;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0) )
  {
    sub_1C942F0(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9673/*"OPEN_SERVANT"*/, 0);
}


void BattleResultItemComponent__showCommandCodeDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_4D3031A & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3031A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_1C942F0(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_31596060((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_4D30316 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_1C94098(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30316 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C942F0(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0);
}


void BattleResultItemComponent__showServantDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4D30312 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30312 = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v5 = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31592660((CommonUI_o *)Instance, 0, v5, v6, 0, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31596756((CommonUI_o *)Instance, 0, tmp_svtId, v10, 0);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v2; // x20
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v7; // x9
  __int128 v8; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_object; // x0
  __int64 v19; // x1
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v21; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v23; // x1
  struct BattleResultComponent_o *parentComp; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v27; // x8
  BattleResultComponent_o *v28; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v30; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_Enumerator_T__o v38[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v39; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v40; // [xsp+58h] [xbp-28h] BYREF

  v40 = this;
  v2 = this;
  if ( (byte_4D3032A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D3032A = 1;
  }
  v39 = &v40;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_1C942F0(this, method);
    itemObjectList = (System_Collections_Generic_List_object__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_1C942F0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v38,
      itemObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v7 = v40;
    v8 = *(_OWORD *)&v38[0].fields._list;
    p__7__wrap1 = &v40->fields.__7__wrap1;
    v38[1] = v38[0];
    v40->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v38[0].fields._current;
    *(_OWORD *)&v7->fields.__7__wrap1.fields._list = v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v10, v11, v12, v13, v14, v15);
    v2 = v40;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v40->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C942F0(0, v16);
    Component_object = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      current,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1C942F0(0, v19);
    itemData = Component_object->fields.itemData;
    if ( !itemData )
      sub_1C942F0(Component_object, v19);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_1C942F0(Component_object, v19);
      v21 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_object->fields.itemIconEffectObj,
              Component_object,
              0);
      started = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v21, 0);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_1C942F0(started, v23);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v30 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v30, 0.01, 0);
        v31 = v40;
        v40->fields.__2__current = (Il2CppObject *)v30;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v31->fields.__2__current,
          (int32_t)v30,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        result = 1;
        v40->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v40;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v40, v16);
  v27 = v40;
  v40->fields.__7__wrap1.fields._list = 0;
  *(_QWORD *)&v27->fields.__7__wrap1.fields._index = 0;
  v27->fields.__7__wrap1.fields._current = 0;
  if ( !_4__this )
    sub_1C942F0(v25, v26);
  v28 = _4__this->fields.parentComp;
  if ( !v28 )
    sub_1C942F0(0, v26);
  BattleResultComponent__QpFix(v28, 0);
  return 0;
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(this, method);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3032B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_4D3032B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayVoiceCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v8; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v19; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v28; // x0
  System_Random_o *v29; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  unsigned int v32; // w22
  System_String_o *v33; // x0
  struct System_String_array *v34; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v35; // x21
  System_String_o *v36; // x22
  SeManager_c *v37; // x0
  Il2CppObject *v38; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v40; // x23
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v41; // x8
  struct BattleResultComponent_o *v42; // x8
  GrandQuestFolderBoardItem_o *v43; // x19

  v8 = this;
  if ( (byte_4D3032C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&System_Random_TypeInfo);
    sub_1C94098(&SeManager_TypeInfo);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__);
    sub_1C94098(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1C94098(&StringLiteral_12815/*"Servants_"*/);
    byte_4D3032C = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_30;
    }
    else
    {
      if ( _1__state )
        return 0;
      v8->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_1C942E4(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v11, 0);
      v8->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v11;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0);
        v8->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
    }
    v28 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0);
    v29 = (System_Random_o *)sub_1C942E4(System_Random_TypeInfo);
    System_Random___ctor(v29, 0);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v29 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, const MethodInfo *))v29->klass->vtable._6_Next.methodPtr)(
                                                                      v29,
                                                                      0,
                                                                      LODWORD(voiceIds->max_length),
                                                                      v29->klass->vtable._6_Next.method);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v32 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v33 = System_Int32__ToString((int)_4__this + 272, 0);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_64417744(
                                                                      (System_String_o *)StringLiteral_12815/*"Servants_"*/,
                                                                      v33,
                                                                      0);
    v34 = _4__this->fields.voiceIds;
    if ( !v34 )
      goto LABEL_30;
    if ( v32 >= LODWORD(v34->max_length) )
      sub_1C942F8(this);
    v35 = this;
    v36 = v34->m_Items[v32];
    v37 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v37 = SeManager_TypeInfo;
    }
    v38 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_VOLUME = v37->static_fields->DEFAULT_VOLUME;
    v40 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v40, v38, Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_42281128(
                                                                      (System_String_o *)v35,
                                                                      v36,
                                                                      DEFAULT_VOLUME,
                                                                      v40,
                                                                      0,
                                                                      0);
  }
  v41 = v8->fields.__8__1;
  if ( !v41 )
    goto LABEL_30;
  if ( v41->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v8->fields.callback, 0);
    return 0;
  }
  if ( !_4__this || (v42 = _4__this->fields.parentComp) == 0 )
LABEL_30:
    sub_1C942F0(this, method);
  if ( v42->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v8->fields.__2__current = 0;
  v43 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(v43, 0, v2, v3, v4, v5, v6, v7);
  LODWORD(v43[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30328 & 1) == 0 )
  {
    sub_1C94098(&BattleResultItemComponent___c_TypeInfo);
    byte_4D30328 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C942F0(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_41175504(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_41175896(s->fields.type, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C942F0(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_41175504(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_41175896(s->fields.type, 0);
}


void BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  int32_t itemId; // w19

  v4 = this;
  if ( (byte_4D30329 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4D30329 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0) )
  {
    sub_1C942F0(this, e);
  }
  return itemId == this->fields.i;
}


void BattleResultItemComponent___c__DisplayClass51_0___ctor(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass51_0___SetEventInfo_b__0(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        UserEventPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.groupId == this->fields.eventGroupId;
}


void BattleResultItemComponent___c__DisplayClass57_0___ctor(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultItemComponent___c__DisplayClass57_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v5; // x20
  UnityEngine_WaitForSeconds_o *v6; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D3032D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D3032D = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_19;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0, 0) )
      goto LABEL_14;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0);
        if ( v2->fields.dropItem )
        {
          v5 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0);
          if ( this )
          {
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
            if ( v5 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v5, position, 0);
LABEL_14:
              v6 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v6, 0.2333, 0);
              v2->fields.__2__current = (Il2CppObject *)v6;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C9403C(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
              result = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C942F0(this, method);
  }
  return 0;
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  ;
}