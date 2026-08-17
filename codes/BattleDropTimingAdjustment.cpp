void BattleDropTimingAdjustment___ctor(BattleDropTimingAdjustment_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleDropTimingAdjustment_FixedDropTimingData_o *BattleDropTimingAdjustment__GetFixedDropTimingData(
        BattleDropTimingAdjustment_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o *giftIdToTimingDataMap; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597341A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
    byte_597341A = 1;
  }
  giftIdToTimingDataMap = this->fields.giftIdToTimingDataMap;
  value = 0;
  if ( !giftIdToTimingDataMap )
    sub_2213CDC(0, *(_QWORD *)&giftId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)giftIdToTimingDataMap,
    giftId,
    &value,
    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
  return (BattleDropTimingAdjustment_FixedDropTimingData_o *)value;
}


void BattleDropTimingAdjustment__Initialize(
        BattleDropTimingAdjustment_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 naturalAligment; // x10
  UnityEngine_ScriptableObject_o *v11; // x22
  System_Collections_Generic_Dictionary_int__object__o *v12; // x24
  struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o **p_giftIdToTimingDataMap; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  BattleDropTimingAdjustment___c_c *v21; // x0
  struct BattleDropTimingAdjustment___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x24
  Il2CppObject *v24; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v32; // x0
  __int64 v33; // x1
  BattleDropTimingAdjustment___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x23
  struct BattleDropTimingAdjustment___c_StaticFields *v36; // x9
  System_Func_object__int__o *_9__4_1; // x24
  Il2CppObject *v38; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct BattleDropTimingAdjustment___c_StaticFields *v46; // x9
  System_Func_object__int__o *_9__4_2; // x25
  Il2CppObject *v48; // x26
  struct BattleDropTimingAdjustment___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_List_object__o *v64; // x24
  BattleDropTimingAdjustment_Fields *p_fields; // x23
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int size; // w8
  System_Collections_Generic_List_object__o *v73; // x22
  unsigned int v74; // w26
  _QWORD *v75; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x21
  System_Func_int__int__o *v77; // x24
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  __int64 v84; // x8
  int v85; // w9
  int v86; // w24
  int v87; // w10
  __int64 v88; // x29
  int v89; // w12
  __int64 v90; // x13
  int v91; // w14
  __int64 v94; // x21
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x1
  __int64 *v102; // x25
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  __int64 v109; // d0
  int v110; // w8
  float v111; // s0
  struct System_Object_array *items; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x8
  __int64 v116; // x24
  __int64 v117; // x8
  unsigned __int64 v118; // x25

  if ( (byte_5973419 & 1) == 0 )
  {
    sub_2213A60(&BattleDropTimingAdjustmentSetting_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_2213A60(&BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_2213A60(&System_Func_DropInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__);
    sub_2213A60(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__);
    sub_2213A60(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__);
    sub_2213A60(&Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__);
    sub_2213A60(&BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
    sub_2213A60(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_5973419 = 1;
  }
  v7 = sub_2213CCC(BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    if ( scriptableObject
      && (naturalAligment = BattleDropTimingAdjustmentSetting_TypeInfo->_2.naturalAligment,
          scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleDropTimingAdjustmentSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropTimingAdjustmentSetting_TypeInfo )
        v11 = scriptableObject;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0) )
    {
      v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v12,
        (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.giftIdToTimingDataMap = (struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o *)v12;
      p_giftIdToTimingDataMap = &this->fields.giftIdToTimingDataMap;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.giftIdToTimingDataMap,
        (int32_t)v12,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v21 = BattleDropTimingAdjustment___c_TypeInfo;
      if ( !*(&BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo, v20);
        v21 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !*(&v21->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v21, v20);
          static_fields = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v24, Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__, 0);
        v25 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v25->__9__4_0 = (struct System_Func_DropInfo__int__o *)_9__4_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__4_0, (int32_t)_9__4_0, v26, v27, v28, v29, v30, v31);
      }
      v32 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__4_0,
              (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v34 = BattleDropTimingAdjustment___c_TypeInfo;
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
      if ( !*(&BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo, v33);
        v34 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      v36 = v34->static_fields;
      _9__4_1 = (System_Func_object__int__o *)v36->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !*(&v34->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v34, v33);
          v36 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)v36->__9;
        _9__4_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_1, v38, Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__, 0);
        v39 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v39->__9__4_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_1;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__4_1, (int32_t)_9__4_1, v40, v41, v42, v43, v44, v45);
        v34 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      if ( !*(&v34->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v34, v33);
        v34 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      v46 = v34->static_fields;
      _9__4_2 = (System_Func_object__int__o *)v46->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !*(&v34->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v34, v33);
          v46 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)v46->__9;
        _9__4_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_2, v48, Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__, 0);
        v49 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v49->__9__4_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_2;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->__9__4_2, (int32_t)_9__4_2, v50, v51, v52, v53, v54, v55);
      }
      monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (System_Func_TSource__TElement__o *)_9__4_2,
                                                               (const MethodInfo_389C478 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      if ( !v7 )
        goto LABEL_80;
      *(_QWORD *)(v7 + 16) = monitor;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)monitor, v58, v59, v60, v61, v62, v63);
      v64 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v64,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.fixedDropTimingDataList = (struct System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__o *)v64;
      p_fields = &this->fields;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v64, v66, v67, v68, v69, v70, v71);
      if ( !v11
        || (monitor = (System_Collections_Generic_List_object__o *)v11[1].monitor) == 0
        || (monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                     monitor,
                                                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__),
            this->fields.waitDropTime = *(float *)&v11[1].klass,
            !monitor) )
      {
LABEL_80:
        sub_2213CDC(monitor, v57);
      }
      size = monitor->fields._size;
      v73 = monitor;
      if ( size >= 1 )
      {
        v74 = 0;
        while ( 1 )
        {
          if ( v74 >= size )
            goto LABEL_81;
          v75 = (_QWORD *)*((_QWORD *)&v73->fields._syncRoot + (int)v74);
          if ( !v75 )
            goto LABEL_80;
          v76 = (System_Collections_Generic_IEnumerable_TSource__o *)v75[2];
          if ( v76 )
          {
            v77 = *(System_Func_int__int__o **)(v7 + 24);
            if ( !v77 )
            {
              v77 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
              System_Func_int__int____ctor(
                v77,
                (Il2CppObject *)v7,
                Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__,
                0);
              *(_QWORD *)(v7 + 24) = v77;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v77, v78, v79, v80, v81, v82, v83);
            }
            monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Sum_int_(
                                                                     v76,
                                                                     (System_Func_TSource__int__o *)v77,
                                                                     (const MethodInfo_3899F18 *)Method_System_Linq_Enumerable_Sum_int___);
            if ( (_DWORD)monitor )
            {
              v84 = v75[3];
              if ( !v84 )
                goto LABEL_80;
              v85 = *(_DWORD *)(v84 + 24);
              v86 = (int)monitor;
              if ( v85 >= 1 )
              {
                v87 = 0;
                v88 = 0;
                v89 = -1;
                do
                {
                  if ( v85 == v87 )
                    goto LABEL_81;
                  v90 = *(_QWORD *)(v84 + 8LL * v87 + 32);
                  if ( !v90 )
                    goto LABEL_80;
                  v91 = *(_DWORD *)(v90 + 16);
                  ++v87;
                  if ( v89 < v91 && v91 <= (int)monitor )
                  {
                    v89 = *(_DWORD *)(v90 + 16);
                    v88 = v90;
                  }
                }
                while ( (v85 & ~(v85 >> 31)) != v87 );
                if ( v88 )
                {
                  v94 = sub_2213CCC(BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v94, 0);
                  if ( !v94 )
                    goto LABEL_80;
                  v101 = v75[2];
                  *(_QWORD *)(v94 + 16) = v101;
                  v102 = (__int64 *)(v94 + 16);
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 16), v101, v95, v96, v97, v98, v99, v100);
                  v109 = v75[4];
                  v110 = *(unsigned __int8 *)(v88 + 24);
                  *(_DWORD *)(v94 + 36) = 0;
                  *(_QWORD *)(v94 + 28) = v109;
                  v111 = v110 ? *(float *)(v88 + 20) : (float)((float)*(int *)(v88 + 28) / (float)v86) / 1000.0;
                  *(float *)(v94 + 24) = v111;
                  monitor = (System_Collections_Generic_List_object__o *)p_fields->fixedDropTimingDataList;
                  if ( !p_fields->fixedDropTimingDataList )
                    goto LABEL_80;
                  items = monitor->fields._items;
                  v113 = Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__;
                  ++monitor->fields._version;
                  if ( !items )
                    goto LABEL_80;
                  v114 = monitor->fields._size;
                  if ( (unsigned int)v114 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      monitor,
                      (Il2CppObject *)v94,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v115 = &items->obj.klass + v114;
                    monitor->fields._size = v114 + 1;
                    v115[4] = (Il2CppClass *)v94;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v115 + 4), v94, v103, v104, v105, v106, v107, v108);
                  }
                  v116 = *v102;
                  if ( *v102 )
                  {
                    v117 = *(_QWORD *)(v116 + 24);
                    if ( (int)v117 >= 1 )
                      break;
                  }
                }
              }
            }
          }
LABEL_78:
          size = v73->fields._size;
          if ( (int)++v74 >= size )
            return;
        }
        v118 = 0;
        while ( v118 < (unsigned int)v117 )
        {
          monitor = (System_Collections_Generic_List_object__o *)*p_giftIdToTimingDataMap;
          if ( !*p_giftIdToTimingDataMap )
            goto LABEL_80;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)monitor,
            *(_DWORD *)(v116 + 32 + 4 * v118),
            (Il2CppObject *)v94,
            (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
          LODWORD(v117) = *(_DWORD *)(v116 + 24);
          if ( (__int64)++v118 >= (int)v117 )
            goto LABEL_78;
        }
LABEL_81:
        sub_2213CE4(monitor);
      }
    }
  }
}


void BattleDropTimingAdjustment_FixedDropTimingData___ctor(
        BattleDropTimingAdjustment_FixedDropTimingData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleDropTimingAdjustment_FixedDropTimingData__GetEffectWaitTime(
        BattleDropTimingAdjustment_FixedDropTimingData_o *this,
        const MethodInfo *method)
{
  int32_t effectDisplayCount; // w8
  float effectIntervalTime; // s1

  effectDisplayCount = this->fields.effectDisplayCount;
  effectIntervalTime = this->fields.effectIntervalTime;
  this->fields.effectDisplayCount = effectDisplayCount + 1;
  return this->fields.firstEffectDelayTime + (float)(effectIntervalTime * (float)effectDisplayCount);
}


void BattleDropTimingAdjustment___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597341B & 1) == 0 )
  {
    sub_2213A60(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_597341B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleDropTimingAdjustment___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropTimingAdjustment___c_TypeInfo->static_fields->__9 = (struct BattleDropTimingAdjustment___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleDropTimingAdjustment___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDropTimingAdjustment___c___ctor(BattleDropTimingAdjustment___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropTimingAdjustment___c___Initialize_b__4_0(
        BattleDropTimingAdjustment___c_o *this,
        DropInfo_o *dropInfo,
        const MethodInfo *method)
{
  if ( !dropInfo )
    sub_2213CDC(this, 0);
  return dropInfo->fields.mstGiftId;
}


int32_t BattleDropTimingAdjustment___c___Initialize_b__4_1(
        BattleDropTimingAdjustment___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__DropInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_597341C & 1) == 0 )
  {
    this = (BattleDropTimingAdjustment___c_o *)sub_2213A60(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_597341C = 1;
  }
  if ( !g )
    sub_2213CDC(this, g);
  klass = g->klass;
  v5 = *(unsigned __int16 *)&g->klass->_2.rank;
  if ( *(_WORD *)&g->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__DropInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__DropInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropTimingAdjustment___c___Initialize_b__4_2(
        BattleDropTimingAdjustment___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_597341D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_597341D = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_DropInfo___);
}


void BattleDropTimingAdjustment___c__DisplayClass4_0___ctor(
        BattleDropTimingAdjustment___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropTimingAdjustment___c__DisplayClass4_0___Initialize_b__3(
        BattleDropTimingAdjustment___c__DisplayClass4_0_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_597341E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_597341E = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_381DFF0 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}