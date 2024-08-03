void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FB670 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v5);
    byte_49FB670 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.flashIconList, (int32_t)v6, v7, v8);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  ServantStatusBattleListViewItem_o *v25; // x0
  int32_t v26; // w1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v27; // x21
  __int64 v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  struct FlashingIconManager_FlashIconContents_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  Il2CppObject *v37; // x1

  if ( (byte_49FB66D & 1) == 0 )
  {
    sub_1B640C8(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FB66D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v11);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v15 = sub_1B64314(FlashingIconManager_FlashIconContents_TypeInfo, v12, v13);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      *(_QWORD *)(v15 + 24) = icon;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)icon, v16, v17);
      *(_DWORD *)(v15 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v22 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < items->max_length )
          {
            v24 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v15;
            v25 = (ServantStatusBattleListViewItem_o *)(v24 + 4);
            v26 = v15;
LABEL_18:
            sub_1B6406C(v25, v26, v19, v20);
            return;
          }
          v35 = v22[4];
          v36 = (System_Collections_Generic_List_object__o *)flashIconList;
          v37 = (Il2CppObject *)v15;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            v37,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v27 = this->fields.flashIconList;
      v28 = sub_1B64314(FlashingIconManager_FlashIconContents_TypeInfo, v12, v13);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      *(_QWORD *)(v28 + 24) = icon;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)icon, v29, v30);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v28 + 16) = 1065353216;
        if ( !v27 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v28 + 16) = extraCycleTime;
        if ( !v27 )
          goto LABEL_22;
      }
      v31 = v27->fields._items;
      v32 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v27->fields._version;
      if ( v31 )
      {
        v33 = v27->fields._size;
        if ( (unsigned int)v33 < v31->max_length )
        {
          v34 = &v31->obj.klass + v33;
          v27->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v28;
          v25 = (ServantStatusBattleListViewItem_o *)(v34 + 4);
          v26 = v28;
          goto LABEL_18;
        }
        v35 = v32[4];
        v36 = (System_Collections_Generic_List_object__o *)v27;
        v37 = (Il2CppObject *)v28;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1B64324(v18);
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
  if ( (byte_49FB66C & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__,
                                      method);
    byte_49FB66C = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB66E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FB66E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1B64324(0LL);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        flashIconList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v12 )
          break;
        current = v15.fields._current;
        if ( !v15.fields._current )
          sub_1B64324(v12);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v15.fields._current->klass->vtable[0].method)(
                v15.fields._current,
                icon,
                v15.fields._current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v14 = this->fields.flashIconList;
          if ( !v14 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v14,
            current,
            (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  float deltaTime; // s0
  void *Item; // x0
  int32_t v9; // w20
  float v10; // s9
  _QWORD *v11; // x21
  float v12; // s0

  if ( (byte_49FB66F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_49FB66F = 1;
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
    v9 = *((_DWORD *)Item + 6) - 1;
    if ( v9 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v9,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v10 = *((float *)Item + 4);
        v11 = Item;
        v12 = fmodf(this->fields.dispTime, v10 + v10);
        Item = (void *)v11[3];
        if ( !Item )
          break;
        if ( v12 > v10 )
          v12 = (float)(v10 + v10) - v12;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v12 / v10, 0LL) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v9,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v9 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1B64324(Item);
    }
  }
}


void __fastcall FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  FlashingIconManager_FlashIconContents_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)icon, v7, v8);
  *(float *)&v6[-1].fields._icon_k__BackingField = cycleTime;
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

  this->fields._icon_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._icon_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}