void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC6CB4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v4);
    byte_4BC6CB4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.flashIconList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  PartyOrganizationUtility_o *v32; // x0
  int64_t v33; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v34; // x21
  __int64 v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct FlashingIconManager_FlashIconContents_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x8
  System_Collections_Generic_List_object__o *v47; // x0
  Il2CppObject *v48; // x1

  if ( (byte_4BC6CB1 & 1) == 0 )
  {
    sub_1C1ABD4(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC6CB1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v11);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v13 = sub_1C1AE20(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0LL);
      *(_QWORD *)(v13 + 24) = icon;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)icon, v14, v15, v16, v17, v18, v19);
      *(_DWORD *)(v13 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v29 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < items->max_length )
          {
            v31 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v13;
            v32 = (PartyOrganizationUtility_o *)(v31 + 4);
            v33 = v13;
LABEL_18:
            sub_1C1AB78(v32, v33, v22, v23, v24, v25, v26, v27);
            return;
          }
          v46 = v29[4];
          v47 = (System_Collections_Generic_List_object__o *)flashIconList;
          v48 = (Il2CppObject *)v13;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            v48,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v46 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v34 = this->fields.flashIconList;
      v35 = sub_1C1AE20(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      *(_QWORD *)(v35 + 24) = icon;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)icon, v36, v37, v38, v39, v40, v41);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v35 + 16) = 1065353216;
        if ( !v34 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v35 + 16) = extraCycleTime;
        if ( !v34 )
          goto LABEL_22;
      }
      v42 = v34->fields._items;
      v43 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v34->fields._version;
      if ( v42 )
      {
        v44 = v34->fields._size;
        if ( (unsigned int)v44 < v42->max_length )
        {
          v45 = &v42->obj.klass + v44;
          v34->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v35;
          v32 = (PartyOrganizationUtility_o *)(v45 + 4);
          v33 = v35;
          goto LABEL_18;
        }
        v46 = v43[4];
        v47 = (System_Collections_Generic_List_object__o *)v34;
        v48 = (Il2CppObject *)v35;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C1AE30(v20, v21);
  }
}


float __fastcall FlashingIconManager__CalcAlpha(
        FlashingIconManager_o *this,
        float targetCycleTime,
        const MethodInfo *method)
{
  float v3; // s9
  float v5; // s0

  v3 = targetCycleTime + targetCycleTime;
  v5 = fmodf(this->fields.dispTime, targetCycleTime + targetCycleTime);
  if ( v5 > targetCycleTime )
    v5 = v3 - v5;
  return v5 / targetCycleTime;
}


void __fastcall FlashingIconManager__Reboot(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_o *v2; // x19
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BC6CB0 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1C1ABD4(
                                      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__,
                                      method);
    byte_4BC6CB0 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1C1AE30(this, method);
  size = flashIconList->fields._size;
  v5 = flashIconList->fields._version + 1;
  flashIconList->fields._size = 0;
  flashIconList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)flashIconList->fields._items, 0, size, 0LL);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  __int64 v16; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC6CB2 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__,
      v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC6CB2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1C1AE30(0LL, v11);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        flashIconList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v13 )
          break;
        current = v18.fields._current;
        if ( !v18.fields._current )
          sub_1C1AE30(v13, v14);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v18.fields._current->klass->vtable[0].method)(
                v18.fields._current,
                icon,
                v18.fields._current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v17 = this->fields.flashIconList;
          if ( !v17 )
            sub_1C1AE30(0LL, v16);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v17,
            current,
            (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  __int64 v7; // x1
  float deltaTime; // s0
  void *Item; // x0
  int32_t v10; // w20
  float v11; // s9
  _QWORD *v12; // x21
  float v13; // s0

  if ( (byte_4BC6CB3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_4BC6CB3 = 1;
  }
  flashIconList = this->fields.flashIconList;
  if ( flashIconList && flashIconList->fields._size )
  {
    dispTime = this->fields.dispTime;
    deltaTime = RealTime__get_deltaTime(0LL);
    Item = this->fields.flashIconList;
    this->fields.dispTime = dispTime + deltaTime;
    if ( !Item )
      goto LABEL_16;
    v10 = *((_DWORD *)Item + 6) - 1;
    if ( v10 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v10,
                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v11 = *((float *)Item + 4);
        v12 = Item;
        v13 = fmodf(this->fields.dispTime, v11 + v11);
        Item = (void *)v12[3];
        if ( !Item )
          break;
        if ( v13 > v11 )
          v13 = (float)(v11 + v11) - v13;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v13 / v11, 0LL) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v10,
            (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v10 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1C1AE30(Item, v7);
    }
  }
}


void __fastcall FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._normalFollowerInfo = (struct FollowerInfo_o *)icon;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 24);
  sub_1C1AB78(v6, (int64_t)icon, v7, v8, v9, v10, v11, v12);
  *(float *)&v6[-1].fields._IsQuestStartMenuMode_k__BackingField = cycleTime;
}


float __fastcall FlashingIconManager_FlashIconContents__get_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._cycleTime_k__BackingField;
}


FlashingIconComponent_o *__fastcall FlashingIconManager_FlashIconContents__get_icon(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._icon_k__BackingField;
}


void __fastcall FlashingIconManager_FlashIconContents__set_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._cycleTime_k__BackingField = value;
}


void __fastcall FlashingIconManager_FlashIconContents__set_icon(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._icon_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._icon_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}