void BattleSyncUsedTargetBuff___ctor(
        BattleSyncUsedTargetBuff_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5973881 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_5973881 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.usingReservedBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usingReservedBuffList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetBuff = buffData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)buffData, v14, v15, v16, v17, v18, v19);
  this->fields.targetBuffOwnedSvt = svtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetBuffOwnedSvt,
    (int32_t)svtData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void BattleSyncUsedTargetBuff__AddUseBuff(
        BattleSyncUsedTargetBuff_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *usingReservedBuffList; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0

  if ( (byte_5973882 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    byte_5973882 = 1;
  }
  usingReservedBuffList = this->fields.usingReservedBuffList;
  if ( !usingReservedBuffList )
    goto LABEL_10;
  usingReservedBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___Contains(
                                                                                                 (System_Collections_Generic_List_object__o *)usingReservedBuffList,
                                                                                                 (Il2CppObject *)buffData,
                                                                                                 (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( ((unsigned __int8)usingReservedBuffList & 1) != 0 )
    return;
  v12 = (System_Collections_Generic_List_object__o *)this->fields.usingReservedBuffList;
  if ( !v12
    || (items = v12->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_10:
    sub_2213CDC(usingReservedBuffList, buffData);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)buffData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v16[4] = (Il2CppClass *)buffData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)buffData, v6, v7, v8, v9, v10, v11);
  }
}


void BattleSyncUsedTargetBuff__RemoveUnusedBuff(
        BattleSyncUsedTargetBuff_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *usingReservedBuffList; // x0

  if ( (byte_5973883 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_5973883 = 1;
  }
  usingReservedBuffList = (System_Collections_Generic_List_object__o *)this->fields.usingReservedBuffList;
  if ( !usingReservedBuffList )
    sub_2213CDC(0, buffData);
  System_Collections_Generic_List_object___Remove(
    usingReservedBuffList,
    (Il2CppObject *)buffData,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
}


// local variable allocation has failed, the output may be wrong!
void BattleSyncUsedTargetBuff__SetActBuff(BattleSyncUsedTargetBuff_o *this, bool isRec, const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *targetBuff; // x8

  targetBuff = this->fields.targetBuff;
  if ( !targetBuff )
    sub_2213CDC(this, isRec);
  targetBuff->fields.isAct = isRec;
}


void BattleSyncUsedTargetBuff__Use(
        BattleSyncUsedTargetBuff_o *this,
        BattleBuffData_BuffData_o *usedBuff,
        const MethodInfo *method)
{
  BattleSyncUsedTargetBuff_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *usingReservedBuffList; // x20
  BattleSyncUsedTargetBuff___c_c *v7; // x0
  struct BattleSyncUsedTargetBuff___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v10; // x22
  struct BattleSyncUsedTargetBuff___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattleBuffData_BuffData_o *targetBuff; // x20
  BattleBuffData_o *BuffData; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BattleBuffData_BuffData_o *v26; // x22
  BattleSyncUsedTargetBuff_o *v27; // x21
  __int64 v28; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v29; // x8
  int32_t size; // w2
  int v31; // w9
  __int64 v32; // x0

  v4 = this;
  if ( (byte_5973884 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_2213A60(&BattleBuffData_BuffData___TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_2213A60(&Method_BattleSyncUsedTargetBuff___c__Use_b__7_0__);
    this = (BattleSyncUsedTargetBuff_o *)sub_2213A60(&BattleSyncUsedTargetBuff___c_TypeInfo);
    byte_5973884 = 1;
  }
  if ( v4->fields.targetBuff != usedBuff )
  {
    if ( !usedBuff )
      goto LABEL_29;
    BattleBuffData_BuffData__SetSyncUsedGutsBuff(usedBuff, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.usingReservedBuffList, 0) )
    {
      usingReservedBuffList = (System_Collections_Generic_List_T__o *)v4->fields.usingReservedBuffList;
      v7 = BattleSyncUsedTargetBuff___c_TypeInfo;
      if ( !*(&BattleSyncUsedTargetBuff___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleSyncUsedTargetBuff___c_TypeInfo, v5);
        v7 = BattleSyncUsedTargetBuff___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__7_0 = (System_Func_object__bool__o *)static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, v5);
          static_fields = BattleSyncUsedTargetBuff___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__7_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__7_0, v10, Method_BattleSyncUsedTargetBuff___c__Use_b__7_0__, 0);
        v11 = BattleSyncUsedTargetBuff___c_TypeInfo->static_fields;
        v11->__9__7_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__7_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__7_0, (int32_t)_9__7_0, v12, v13, v14, v15, v16, v17);
      }
      if ( !BasicHelper__Any_object_(
              usingReservedBuffList,
              (System_Func_T__bool__o *)_9__7_0,
              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___) )
      {
        this = (BattleSyncUsedTargetBuff_o *)v4->fields.targetBuffOwnedSvt;
        if ( this )
        {
          targetBuff = v4->fields.targetBuff;
          this = (BattleSyncUsedTargetBuff_o *)BattleServantData__get_BuffData((BattleServantData_o *)this, 0);
          if ( !targetBuff )
            goto LABEL_29;
          BattleBuffData_BuffData__ForceUsed(targetBuff, (BattleBuffData_o *)this, 0, 0);
          this = (BattleSyncUsedTargetBuff_o *)v4->fields.targetBuffOwnedSvt;
          if ( !this )
            goto LABEL_29;
          BuffData = BattleServantData__get_BuffData((BattleServantData_o *)this, 0);
          this = (BattleSyncUsedTargetBuff_o *)sub_2213B20(BattleBuffData_BuffData___TypeInfo, 1);
          if ( !this )
            goto LABEL_29;
          v26 = v4->fields.targetBuff;
          v27 = this;
          if ( v26 )
          {
            this = (BattleSyncUsedTargetBuff_o *)sub_2213BB4(v4->fields.targetBuff, this->klass->_1.element_class);
            if ( !this )
            {
              v32 = sub_2213D00(0, v28);
              sub_2213BA0(v32, 0);
            }
          }
          if ( !LODWORD(v27->fields.targetBuffOwnedSvt) )
            sub_2213CE4(this);
          v27->fields.usingReservedBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v26;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v27->fields.usingReservedBuffList,
            (int32_t)v26,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          if ( !BuffData )
            goto LABEL_29;
          this = (BattleSyncUsedTargetBuff_o *)BattleBuffData__UsedProgressing(
                                                 BuffData,
                                                 (BattleBuffData_BuffData_array *)v27,
                                                 0);
          if ( !this )
            goto LABEL_29;
          this = (BattleSyncUsedTargetBuff_o *)RemovedBuffInfo__get_ExistRemoveBuff(
                                                 (RemovedBuffInfo_o *)this,
                                                 (const MethodInfo *)usedBuff);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleSyncUsedTargetBuff_o *)v4->fields.targetBuffOwnedSvt;
            if ( !this )
              goto LABEL_29;
            BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
          }
        }
        v29 = v4->fields.usingReservedBuffList;
        if ( v29 )
        {
          size = v29->fields._size;
          v31 = v29->fields._version + 1;
          v29->fields._size = 0;
          v29->fields._version = v31;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v29->fields._items, 0, size, 0);
          return;
        }
LABEL_29:
        sub_2213CDC(this, usedBuff);
      }
    }
  }
}


void BattleSyncUsedTargetBuff___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973885 & 1) == 0 )
  {
    sub_2213A60(&BattleSyncUsedTargetBuff___c_TypeInfo);
    byte_5973885 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleSyncUsedTargetBuff___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSyncUsedTargetBuff___c_TypeInfo->static_fields->__9 = (struct BattleSyncUsedTargetBuff___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleSyncUsedTargetBuff___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSyncUsedTargetBuff___c___ctor(BattleSyncUsedTargetBuff___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSyncUsedTargetBuff___c___Use_b__7_0(
        BattleSyncUsedTargetBuff___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  return buff->fields.isUse;
}