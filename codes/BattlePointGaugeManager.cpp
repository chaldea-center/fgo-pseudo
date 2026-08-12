void BattlePointGaugeManager___ctor(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974162 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattlePointGaugeComponent__TypeInfo);
    byte_5974162 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattlePointGaugeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattlePointGaugeComponent___ctor__);
  this->fields.gaugeEntityList = (struct System_Collections_Generic_List_BattlePointGaugeComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeEntityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isGaugeOpened = 1;
  *(_OWORD *)&this->fields.showDuration = xmmword_E9BBA0;
  *(_QWORD *)&this->fields.state = 0x271000000003LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeManager__GetEntityIndexByBattlePointId(
        BattlePointGaugeManager_o *this,
        int32_t battlePointId,
        int32_t *index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gaugeEntityList; // x0
  int32_t v8; // w22

  if ( (byte_5974158 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    byte_5974158 = 1;
  }
  gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
  *index = -1;
  if ( !gaugeEntityList )
LABEL_9:
    sub_2213CDC(gaugeEntityList, *(_QWORD *)&battlePointId);
  v8 = 0;
  while ( v8 < gaugeEntityList->fields._size )
  {
    gaugeEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     gaugeEntityList,
                                                                     v8,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    if ( !gaugeEntityList )
      goto LABEL_9;
    if ( LODWORD(gaugeEntityList[3].monitor) == battlePointId )
    {
      *index = v8;
      return;
    }
    gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
    ++v8;
    if ( !gaugeEntityList )
      goto LABEL_9;
  }
}


void BattlePointGaugeManager__Initialize(
        BattlePointGaugeManager_o *this,
        System_Collections_Generic_List_BattlePointGaugeComponent__o *gaugeList,
        const MethodInfo *method)
{
  void *gaugeEntityList; // x0
  int32_t v6; // w2
  int v7; // w8
  int32_t v8; // w20
  __int64 v9; // x1
  Il2CppObject *Item; // x21
  int32_t currentGaugeEntityIndex; // w9
  _BYTE *v12; // x8

  if ( (byte_5974156 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974156 = 1;
  }
  gaugeEntityList = this->fields.gaugeEntityList;
  if ( !gaugeEntityList )
    goto LABEL_23;
  v6 = *((_DWORD *)gaugeEntityList + 6);
  v7 = *((_DWORD *)gaugeEntityList + 7) + 1;
  *((_DWORD *)gaugeEntityList + 6) = 0;
  *((_DWORD *)gaugeEntityList + 7) = v7;
  if ( v6 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)gaugeEntityList + 2), 0, v6, 0);
    gaugeEntityList = this->fields.gaugeEntityList;
    if ( !gaugeEntityList )
      goto LABEL_23;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)gaugeEntityList,
    (System_Collections_Generic_IEnumerable_T__o *)gaugeList,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__AddRange__);
  gaugeEntityList = this->fields.gaugeEntityList;
  this->fields.currentGaugeEntityIndex = 0;
  this->fields.isGaugeOpened = 0;
  if ( !gaugeEntityList )
LABEL_23:
    sub_2213CDC(gaugeEntityList, gaugeList);
  if ( *((int *)gaugeEntityList + 6) >= 1 )
  {
    v8 = 0;
    while ( v8 < *((_DWORD *)gaugeEntityList + 6) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gaugeEntityList,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        gaugeEntityList = this->fields.gaugeEntityList;
        if ( !gaugeEntityList )
          goto LABEL_23;
        gaugeEntityList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)gaugeEntityList,
                            v8,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !gaugeEntityList )
          goto LABEL_23;
        currentGaugeEntityIndex = this->fields.currentGaugeEntityIndex;
        v12 = gaugeEntityList;
        gaugeEntityList = this->fields.gaugeEntityList;
        v12[216] = this->fields.isGaugeOpened;
        if ( v8 == currentGaugeEntityIndex )
        {
          if ( !gaugeEntityList )
            goto LABEL_23;
          gaugeEntityList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)gaugeEntityList,
                              v8,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
          if ( !gaugeEntityList )
            goto LABEL_23;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gaugeEntityList + 456LL))(
            gaugeEntityList,
            *(_QWORD *)(*(_QWORD *)gaugeEntityList + 464LL));
        }
        else
        {
          if ( !gaugeEntityList )
            goto LABEL_23;
          gaugeEntityList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)gaugeEntityList,
                              v8,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
          if ( !gaugeEntityList )
            goto LABEL_23;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gaugeEntityList + 472LL))(
            gaugeEntityList,
            *(_QWORD *)(*(_QWORD *)gaugeEntityList + 480LL));
        }
      }
      gaugeEntityList = this->fields.gaugeEntityList;
      ++v8;
      if ( !gaugeEntityList )
        goto LABEL_23;
    }
    this->fields.timer = 0.0;
    this->fields.priorityHoldTimer = 0.0;
    this->fields.isLockGauge = 0;
    this->fields.isRotationEnabled = 0;
    this->fields.state = 1;
  }
}


void BattlePointGaugeManager__LockAndPrioritizeGaugeEntity(
        BattlePointGaugeManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  BattlePointGaugeManager__PrioritizeShowGaugeEntity(this, battlePointId, method);
  this->fields.isLockGauge = 1;
}


void BattlePointGaugeManager__LockChangeGauge(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  this->fields.isLockGauge = 1;
}


void BattlePointGaugeManager__NormalizeCurrentGaugeEntityIndex(
        BattlePointGaugeManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 currentGaugeEntityIndex; // x1
  System_Collections_Generic_List_object__o *gaugeEntityList; // x0
  __int64 v6; // x1
  Il2CppObject *Item; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x21

  if ( (byte_597415F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597415F = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.gaugeEntityList, 0) )
  {
    currentGaugeEntityIndex = (unsigned int)this->fields.currentGaugeEntityIndex;
    gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
    if ( (currentGaugeEntityIndex & 0x80000000) == 0 )
    {
      if ( !gaugeEntityList )
        goto LABEL_21;
      if ( (int)currentGaugeEntityIndex >= gaugeEntityList->fields._size )
        goto LABEL_15;
      Item = System_Collections_Generic_List_object___get_Item(
               gaugeEntityList,
               currentGaugeEntityIndex,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        return;
      gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
    }
    if ( gaugeEntityList )
    {
LABEL_15:
      v3 = 0;
      while ( v3 < gaugeEntityList->fields._size )
      {
        v9 = System_Collections_Generic_List_object___get_Item(
               gaugeEntityList,
               v3,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
          goto LABEL_5;
        gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
        ++v3;
        if ( !gaugeEntityList )
          goto LABEL_21;
      }
      goto LABEL_4;
    }
LABEL_21:
    sub_2213CDC(gaugeEntityList, currentGaugeEntityIndex);
  }
LABEL_4:
  v3 = 0;
LABEL_5:
  this->fields.currentGaugeEntityIndex = v3;
}


void BattlePointGaugeManager__PrioritizeShowGaugeEntity(
        BattlePointGaugeManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *gaugeEntityList; // x0
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 currentGaugeEntityIndex; // x1
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *v9; // x8
  int32_t v10; // w20
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5974159 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    byte_5974159 = 1;
  }
  gaugeEntityList = (System_Collections_ICollection_o *)this->fields.gaugeEntityList;
  index = 0;
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(gaugeEntityList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    v9 = this->fields.gaugeEntityList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size >= 2 )
    {
      BattlePointGaugeManager__GetEntityIndexByBattlePointId(this, battlePointId, &index, v8);
      v10 = index;
      if ( (index & 0x80000000) == 0 )
      {
        currentGaugeEntityIndex = (unsigned int)this->fields.currentGaugeEntityIndex;
        if ( index == (_DWORD)currentGaugeEntityIndex )
        {
          if ( this->fields.state != 4 )
          {
LABEL_12:
            this->fields.timer = 0.0;
LABEL_18:
            this->fields.priorityHoldTimer = (float)(this->fields.prioritizeHoldDuration
                                                   & ~(this->fields.prioritizeHoldDuration >> 31));
            return;
          }
          IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           IsNullOrEmpty,
                                                                           index,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
            if ( IsNullOrEmpty )
            {
              ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))IsNullOrEmpty->klass->vtable._11_Add.methodPtr)(
                IsNullOrEmpty,
                IsNullOrEmpty->klass->vtable._11_Add.method,
                (float)this->fields.fadeInDuration / 1000.0);
              this->fields.state = 1;
              goto LABEL_12;
            }
          }
        }
        else
        {
          IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           IsNullOrEmpty,
                                                                           currentGaugeEntityIndex,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
            if ( IsNullOrEmpty )
            {
              ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))IsNullOrEmpty->klass->vtable._12_unknown.methodPtr)(
                IsNullOrEmpty,
                IsNullOrEmpty->klass->vtable._12_unknown.method,
                (float)this->fields.fadeOutDuration / 1000.0);
              IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
              this->fields.currentGaugeEntityIndex = v10;
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               IsNullOrEmpty,
                                                                               v10,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
                if ( IsNullOrEmpty )
                {
                  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))IsNullOrEmpty->klass->vtable._11_Add.methodPtr)(
                    IsNullOrEmpty,
                    IsNullOrEmpty->klass->vtable._11_Add.method,
                    (float)this->fields.fadeInDuration / 1000.0);
                  this->fields.timer = 0.0;
                  this->fields.state = 1;
                  goto LABEL_18;
                }
              }
            }
          }
        }
LABEL_20:
        sub_2213CDC(IsNullOrEmpty, currentGaugeEntityIndex);
      }
    }
  }
}


void BattlePointGaugeManager__SetPriorityGauge(
        BattlePointGaugeManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *gaugeEntityList; // x0
  const MethodInfo *v6; // x3
  int32_t v7; // w20
  __int64 currentGaugeEntityIndex; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo_4483994 *v10; // x2
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5974161 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    byte_5974161 = 1;
  }
  gaugeEntityList = (System_Collections_ICollection_o *)this->fields.gaugeEntityList;
  index = 0;
  if ( !BasicHelper__IsNullOrEmpty(gaugeEntityList, 0) )
  {
    BattlePointGaugeManager__GetEntityIndexByBattlePointId(this, battlePointId, &index, v6);
    v7 = index;
    if ( (index & 0x80000000) == 0 )
    {
      currentGaugeEntityIndex = (unsigned int)this->fields.currentGaugeEntityIndex;
      Item = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
      if ( index == (_DWORD)currentGaugeEntityIndex )
      {
        if ( !Item )
          goto LABEL_15;
        v10 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__;
      }
      else
      {
        if ( !Item )
          goto LABEL_15;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              currentGaugeEntityIndex,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !Item )
          goto LABEL_15;
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))Item->klass->vtable._12_unknown.methodPtr)(
          Item,
          Item->klass->vtable._12_unknown.method,
          (float)this->fields.fadeOutDuration / 1000.0);
        Item = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
        this->fields.currentGaugeEntityIndex = v7;
        if ( !Item )
          goto LABEL_15;
        v10 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__;
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v7,
                                                            v10);
      if ( Item )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))Item->klass->vtable._9_unknown.methodPtr)(
          Item,
          Item->klass->vtable._9_unknown.method);
        this->fields.timer = 0.0;
        this->fields.state = 1;
        return;
      }
LABEL_15:
      sub_2213CDC(Item, currentGaugeEntityIndex);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeManager__ShowOnlyGauge(
        BattlePointGaugeManager_o *this,
        int32_t showIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *gaugeEntityList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  Il2CppObject *Item; // x22

  if ( (byte_597415D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597415D = 1;
  }
  gaugeEntityList = this->fields.gaugeEntityList;
  if ( !gaugeEntityList )
LABEL_15:
    sub_2213CDC(gaugeEntityList, *(_QWORD *)&showIndex);
  v6 = 0;
  while ( v6 < gaugeEntityList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gaugeEntityList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    gaugeEntityList = (struct System_Collections_Generic_List_BattlePointGaugeComponent__o *)UnityEngine_Object__op_Equality(
                                                                                               (UnityEngine_Object_o *)Item,
                                                                                               0,
                                                                                               0);
    if ( ((unsigned __int8)gaugeEntityList & 1) == 0 )
    {
      if ( showIndex == v6 )
      {
        if ( !Item )
          goto LABEL_15;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Item->klass->vtable[11].methodPtr)(
          Item,
          Item->klass->vtable[11].method,
          (float)this->fields.fadeInDuration / 1000.0);
      }
      else
      {
        if ( !Item )
          goto LABEL_15;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Item->klass->vtable[12].methodPtr)(
          Item,
          Item->klass->vtable[12].method,
          (float)this->fields.fadeOutDuration / 1000.0);
      }
    }
    gaugeEntityList = this->fields.gaugeEntityList;
    ++v6;
    if ( !gaugeEntityList )
      goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeManager__ShowOnlyGaugeImmediately(
        BattlePointGaugeManager_o *this,
        int32_t showIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *gaugeEntityList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  Il2CppObject *Item; // x22
  VirtualInvokeData *v9; // x8
  const MethodInfo **p_method; // x9

  if ( (byte_5974160 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974160 = 1;
  }
  gaugeEntityList = this->fields.gaugeEntityList;
  if ( !gaugeEntityList )
LABEL_16:
    sub_2213CDC(gaugeEntityList, *(_QWORD *)&showIndex);
  v6 = 0;
  while ( v6 < gaugeEntityList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gaugeEntityList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    gaugeEntityList = (struct System_Collections_Generic_List_BattlePointGaugeComponent__o *)UnityEngine_Object__op_Equality(
                                                                                               (UnityEngine_Object_o *)Item,
                                                                                               0,
                                                                                               0);
    if ( ((unsigned __int8)gaugeEntityList & 1) == 0 )
    {
      if ( showIndex == v6 )
      {
        if ( !Item )
          goto LABEL_16;
        v9 = &Item->klass->vtable[9];
        p_method = &Item->klass->vtable[9].method;
      }
      else
      {
        if ( !Item )
          goto LABEL_16;
        v9 = &Item->klass->vtable[10];
        p_method = &Item->klass->vtable[10].method;
      }
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v9->methodPtr)(Item, *p_method);
    }
    gaugeEntityList = this->fields.gaugeEntityList;
    ++v6;
    if ( !gaugeEntityList )
      goto LABEL_16;
  }
}


void BattlePointGaugeManager__StartClose(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *gaugeEntityList; // x0
  int32_t v7; // w20
  __int64 v8; // x1
  Il2CppObject *Item; // x21
  const MethodInfo *v10; // x2

  if ( (byte_597415C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597415C = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.gaugeEntityList, 0) )
  {
    this->fields.isRotationEnabled = 0;
    BattlePointGaugeManager__NormalizeCurrentGaugeEntityIndex(this, v3);
    BattlePointGaugeManager__ShowOnlyGaugeImmediately(this, this->fields.currentGaugeEntityIndex, v4);
    gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
    this->fields.isGaugeOpened = 0;
    this->fields.state = 3;
    this->fields.timer = 0.0;
    this->fields.priorityHoldTimer = 0.0;
    if ( !gaugeEntityList )
      goto LABEL_14;
    v7 = 0;
    while ( v7 < gaugeEntityList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               gaugeEntityList,
               v7,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
        if ( !gaugeEntityList )
          goto LABEL_14;
        gaugeEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         gaugeEntityList,
                                                                         v7,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !gaugeEntityList )
          goto LABEL_14;
        LOBYTE(gaugeEntityList[5].fields._items) = 0;
      }
      gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
      ++v7;
      if ( !gaugeEntityList )
        goto LABEL_14;
    }
    gaugeEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     gaugeEntityList,
                                                                     this->fields.currentGaugeEntityIndex,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    if ( !gaugeEntityList )
LABEL_14:
      sub_2213CDC(gaugeEntityList, v5);
    BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)gaugeEntityList, 0, v10);
  }
}


void BattlePointGaugeManager__StartOpen(
        BattlePointGaugeManager_o *this,
        System_Nullable_int__o index,
        const MethodInfo *method)
{
  bool hasValue; // w20
  const MethodInfo *v5; // x1
  int32_t currentGaugeEntityIndex; // w1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *gaugeEntityList; // x0
  int32_t v10; // w20
  __int64 v11; // x1
  Il2CppObject *Item; // x21
  System_Nullable_int__o v13; // [xsp+8h] [xbp-38h] BYREF

  hasValue = index.fields.hasValue;
  v13 = index;
  if ( (byte_597415B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597415B = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.gaugeEntityList, 0) )
  {
    if ( hasValue )
      this->fields.currentGaugeEntityIndex = System_Nullable_int___get_Value(
                                               (System_Nullable_int__o)&v13,
                                               (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__);
    BattlePointGaugeManager__NormalizeCurrentGaugeEntityIndex(this, v5);
    currentGaugeEntityIndex = this->fields.currentGaugeEntityIndex;
    this->fields.isGaugeOpened = 1;
    this->fields.state = 1;
    this->fields.timer = 0.0;
    this->fields.priorityHoldTimer = 0.0;
    BattlePointGaugeManager__ShowOnlyGaugeImmediately(this, currentGaugeEntityIndex, v7);
    gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
    if ( !gaugeEntityList )
      goto LABEL_16;
    v10 = 0;
    while ( v10 < gaugeEntityList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               gaugeEntityList,
               v10,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
        if ( !gaugeEntityList )
          goto LABEL_16;
        gaugeEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         gaugeEntityList,
                                                                         v10,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !gaugeEntityList )
          goto LABEL_16;
        LOBYTE(gaugeEntityList[5].fields._items) = 1;
      }
      gaugeEntityList = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
      ++v10;
      if ( !gaugeEntityList )
        goto LABEL_16;
    }
    gaugeEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     gaugeEntityList,
                                                                     this->fields.currentGaugeEntityIndex,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    if ( !gaugeEntityList )
LABEL_16:
      sub_2213CDC(gaugeEntityList, v8);
    BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gaugeEntityList, v8);
  }
}


void BattlePointGaugeManager__StartRotation(BattlePointGaugeManager_o *this, bool resetTimer, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *gaugeEntityList; // x8
  int32_t state; // w9
  int32_t currentGaugeEntityIndex; // w1
  float showDuration; // s0

  if ( (byte_597415E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    byte_597415E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.gaugeEntityList, 0);
  if ( !IsNullOrEmpty )
  {
    gaugeEntityList = this->fields.gaugeEntityList;
    if ( !gaugeEntityList )
      sub_2213CDC(IsNullOrEmpty, v6);
    if ( gaugeEntityList->fields._size >= 2 )
    {
      state = this->fields.state;
      this->fields.isRotationEnabled = 1;
      if ( state == 3 )
      {
        currentGaugeEntityIndex = this->fields.currentGaugeEntityIndex;
        this->fields.state = 1;
        BattlePointGaugeManager__ShowOnlyGaugeImmediately(this, currentGaugeEntityIndex, v7);
      }
      if ( resetTimer )
        this->fields.timer = 0.0;
      showDuration = (float)this->fields.showDuration;
      if ( this->fields.priorityHoldTimer > showDuration )
        this->fields.priorityHoldTimer = showDuration;
    }
  }
}


void BattlePointGaugeManager__StopRotation(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  this->fields.isRotationEnabled = 0;
}


void BattlePointGaugeManager__UnlockChangeGauge(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  this->fields.isLockGauge = 0;
}


void BattlePointGaugeManager__UnprioritizeShowGaugeEntity(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *gaugeEntityList; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x2
  __int64 currentGaugeEntityIndex; // x1
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *v7; // x8

  if ( (byte_597415A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    byte_597415A = 1;
  }
  gaugeEntityList = (System_Collections_ICollection_o *)this->fields.gaugeEntityList;
  this->fields.priorityHoldTimer = 0.0;
  this->fields.timer = 0.0;
  this->fields.state = 1;
  this->fields.isLockGauge = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(gaugeEntityList, 0);
  if ( !IsNullOrEmpty )
  {
    currentGaugeEntityIndex = (unsigned int)this->fields.currentGaugeEntityIndex;
    if ( (currentGaugeEntityIndex & 0x80000000) == 0 )
    {
      v7 = this->fields.gaugeEntityList;
      if ( !v7 )
        sub_2213CDC(IsNullOrEmpty, currentGaugeEntityIndex);
      if ( (int)currentGaugeEntityIndex < v7->fields._size )
        BattlePointGaugeManager__ShowOnlyGauge(this, currentGaugeEntityIndex, v5);
    }
  }
}


void BattlePointGaugeManager__Update(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *gaugeEntityList; // x8
  float priorityHoldTimer; // s8
  float timer; // s8
  float deltaTime; // s0
  int32_t state; // w8
  float v10; // s0
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *v11; // x9
  int32_t v12; // w8

  if ( (byte_5974157 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
    byte_5974157 = 1;
  }
  if ( this->fields.isRotationEnabled )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)this->fields.gaugeEntityList,
                                                                   0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      gaugeEntityList = this->fields.gaugeEntityList;
      if ( !gaugeEntityList )
        goto LABEL_24;
      if ( gaugeEntityList->fields._size < 2 || this->fields.state == 3 || this->fields.isLockGauge )
        return;
      priorityHoldTimer = this->fields.priorityHoldTimer;
      if ( priorityHoldTimer > 0.0 )
      {
        this->fields.priorityHoldTimer = priorityHoldTimer + (float)(UnityEngine_Time__get_deltaTime(0) * -1000.0);
        return;
      }
      timer = this->fields.timer;
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      state = this->fields.state;
      v10 = timer + (float)(deltaTime * 1000.0);
      this->fields.timer = v10;
      if ( state == 4 )
      {
        if ( v10 < (float)this->fields.interval )
          return;
        IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
        this->fields.timer = 0.0;
        if ( !IsNullOrEmpty )
          goto LABEL_24;
        IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       IsNullOrEmpty,
                                                                       this->fields.currentGaugeEntityIndex,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_24;
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))IsNullOrEmpty->klass->vtable._11_Add.methodPtr)(
          IsNullOrEmpty,
          IsNullOrEmpty->klass->vtable._11_Add.method,
          (float)this->fields.fadeInDuration / 1000.0);
        v10 = this->fields.timer;
        this->fields.state = 1;
      }
      if ( v10 < (float)this->fields.showDuration )
        return;
      IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.gaugeEntityList;
      this->fields.timer = 0.0;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       IsNullOrEmpty,
                                                                       this->fields.currentGaugeEntityIndex,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Item__);
        if ( IsNullOrEmpty )
        {
          IsNullOrEmpty = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))IsNullOrEmpty->klass->vtable._12_unknown.methodPtr)(
                                                                         IsNullOrEmpty,
                                                                         IsNullOrEmpty->klass->vtable._12_unknown.method,
                                                                         (float)this->fields.fadeOutDuration / 1000.0);
          v11 = this->fields.gaugeEntityList;
          v12 = this->fields.currentGaugeEntityIndex + 1;
          this->fields.currentGaugeEntityIndex = v12;
          if ( v11 )
          {
            if ( v12 >= v11->fields._size )
              this->fields.currentGaugeEntityIndex = 0;
            this->fields.state = 4;
            return;
          }
        }
      }
LABEL_24:
      sub_2213CDC(IsNullOrEmpty, v4);
    }
  }
}


float BattlePointGaugeManager__get_FadeInSec(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  return (float)this->fields.fadeInDuration / 1000.0;
}


float BattlePointGaugeManager__get_FadeOutSec(BattlePointGaugeManager_o *this, const MethodInfo *method)
{
  return (float)this->fields.fadeOutDuration / 1000.0;
}