void BattleResultItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleResultItemComponent_StaticFields *v7; // x0
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A66E & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_20351/*"img_bg_total_dp"*/);
    sub_1C3E564(&StringLiteral_2844/*"BATTLE_RESULT_GET_EP"*/);
    sub_1C3E564(&StringLiteral_20352/*"img_bg_total_ep"*/);
    byte_4C5A66E = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20352/*"img_bg_total_ep"*/;
  sub_1C3E508((CGThumbnailListItem_o *)BattleResultItemComponent_TypeInfo->static_fields, StringLiteral_20352/*"img_bg_total_ep"*/, v1, v2);
  v3 = StringLiteral_20351/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20351/*"img_bg_total_dp"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->DP_SP_BASE_NAME, v3, v5, v6);
  v7 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v7->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v7->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v8 = StringLiteral_2844/*"BATTLE_RESULT_GET_EP"*/;
  v7->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2844/*"BATTLE_RESULT_GET_EP"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->EP_GET_LOCALE_KEY, v8, v9, v10);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5A66D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Color___TypeInfo);
    byte_4C5A66D = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1C3E60C(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.showModeChanButtonLabelEffectColors, (int32_t)v3, v4, v5);
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
  if ( (byte_4C5A651 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A651 = 1;
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
                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v7 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
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
                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
    sub_1C3E7C0(this, method);
  }
}


void BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4C5A664 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_endClose__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C5A664 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0),
        !window) )
  {
    sub_1C3E7C0(itemWindow, method);
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

  if ( (byte_4C5A65A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5A65A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C3E7C0(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__EndCloseDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A65B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A65B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
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

  if ( (byte_4C5A66A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A66A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0) )
  {
    sub_1C3E7C0(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v27 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v27.fields._current.fields.value )
      sub_1C3E7C0(0, v9);
    key = (int32_t)v27.fields._current.fields.key;
    v11 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v27.fields._current.fields.value,
                                           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v11, (EventPointUpperReleaseEntity_array *)v11, v12);
    if ( !v11 )
      sub_1C3E7C0(IsOpen, v14);
    m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = IsOpen;
      for ( i = 0; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1C3E7C8(IsOpen, v14);
        v18 = (_DWORD *)*((_QWORD *)&v11->fields.parentComp + i);
        if ( v16 )
        {
          if ( !v18 )
            sub_1C3E7C0(IsOpen, v14);
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
            sub_1C3E7C0(IsOpen, v14);
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
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4C5A66B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4C5A66B = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C3E7C8(Item, v6);
      v9 = entities->m_Items[v8];
      if ( !v9 || !v4 )
        break;
      priority = v9->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v4,
              priority,
              (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          priority,
          (Il2CppObject *)v11,
          (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v4,
                                                            priority,
                                                            (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v15 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v9,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
      }
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_18:
    sub_1C3E7C0(Item, v6);
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

  if ( (byte_4C5A66C & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5A66C = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1C3E7C0(this, *(_QWORD *)&priority);
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
        sub_1C3E7C8(this, *(_QWORD *)&priority);
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
        sub_1C3E7C8(this, entities);
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
    sub_1C3E7C0(this, entities);
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
  if ( (byte_4C5A669 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A669 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
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
    sub_1C3E7C8(this, eventDetailEntity);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1C3E7C0(this, eventDetailEntity);
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

  if ( (byte_4C5A64A & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2837/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_4C5A64A = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2837/*"BATTLE_RESULTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_14;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_63671772((System_String_o *)window, (System_String_o *)StringLiteral_2837/*"BATTLE_RESULTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v4, 0);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1C3E7C0(window, method);
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

  if ( (byte_4C5A667 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_OnClickSwitchShowMode__);
    sub_1C3E564(&StringLiteral_17464/*"btn_bg_20"*/);
    sub_1C3E564(&StringLiteral_17465/*"btn_bg_21"*/);
    byte_4C5A667 = 1;
  }
  v3 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v8 = &StringLiteral_17464/*"btn_bg_20"*/) : (v8 = &StringLiteral_17465/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v8, 0),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(showModeChangeButton, v5);
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
    sub_1C3E7C8(showModeChangeButton, v5);
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

  if ( (byte_4C5A64B & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_endOpen__);
    sub_1C3E564(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&StringLiteral_5451/*"END_OPEN"*/);
    byte_4C5A64B = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5451/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C3E7B0(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0),
        !window) )
  {
LABEL_9:
    sub_1C3E7C0(touchNextRoot, method);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5A656 & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
    byte_4C5A656 = 1;
  }
  v3 = sub_1C3E7B0(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5A655 & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
    byte_4C5A655 = 1;
  }
  v5 = sub_1C3E7B0(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 48), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleResultItemComponent__SetAddItemIconEffect(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  BattleResultItemComponent_o *v8; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v12; // w22
  int v13; // w23
  Il2CppObject *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  struct BattleViewItemlistComponent_o *v23; // x8
  int32_t v24; // w28
  Il2CppObject *v25; // x20
  int32_t v26; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v28; // x23
  BattleResultItemComponent_o *v29; // x24
  BattleResultItemComponent_o *v30; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4C5A653 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18814/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_1C3E564(&StringLiteral_5855/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4C5A653 = 1;
  }
  itemWindow = v8->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v8->fields.g_eventId;
  v12 = 7 * (size / 7);
  if ( size == v12 )
    v13 = -21;
  else
    v13 = -14;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4, v5, v6, v7);
  animationSvtId = v8->fields.animationSvtId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v15, v16, v17, v18, v19, v20);
  v22 = System_String__Format_63677760((System_String_o *)StringLiteral_5855/*"Effect/BattleResult/{0}/{1}"*/, v14, v21, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v22, 0);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__51228128(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18814/*"ef_additem"*/,
                                                (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152),
        (v23 = v8->fields.itemWindow) == 0) )
  {
LABEL_30:
    sub_1C3E7C0(this, method);
  }
  v24 = v13 + v12;
  v25 = (Il2CppObject *)this;
  v26 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v23->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v26 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v24 <= v26 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v26,
                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v28 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v25,
                                                (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v29 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_30;
        v30 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v8->fields.effectRoot, 0);
        if ( !byte_4C506A1 )
        {
          sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
          byte_4C506A1 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v30,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( !byte_4C506A6 )
        {
          sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
          byte_4C506A6 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v30,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v29, 0, 0);
        v28->fields.eventPointMaxSprite = (struct UISprite_o *)v29;
        sub_1C3E508((CGThumbnailListItem_o *)&v28->fields.eventPointMaxSprite, (int32_t)v29, v31, v32);
      }
    }
    v23 = v8->fields.itemWindow;
    ++v26;
    if ( !v23 )
      goto LABEL_30;
  }
}


void BattleResultItemComponent__SetAddItemSvtAnimation(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  Il2CppObject *Object_object__51228128; // x20
  UnityEngine_GameObject_o *v21; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A652 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18873/*"ef_presenter"*/);
    sub_1C3E564(&StringLiteral_5855/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4C5A652 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4, v5, v6, v7);
  animationSvtId = this->fields.animationSvtId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v10, v11, v12, v13, v14, v15);
  v17 = System_String__Format_63677760((System_String_o *)StringLiteral_5855/*"Effect/BattleResult/{0}/{1}"*/, v9, v16, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v17, 0);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18873/*"ef_presenter"*/,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__51228128,
                                  (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v21 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0),
        (itemWindow = this->fields.itemWindow) == 0)
    || (v23 = (UnityEngine_Transform_o *)AssetStorage) == 0 )
  {
LABEL_16:
    sub_1C3E7C0(AssetStorage, v19);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C506A6 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UnityEngine_GameObject__SetActive(v21, 0, 0);
  this->fields.addItemSvtAnimationObj = v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.addItemSvtAnimationObj, (int32_t)v21, v24, v25);
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
  __int64 v18; // x28
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
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  Il2CppObject *v56; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x0
  BattleResultItemComponent_c *v65; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v67; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v69; // x20
  BattleResultItemComponent_c *v70; // x0
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v73; // x25
  System_Func_object__bool__o *v74; // x27
  __int64 v75; // x27
  const MethodInfo *v76; // x3
  UserEventPointEntity_o *v77; // x8
  int64_t v78; // x26
  UserEventPointEntity_o *v79; // x8
  int32_t v80; // w23
  int64_t v81; // [xsp+8h] [xbp-78h] BYREF
  int64_t v82; // [xsp+10h] [xbp-70h] BYREF
  int32_t v83; // [xsp+1Ch] [xbp-64h] BYREF

  v83 = eventId;
  if ( (byte_4C5A64F & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&BattleResultItemComponent_TypeInfo);
    sub_1C3E564(&Method_BetterList_string__Contains__);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    sub_1C3E564(&System_Func_UserEventPointEntity__bool__TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__);
    sub_1C3E564(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    sub_1C3E564(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C5A64F = 1;
  }
  v18 = sub_1C3E7B0(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_92;
  *(_DWORD *)(v18 + 16) = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___GetEntity(
          Master_object,
          eventId,
          (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             eventId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
      v29 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
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
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              Master_object,
                                                                              v28->fields.objectId,
                                                                              (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_92;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
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
      v47 = System_Math__Min_65160240(TotalDamagePoint, UserRaidDamagePointMax, 0);
      v48 = System_Math__Min_65160240(addDamagePoint, BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax, 0);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v82 = v48;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v82, v50, v51, v52, v53, v54, v55);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                      (System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/,
                                                                      v56,
                                                                      0);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v81 = v47;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v81, v58, v59, v60, v61, v62, v63);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_25072/*"{0:#,0}"*/,
                                                                        v64,
                                                                        0);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0);
          v65 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
            v65 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v65->static_fields->DP_SP_BASE_NAME;
          v67 = System_Int32__ToString((int32_t)&v83, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63636468(
                                                                          DP_SP_BASE_NAME,
                                                                          v67,
                                                                          0);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v69 = (Il2CppObject *)Master_object;
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
                        v69,
                        (const MethodInfo_332C048 *)Method_BetterList_string__Contains__) )
                {
                  v70 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v70 = BattleResultItemComponent_TypeInfo;
                  }
                  v69 = (Il2CppObject *)v70->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v69, 0);
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
    sub_1C3E7C0(Master_object, v20);
  }
  if ( !(_DWORD)v23 )
    goto LABEL_93;
  v24 = oldUserPoint->m_Items[0];
  if ( !v24 )
    goto LABEL_92;
  v25 = *(_DWORD *)(v18 + 16);
  if ( v25 > 0 || !v24->fields.groupId )
  {
    if ( v25 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v25, 0);
    v73 = EventPointNoGroup;
    v74 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v74,
      (Il2CppObject *)v18,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__First_object__51514760(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                                                                    (System_Func_TSource__bool__o *)v74,
                                                                    (const MethodInfo_3120D88 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
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
    v75 = v73 - *(_QWORD *)&Master_object->fields.revision;
    if ( v73 <= 0 && v75 < 1 )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPointByQp(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_93;
      v77 = oldUserPoint->m_Items[0];
      if ( !v77 )
        goto LABEL_92;
      v78 = v77->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v73, v76) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleResultItemComponent__GetIsShowEventPointMax(
                                                                        this,
                                                                        v22,
                                                                        v78,
                                                                        v76);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v78 = v73;
        if ( LODWORD(oldUserPoint->max_length) )
        {
          v79 = oldUserPoint->m_Items[0];
          if ( !v79 )
            goto LABEL_92;
          v75 = v78 - v79->fields.value;
          goto LABEL_90;
        }
LABEL_93:
        sub_1C3E7C8(Master_object, v20);
      }
      v75 = countQp;
    }
    else
    {
      v78 = v73;
    }
LABEL_90:
    v80 = v22->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v78, v76);
    v35 = this;
    v36 = eventId;
    v37 = v75;
    v38 = v78;
    ImageId = v80;
    v40 = boostRate;
    goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v28; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v33; // x9
  UILabel_o *v34; // x22
  __int64 v35; // x0
  BattleResultItemComponent_c *v36; // x8
  __int64 v37; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_String_o *v44; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  BattleResultItemComponent_c *v54; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v56; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v58; // x21
  BattleResultItemComponent_c *v59; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v61; // [xsp+8h] [xbp-68h] BYREF
  int64_t v62; // [xsp+10h] [xbp-60h] BYREF
  int32_t v63; // [xsp+1Ch] [xbp-54h] BYREF

  v63 = eventId;
  if ( (byte_4C5A650 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BattleResultItemComponent_TypeInfo);
    sub_1C3E564(&Method_BetterList_string__Contains__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_2845/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C5A650 = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v62 = addEventPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(
                          long_TypeInfo,
                          &v62,
                          addEventPoint,
                          totalEventPoint,
                          *(_QWORD *)&imageId,
                          isEventPointMax,
                          *(_QWORD *)&boostRate,
                          method);
  IfExists = System_String__Format((System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/, v15, 0);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v61 = totalEventPoint;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v61, v19, v20, v21, v22, v23, v24);
  IfExists = System_String__Format((System_String_o *)StringLiteral_25072/*"{0:#,0}"*/, v25, 0);
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
  v28 = 24;
  if ( boostRate > 0 )
    v28 = 28;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v28),
    0);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
  v30 = BattleResultItemComponent_TypeInfo;
  v31 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v30 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v30->static_fields;
  v33 = 16;
  if ( boostRate > 0 )
    v33 = 20;
  GameObjectExtensions__SetLocalPositionY(v31, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v33), 0);
  v34 = this->fields.getTitleLabel;
  v35 = sub_1C3E60C(string___TypeInfo, 2);
  v36 = BattleResultItemComponent_TypeInfo;
  v37 = v35;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v36 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v36->static_fields->EP_GET_LOCALE_KEY;
  v39 = System_Int32__ToString((int32_t)&v63, 0);
  IfExists = System_String__Concat_63636468(EP_GET_LOCALE_KEY, v39, 0);
  if ( !v37 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v37 + 24)
    || (*(_QWORD *)(v37 + 32) = IfExists,
        sub_1C3E508((CGThumbnailListItem_o *)(v37 + 32), (int32_t)IfExists, v40, v41),
        *(_DWORD *)(v37 + 24) <= 1u) )
  {
    sub_1C3E7C8(IfExists, v17);
  }
  v44 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v37 + 40) = v44;
  sub_1C3E508((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v44, v42, v43);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v37, 0);
  if ( !v34 )
LABEL_49:
    sub_1C3E7C0(IfExists, v17);
  UILabel__set_text(v34, IfExists, 0);
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
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2845/*"BATTLE_RESULT_GET_EP_RATE"*/, 0);
    *(float *)&v62 = (float)((float)boostRate / 1000.0) + 1.0;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v47, v48, v49, v50, v51, v52);
    IfExists = System_String__Format(v46, v53, 0);
    v17 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v17, 0);
  v54 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v54 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v54->static_fields->EP_SP_BASE_NAME;
  v56 = System_Int32__ToString((int32_t)&v63, 0);
  IfExists = System_String__Concat_63636468(EP_SP_BASE_NAME, v56, 0);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v58 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v58,
          (const MethodInfo_332C048 *)Method_BetterList_string__Contains__) )
  {
    v59 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
      v59 = BattleResultItemComponent_TypeInfo;
    }
    v58 = (Il2CppObject *)v59->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v58, 0);
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
          0),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0) )
  {
    sub_1C3E7C0(nomalRootObj, *(_QWORD *)&eventId);
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    (BattleResultEventItemGroupComponent_o *)nomalRootObj,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    0);
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  int64_t qp; // x28
  int64_t QpMax; // x8
  int64_t v39; // x26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v41; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v43; // [xsp+8h] [xbp-78h]
  int64_t v44; // [xsp+10h] [xbp-70h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C5A64E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    sub_1C3E564(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C5A64E = 1;
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
  v45 = countQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v24, v25, v26, v27, v28, v29);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/, v30, 0);
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
    v39 = oldGame->fields.qp + countQp;
    if ( v39 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v39 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v39 = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
    }
  }
  else
  {
    v39 = userGame->fields.qp - (firstClearRewardQp + (__int64)conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v44 = v39;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44, v31, v32, v33, v34, v35, v36);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25072/*"{0:#,0}"*/, v41, 0);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0) )
  {
LABEL_30:
    sub_1C3E7C0(groupRootObj, *(_QWORD *)&eventId);
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
      v43);
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

  if ( (byte_4C5A654 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C5A654 = 1;
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
                                                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
    sub_1C3E7C0(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v16 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v16, 0);
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

  if ( (byte_4C5A662 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5A662 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C3E7C0(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5A665 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C5A665 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A663 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A663 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endItemDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A65F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C5A65F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A64C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9264/*"NEXT"*/);
    byte_4C5A64C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_1C3E7C0(myFsm, method);
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

  if ( (byte_4C5A666 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4C5A666 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_1C3E7C0(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
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

  if ( (byte_4C5A65E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_1C3E564(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_4C5A65E = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_1C3E7C0(v8, v9);
  ItemDetailInfoComponent__Close_33241840(itemDialog, v7, 0);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A657 & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
    byte_4C5A657 = 1;
  }
  v6 = sub_1C3E7B0(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v7, v8);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)dropItem, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleResultItemComponent__setCondensedScale(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4C5A668 & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent_TypeInfo);
    byte_4C5A668 = 1;
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
    sub_1C3E7C0(getBoostLabel, method);
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
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o **v30; // x24
  System_Collections_Generic_List_object__o *v31; // x27
  System_Predicate_object__o *v32; // x22
  Il2CppObject *v33; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x22
  __int64 v41; // x8
  int v42; // w9
  System_Predicate_object__o **v43; // x25
  System_Predicate_object__o *v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  _DWORD *v47; // x22
  int max_length; // w8
  __int64 v49; // x9
  BattleDropItem_o *v50; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_List_object__o *v54; // x23
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v56; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v58; // x26
  struct BattleResultItemComponent___c_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v63; // x23
  BattleDropItemComponent_ClickDelegate_o *v64; // x25
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x28
  int32_t v70; // w26
  _BOOL8 v71; // x0
  __int64 v72; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  int klass; // w8
  UserEventEntity_array *v79; // x2
  int64_t v80; // x4
  int v81; // w8
  int v82; // w20
  int32_t v83; // w29
  EventConquestInfo_o *v84; // x22
  int v85; // w8
  il2cpp_array_size_t v86; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v89; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v90; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4C5A64D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Find_DropUpInfo___);
    sub_1C3E564(&BattleDropItem_TypeInfo);
    sub_1C3E564(&Method_BattleResultItemComponent_setShowConf__);
    sub_1C3E564(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C3E564(&System_Predicate_DropUpInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_BattleDropItem__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_1C3E564(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_1C3E564(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_1C3E564(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_1C3E564(&BattleResultItemComponent___c_TypeInfo);
    byte_4C5A64D = 1;
  }
  entity = 0;
  memset(&v94, 0, sizeof(v94));
  v24 = sub_1C3E7B0(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v24 )
    goto LABEL_27;
  *(_QWORD *)(v24 + 16) = v25;
  v30 = (System_Collections_Generic_List_object__o **)(v24 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  object = *(void **)(v24 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v31 = *v30;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v32 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)object + 23);
    v32 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v32, v33, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v32;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)v32, v35, v36);
  }
  if ( !v31 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v31,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.newDroplist, (int32_t)All, v38, v39);
  if ( getqp >= 1 )
  {
    v40 = sub_1C3E7B0(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v40, 0);
    if ( !v40 )
      goto LABEL_27;
    *(_QWORD *)(v40 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v40, getqp, originalGetQp, 0);
    object = *v30;
    if ( !*v30 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v40,
      (const MethodInfo_37B6210 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v90 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v41 = *(_QWORD *)(v24 + 16);
    *(_DWORD *)(v24 + 24) = 0;
    if ( !v41 )
      goto LABEL_27;
    v42 = 0;
    v43 = (System_Predicate_object__o **)(v24 + 32);
    while ( v42 < *(_DWORD *)(v41 + 24) )
    {
      v44 = *v43;
      if ( !*v43 )
      {
        v44 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v44,
          (Il2CppObject *)v24,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0);
        *(_QWORD *)(v24 + 32) = v44;
        sub_1C3E508((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v44, v45, v46);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v44,
                 (const MethodInfo_31FEA98 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v47 = object;
        object = *v30;
        if ( !*v30 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v24 + 24),
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v47[5];
      }
      v41 = *(_QWORD *)(v24 + 16);
      v42 = *(_DWORD *)(v24 + 24) + 1;
      *(_DWORD *)(v24 + 24) = v42;
      if ( !v41 )
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
        v49 = 0;
        while ( (unsigned int)v49 < max_length )
        {
          v50 = gifts->m_Items[v49];
          if ( !v50 )
            goto LABEL_27;
          ++v49;
          v50->fields.isAddReward = 1;
          if ( (int)v49 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1C3E7C8(object, gifts);
      }
LABEL_35:
      object = *v30;
      if ( !*v30 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.voiceIds, (int32_t)voiceIds, v52, v53);
      v54 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v54,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v54 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v54,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v56 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v56 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v56->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v56 = BattleResultItemComponent___c_TypeInfo;
        }
        v58 = (Il2CppObject *)v56->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(_9__48_2, v58, Method_BattleResultItemComponent___c__setResultData_b__48_2__, 0);
        v59 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v59->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v59->__9__48_2, (int32_t)_9__48_2, v60, v61);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v54,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1C3E7C0(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v30;
  if ( !*v30 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v63 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v64 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C3E7B0(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v64,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_47672444(
    itemWindow,
    v63,
    eventIda,
    v64,
    this->fields.itemColumnCount,
    0);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v65);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v66);
    BattleResultItemComponent__SetAddItemIconEffect(this, v67);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v30 )
    goto LABEL_27;
  v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    *v30,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v70 = 0;
  v94 = v93;
  while ( 1 )
  {
    v71 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v71 )
      break;
    current = (BattleDropItem_o *)v94.fields._current;
    if ( !v94.fields._current )
      sub_1C3E7C0(v71, v72);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v94.fields._current, 0);
    if ( current->fields.type == 2 )
    {
      if ( !v69 )
        sub_1C3E7C0(isAutoSellItem, v75);
      v76 = DataMasterBase_object__object__int___GetEntity(
              v69,
              current->fields.objectId,
              (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v76 )
        sub_1C3E7C0(0, v77);
      klass = (int)v76[3].klass;
      if ( klass == 1 || klass == 16 )
        v70 += BattleDropItem__getTotalNum(current, 0);
    }
    v70 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v81 = eventConquestInfos->max_length;
  if ( v81 < 1 )
  {
    v83 = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v82 = 0;
    v83 = 0;
    do
    {
      if ( v82 >= (unsigned int)v81 )
        goto LABEL_94;
      v84 = eventConquestInfos->m_Items[v82];
      if ( !v84 )
        goto LABEL_27;
      if ( v84->fields.type == 2 )
      {
        if ( !v69 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v69,
                   v84->fields.objectId,
                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v85 = *((_DWORD *)object + 12);
          if ( v85 == 16 || v85 == 1 )
            v83 += v84->fields.getNum;
        }
      }
      v81 = eventConquestInfos->max_length;
      ++v82;
    }
    while ( v82 < v81 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v86 = viewGroupIds->max_length;
  if ( (_DWORD)v86 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v86 = viewGroupIds->max_length;
  }
  if ( v86 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v79,
      oldUsrPointa,
      v80,
      SelfUserGame,
      v70,
      viewGroupIds,
      v83,
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
    v70,
    boostRate,
    v83,
    firstClearRewardQp,
    v90,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v89);
}


void BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C5A660 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9637/*"OPEN_COMMANDCODE"*/);
    byte_4C5A660 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1C3E7C0(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9637/*"OPEN_COMMANDCODE"*/, 0);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5A65C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9644/*"OPEN_ITEM"*/);
    byte_4C5A65C = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1C3E7C0(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9644/*"OPEN_ITEM"*/, 0);
}


void BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4C5A658 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C3E564(&StringLiteral_9652/*"OPEN_SERVANT"*/);
    byte_4C5A658 = 1;
  }
  v4->fields.tmp_userSvtId = 0;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0) )
  {
    sub_1C3E7C0(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9652/*"OPEN_SERVANT"*/, 0);
}


void BattleResultItemComponent__showCommandCodeDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_4C5A661 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A661 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_1C3E7C0(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_31250808((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_4C5A65D & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_1C3E564(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A65D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3E7B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C3E7C0(Instance, v4);
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

  if ( (byte_4C5A659 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5A659 = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v5 = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31247424((CommonUI_o *)Instance, 0, v5, v6, 0, 0);
      return;
    }
LABEL_8:
    sub_1C3E7C0(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31251504((CommonUI_o *)Instance, 0, tmp_svtId, v10, 0);
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
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *executingCallback; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v7; // x9
  __int128 v8; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *current; // x0
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  _BYTE *monitor; // x8
  System_Collections_IEnumerator_o *v18; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v20; // x1
  UnityEngine_MonoBehaviour_c *klass; // x8
  __int64 v22; // x0
  __int64 v23; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v24; // x8
  BattleResultComponent_o *v25; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v27; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_Enumerator_T__o v31[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v32; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v33; // [xsp+58h] [xbp-28h] BYREF

  v33 = this;
  v2 = this;
  if ( (byte_4C5A671 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A671 = 1;
  }
  v32 = &v33;
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C3E7C0(this, method);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1C3E7C0(this, method);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1C3E7C0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v31,
      executingCallback,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v7 = v33;
    v8 = *(_OWORD *)&v31[0].fields._list;
    p__7__wrap1 = &v33->fields.__7__wrap1;
    v31[1] = v31[0];
    v33->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v31[0].fields._current;
    *(_OWORD *)&v7->fields.__7__wrap1.fields._list = v8;
    sub_1C3E508((CGThumbnailListItem_o *)p__7__wrap1, 0, v10, v11);
    v2 = v33;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C3E7C0(0, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1C3E7C0(0, v15);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1C3E7C0(Component_object, v15);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1C3E7C0(Component_object, v15);
      v18 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v16);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71327136(_4__this, v18, 0);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1C3E7C0(started, v20);
      if ( !LOBYTE(klass->_2.genericContainerHandle) )
      {
        v27 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v27, 0.01, 0);
        v28 = v33;
        v33->fields.__2__current = (Il2CppObject *)v27;
        sub_1C3E508((CGThumbnailListItem_o *)&v28->fields.__2__current, (int32_t)v27, v29, v30);
        result = 1;
        v33->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v33;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v33, v12);
  v24 = v33;
  v33->fields.__7__wrap1.fields._list = 0;
  *(_QWORD *)&v24->fields.__7__wrap1.fields._index = 0;
  v24->fields.__7__wrap1.fields._current = 0;
  if ( !_4__this )
    sub_1C3E7C0(v22, v23);
  v25 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v25 )
    sub_1C3E7C0(0, v23);
  BattleResultComponent__QpFix(v25, 0);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C5A672 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_4C5A672 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v3; // x3
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v4; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v11; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v16; // x0
  System_Random_o *v17; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  unsigned int v20; // w22
  System_String_o *v21; // x0
  struct System_String_array *v22; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v23; // x21
  System_String_o *v24; // x22
  SeManager_c *v25; // x0
  Il2CppObject *v26; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v28; // x23
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v29; // x8
  struct BattleResultComponent_o *v30; // x8
  CGThumbnailListItem_o *v31; // x19

  v4 = this;
  if ( (byte_4C5A673 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&System_Random_TypeInfo);
    sub_1C3E564(&SeManager_TypeInfo);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__);
    sub_1C3E564(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1C3E564(&StringLiteral_12769/*"Servants_"*/);
    byte_4C5A673 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_30;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1C3E7B0(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v7, 0);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v7;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v8, v9);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v11 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v11, 0.3, 0);
        v4->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(p__2__current, (int32_t)v11, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
    v16 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0);
    v17 = (System_Random_o *)sub_1C3E7B0(System_Random_TypeInfo);
    System_Random___ctor(v17, 0);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v17 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._6_Next.methodPtr)(
                                                                      v17,
                                                                      0,
                                                                      LODWORD(voiceIds->max_length),
                                                                      v17->klass->vtable._6_Next.method);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v20 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v21 = System_Int32__ToString((int)_4__this + 272, 0);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_63636468(
                                                                      (System_String_o *)StringLiteral_12769/*"Servants_"*/,
                                                                      v21,
                                                                      0);
    v22 = _4__this->fields.voiceIds;
    if ( !v22 )
      goto LABEL_30;
    if ( v20 >= LODWORD(v22->max_length) )
      sub_1C3E7C8(this, method);
    v23 = this;
    v24 = v22->m_Items[v20];
    v25 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v25 = SeManager_TypeInfo;
    }
    v26 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_VOLUME = v25->static_fields->DEFAULT_VOLUME;
    v28 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v28, v26, Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_41566940(
                                                                      (System_String_o *)v23,
                                                                      v24,
                                                                      DEFAULT_VOLUME,
                                                                      v28,
                                                                      0,
                                                                      0);
  }
  v29 = v4->fields.__8__1;
  if ( !v29 )
    goto LABEL_30;
  if ( v29->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v4->fields.callback, 0);
    return 0;
  }
  if ( !_4__this || (v30 = _4__this->fields.parentComp) == 0 )
LABEL_30:
    sub_1C3E7C0(this, method);
  if ( v30->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v4->fields.__2__current = 0;
  v31 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C3E508(v31, 0, v2, v3);
  LODWORD(v31[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C5A66F & 1) == 0 )
  {
    sub_1C3E564(&BattleResultItemComponent___c_TypeInfo);
    byte_4C5A66F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_40473420(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_40473812(s->fields.type, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_40473420(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_40473812(s->fields.type, 0);
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
  if ( (byte_4C5A670 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4C5A670 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0) )
  {
    sub_1C3E7C0(this, e);
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
    sub_1C3E7C0(this, 0);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C5A674 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A674 = 1;
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
              v6 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v6, 0.2333, 0);
              v2->fields.__2__current = (Il2CppObject *)v6;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C3E508(p__2__current, (int32_t)v6, v8, v9);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C3E7C0(this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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