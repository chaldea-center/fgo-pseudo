void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B15411 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v7, v8);
    byte_4B15411 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.flashIconList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  PartyOrganizationUtility_o *v37; // x0
  int64_t v38; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v39; // x21
  __int64 v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct FlashingIconManager_FlashIconContents_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x8
  System_Collections_Generic_List_object__o *v52; // x0
  Il2CppObject *v53; // x1

  if ( (byte_4B1540E & 1) == 0 )
  {
    sub_1BCA7E0(&FlashingIconManager_FlashIconContents_TypeInfo, icon, isFast);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1540E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, icon);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v13);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v18 = sub_1BCAA2C(FlashingIconManager_FlashIconContents_TypeInfo, v14, v15, v16);
      System_Object___ctor((Il2CppObject *)v18, 0LL);
      *(_QWORD *)(v18 + 24) = icon;
      sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)icon, v19, v20, v21, v22, v23, v24);
      *(_DWORD *)(v18 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v34 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < items->max_length )
          {
            v36 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v18;
            v37 = (PartyOrganizationUtility_o *)(v36 + 4);
            v38 = v18;
LABEL_18:
            sub_1BCA784(v37, v38, v27, v28, v29, v30, v31, v32);
            return;
          }
          v51 = v34[4];
          v52 = (System_Collections_Generic_List_object__o *)flashIconList;
          v53 = (Il2CppObject *)v18;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v52,
            v53,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v39 = this->fields.flashIconList;
      v40 = sub_1BCAA2C(FlashingIconManager_FlashIconContents_TypeInfo, v14, v15, v16);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      *(_QWORD *)(v40 + 24) = icon;
      sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)icon, v41, v42, v43, v44, v45, v46);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v40 + 16) = 1065353216;
        if ( !v39 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v40 + 16) = extraCycleTime;
        if ( !v39 )
          goto LABEL_22;
      }
      v47 = v39->fields._items;
      v48 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v39->fields._version;
      if ( v47 )
      {
        v49 = v39->fields._size;
        if ( (unsigned int)v49 < v47->max_length )
        {
          v50 = &v47->obj.klass + v49;
          v39->fields._size = v49 + 1;
          v50[4] = (Il2CppClass *)v40;
          v37 = (PartyOrganizationUtility_o *)(v50 + 4);
          v38 = v40;
          goto LABEL_18;
        }
        v51 = v48[4];
        v52 = (System_Collections_Generic_List_object__o *)v39;
        v53 = (Il2CppObject *)v40;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1BCAA3C(v25, v26);
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
  __int64 v2; // x2
  FlashingIconManager_o *v3; // x19
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B1540D & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__,
                                      method,
                                      v2);
    byte_4B1540D = 1;
  }
  flashIconList = v3->fields.flashIconList;
  v3->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1BCAA3C(this, method);
  size = flashIconList->fields._size;
  v6 = flashIconList->fields._version + 1;
  flashIconList->fields._size = 0;
  flashIconList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)flashIconList->fields._items, 0, size, 0LL);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  __int64 v22; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1540F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1540F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, icon);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1BCAA3C(0LL, v17);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        flashIconList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v19 )
          break;
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_1BCAA3C(v19, v20);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v24.fields._current->klass->vtable[0].method)(
                v24.fields._current,
                icon,
                v24.fields._current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v23 = this->fields.flashIconList;
          if ( !v23 )
            sub_1BCAA3C(0LL, v22);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v23,
            current,
            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  __int64 v10; // x1
  float deltaTime; // s0
  void *Item; // x0
  int32_t v13; // w20
  float v14; // s9
  _QWORD *v15; // x21
  float v16; // s0

  if ( (byte_4B15410 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v6, v7);
    byte_4B15410 = 1;
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
    v13 = *((_DWORD *)Item + 6) - 1;
    if ( v13 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v13,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v14 = *((float *)Item + 4);
        v15 = Item;
        v16 = fmodf(this->fields.dispTime, v14 + v14);
        Item = (void *)v15[3];
        if ( !Item )
          break;
        if ( v16 > v14 )
          v16 = (float)(v14 + v14) - v16;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v16 / v14, 0LL) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v13,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v13 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1BCAA3C(Item, v10);
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
  sub_1BCA784(v6, (int64_t)icon, v7, v8, v9, v10, v11, v12);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._icon_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}