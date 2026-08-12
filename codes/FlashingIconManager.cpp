void FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F8FD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
    byte_596F8FD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.flashIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *flashIconList; // x19
  __int64 v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int v26; // w8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_596F8FA & 1) == 0 )
  {
    sub_2213A60(&FlashingIconManager_FlashIconContents_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F8FA = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, icon, isFast);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v9);
    if ( isFast )
    {
      flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
      v11 = sub_2213CCC(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      *(_QWORD *)(v11 + 24) = icon;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)icon, v12, v13, v14, v15, v16, v17);
      v26 = 1056964608;
    }
    else
    {
      flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
      v11 = sub_2213CCC(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      *(_QWORD *)(v11 + 24) = icon;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)icon, v27, v28, v29, v30, v31, v32);
      if ( extraCycleTime > 0.0 )
      {
        *(float *)(v11 + 16) = extraCycleTime;
        if ( !flashIconList )
          goto LABEL_17;
        goto LABEL_13;
      }
      v26 = 1065353216;
    }
    *(_DWORD *)(v11 + 16) = v26;
    if ( !flashIconList )
      goto LABEL_17;
LABEL_13:
    items = flashIconList->fields._items;
    v34 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
    ++flashIconList->fields._version;
    if ( items )
    {
      size = flashIconList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          flashIconList,
          (Il2CppObject *)v11,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        flashIconList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v11;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v11, v20, v21, v22, v23, v24, v25);
      }
      return;
    }
LABEL_17:
    sub_2213CDC(v18, v19);
  }
}


float FlashingIconManager__CalcAlpha(FlashingIconManager_o *this, float targetCycleTime, const MethodInfo *method)
{
  float v3; // s9
  float v5; // s0

  v3 = targetCycleTime + targetCycleTime;
  v5 = fmodf(this->fields.dispTime, targetCycleTime + targetCycleTime);
  if ( v5 > targetCycleTime )
    v5 = v3 - v5;
  return v5 / targetCycleTime;
}


void FlashingIconManager__Reboot(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_o *v2; // x19
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_596F8F9 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
    byte_596F8F9 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_2213CDC(this, method);
  size = flashIconList->fields._size;
  v5 = flashIconList->fields._version + 1;
  flashIconList->fields._size = 0;
  flashIconList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)flashIconList->fields._items, 0, size, 0);
}


void FlashingIconManager__RemoveIcon(
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F8FB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F8FB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, icon, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_2213CDC(0, v5);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        flashIconList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v12,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v7 )
          break;
        current = v12.fields._current;
        if ( !v12.fields._current )
          sub_2213CDC(v7, v8);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, const MethodInfo *))v12.fields._current->klass->vtable[0].methodPtr)(
                v12.fields._current,
                icon,
                v12.fields._current->klass->vtable[0].method)
            & 1) != 0 )
        {
          v11 = this->fields.flashIconList;
          if ( !v11 )
            sub_2213CDC(0, v10);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v11,
            current,
            (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  void *Item; // x0
  __int64 v6; // x1
  float deltaTime; // s0
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v8; // x8
  int32_t size; // w20
  FlashingIconComponent_o *v10; // x21
  float v11; // s9
  float v12; // s0

  if ( (byte_596F8FC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
    byte_596F8FC = 1;
  }
  flashIconList = this->fields.flashIconList;
  if ( flashIconList && flashIconList->fields._size )
  {
    dispTime = this->fields.dispTime;
    deltaTime = RealTime__get_deltaTime(0);
    v8 = this->fields.flashIconList;
    this->fields.dispTime = dispTime + deltaTime;
    if ( !v8 )
      goto LABEL_17;
    size = v8->fields._size;
    if ( size - 1 >= 0 )
    {
      while ( 1 )
      {
        Item = this->fields.flashIconList;
        if ( !Item )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 --size,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v10 = (FlashingIconComponent_o *)*((_QWORD *)Item + 3);
        if ( !v10 )
          break;
        v11 = *((float *)Item + 4);
        v12 = fmodf(this->fields.dispTime, v11 + v11);
        if ( v12 > v11 )
          v12 = (float)(v11 + v11) - v12;
        if ( !FlashingIconComponent__UpdateIcon(v10, v12 / v11, 0) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            size,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( size <= 0 )
          return;
      }
LABEL_17:
      sub_2213CDC(Item, v6);
    }
  }
}


void FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  FlashingIconManager_FlashIconContents_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)icon, v7, v8, v9, v10, v11, v12);
  *(float *)&v6[-1].fields._icon_k__BackingField = cycleTime;
}


float FlashingIconManager_FlashIconContents__get_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._cycleTime_k__BackingField;
}


FlashingIconComponent_o *FlashingIconManager_FlashIconContents__get_icon(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._icon_k__BackingField;
}


void FlashingIconManager_FlashIconContents__set_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._cycleTime_k__BackingField = value;
}


void FlashingIconManager_FlashIconContents__set_icon(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._icon_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._icon_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}