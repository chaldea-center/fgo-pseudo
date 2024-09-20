void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A3A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
    byte_4A5A3A8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.flashIconList, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  ServantStatusBattleListViewItem_o *v22; // x0
  int32_t v23; // w1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v24; // x21
  __int64 v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  struct FlashingIconManager_FlashIconContents_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  __int64 v32; // x8
  System_Collections_Generic_List_object__o *v33; // x0
  Il2CppObject *v34; // x1

  if ( (byte_4A5A3A5 & 1) == 0 )
  {
    sub_1B885B0(&FlashingIconManager_FlashIconContents_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A3A5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v9);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v11 = sub_1B887FC(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      *(_QWORD *)(v11 + 24) = icon;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)icon, v12, v13);
      *(_DWORD *)(v11 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v19 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < items->max_length )
          {
            v21 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v11;
            v22 = (ServantStatusBattleListViewItem_o *)(v21 + 4);
            v23 = v11;
LABEL_18:
            sub_1B88554(v22, v23, v16, v17);
            return;
          }
          v32 = v19[4];
          v33 = (System_Collections_Generic_List_object__o *)flashIconList;
          v34 = (Il2CppObject *)v11;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            v34,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v24 = this->fields.flashIconList;
      v25 = sub_1B887FC(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      *(_QWORD *)(v25 + 24) = icon;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)icon, v26, v27);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v25 + 16) = 1065353216;
        if ( !v24 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v25 + 16) = extraCycleTime;
        if ( !v24 )
          goto LABEL_22;
      }
      v28 = v24->fields._items;
      v29 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v24->fields._version;
      if ( v28 )
      {
        v30 = v24->fields._size;
        if ( (unsigned int)v30 < v28->max_length )
        {
          v31 = &v28->obj.klass + v30;
          v24->fields._size = v30 + 1;
          v31[4] = (Il2CppClass *)v25;
          v22 = (ServantStatusBattleListViewItem_o *)(v31 + 4);
          v23 = v25;
          goto LABEL_18;
        }
        v32 = v29[4];
        v33 = (System_Collections_Generic_List_object__o *)v24;
        v34 = (Il2CppObject *)v25;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1B8880C(v14, v15);
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
  if ( (byte_4A5A3A4 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
    byte_4A5A3A4 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1B8880C(this, method);
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
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  __int64 v10; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A3A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A3A6 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1B8880C(0LL, v5);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        flashIconList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v12,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v7 )
          break;
        current = v12.fields._current;
        if ( !v12.fields._current )
          sub_1B8880C(v7, v8);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v12.fields._current->klass->vtable[0].method)(
                v12.fields._current,
                icon,
                v12.fields._current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v11 = this->fields.flashIconList;
          if ( !v11 )
            sub_1B8880C(0LL, v10);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v11,
            current,
            (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  __int64 v5; // x1
  float deltaTime; // s0
  void *Item; // x0
  int32_t v8; // w20
  float v9; // s9
  _QWORD *v10; // x21
  float v11; // s0

  if ( (byte_4A5A3A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
    byte_4A5A3A7 = 1;
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
    v8 = *((_DWORD *)Item + 6) - 1;
    if ( v8 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v8,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v9 = *((float *)Item + 4);
        v10 = Item;
        v11 = fmodf(this->fields.dispTime, v9 + v9);
        Item = (void *)v10[3];
        if ( !Item )
          break;
        if ( v11 > v9 )
          v11 = (float)(v9 + v9) - v11;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v11 / v9, 0LL) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v8,
            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v8 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1B8880C(Item, v5);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)icon, v7, v8);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._icon_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}