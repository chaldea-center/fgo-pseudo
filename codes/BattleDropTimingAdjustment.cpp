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

  if ( (byte_4CF10C3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
    byte_4CF10C3 = 1;
  }
  value = 0;
  giftIdToTimingDataMap = this->fields.giftIdToTimingDataMap;
  if ( !giftIdToTimingDataMap )
    sub_1C7BD40(0, *(_QWORD *)&giftId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)giftIdToTimingDataMap,
    giftId,
    &value,
    (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
  return (BattleDropTimingAdjustment_FixedDropTimingData_o *)value;
}


void BattleDropTimingAdjustment__Initialize(
        BattleDropTimingAdjustment_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 naturalAligment; // x10
  UnityEngine_ScriptableObject_o *v9; // x22
  System_Collections_Generic_Dictionary_int__object__o *v10; // x24
  struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o **p_giftIdToTimingDataMap; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  BattleDropTimingAdjustment___c_c *v18; // x0
  System_Func_object__int__o *_9__4_0; // x24
  Il2CppObject *v20; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v28; // x0
  BattleDropTimingAdjustment___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x23
  System_Func_object__int__o *_9__4_1; // x24
  Il2CppObject *v32; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Func_object__int__o *_9__4_2; // x25
  Il2CppObject *v41; // x26
  struct BattleDropTimingAdjustment___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *v57; // x27
  System_Collections_Generic_List_object__o *v58; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int size; // w8
  System_Collections_Generic_List_object__o *v66; // x24
  unsigned int v67; // w28
  GrandQuestFolderBoardItem_o *v68; // x22
  _QWORD *v69; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x21
  System_Func_int__int__o *klass; // x25
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x8
  int v79; // w9
  int v80; // w26
  int v81; // w10
  __int64 v82; // x19
  int v83; // w11
  __int64 v84; // x12
  __int64 v85; // x25
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  __int64 v92; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  __int64 v99; // d0
  float v100; // s0
  struct System_Object_array *items; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x8
  __int64 v105; // x19
  __int64 v106; // x8
  unsigned __int64 v107; // x23
  BattleDropTimingAdjustment_Fields *p_fields; // [xsp+0h] [xbp-70h]
  Il2CppObject *v109; // [xsp+8h] [xbp-68h]

  if ( (byte_4CF10C2 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDropTimingAdjustmentSetting_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Sum_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_1C7BAE8(&BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
    sub_1C7BAE8(&System_Func_int__int__TypeInfo);
    sub_1C7BAE8(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_1C7BAE8(&System_Func_DropInfo__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__);
    sub_1C7BAE8(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__);
    sub_1C7BAE8(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__);
    sub_1C7BAE8(&Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__);
    sub_1C7BAE8(&BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
    sub_1C7BAE8(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_4CF10C2 = 1;
  }
  v7 = sub_1C7BD34(BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    if ( scriptableObject
      && (naturalAligment = BattleDropTimingAdjustmentSetting_TypeInfo->_2.naturalAligment,
          scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleDropTimingAdjustmentSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropTimingAdjustmentSetting_TypeInfo )
        v9 = scriptableObject;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0) )
    {
      v109 = (Il2CppObject *)v7;
      v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v10,
        (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.giftIdToTimingDataMap = (struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o *)v10;
      p_giftIdToTimingDataMap = &this->fields.giftIdToTimingDataMap;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.giftIdToTimingDataMap,
        (int32_t)v10,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = BattleDropTimingAdjustment___c_TypeInfo;
      if ( !BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo);
        v18 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v18->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v20, Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__, 0);
        static_fields = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_DropInfo__int__o *)_9__4_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
          (int32_t)_9__4_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      v28 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__4_0,
              (const MethodInfo_31996D4 *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v29 = BattleDropTimingAdjustment___c_TypeInfo;
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
      if ( !BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo);
        v29 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_1 = (System_Func_object__int__o *)v29->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v29->static_fields->__9;
        _9__4_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_1, v32, Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__, 0);
        v33 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v33->__9__4_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_1;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v33->__9__4_1, (int32_t)_9__4_1, v34, v35, v36, v37, v38, v39);
        v29 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__int__o *)v29->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v29->static_fields->__9;
        _9__4_2 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_2, v41, Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__, 0);
        v42 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v42->__9__4_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_2;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v42->__9__4_2, (int32_t)_9__4_2, v43, v44, v45, v46, v47, v48);
      }
      monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (System_Func_TSource__TElement__o *)_9__4_2,
                                                               (const MethodInfo_31AFAA8 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      v57 = (Il2CppObject *)v7;
      if ( !v7 )
        goto LABEL_75;
      *(_QWORD *)(v7 + 16) = monitor;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)monitor, v51, v52, v53, v54, v55, v56);
      v58 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v58,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.fixedDropTimingDataList = (struct System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__o *)v58;
      p_fields = &this->fields;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v58, v59, v60, v61, v62, v63, v64);
      if ( !v9
        || (monitor = (System_Collections_Generic_List_object__o *)v9[1].monitor) == 0
        || (monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                     monitor,
                                                                     (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__),
            this->fields.waitDropTime = *(float *)&v9[1].klass,
            !monitor) )
      {
LABEL_75:
        sub_1C7BD40(monitor, v50);
      }
      size = monitor->fields._size;
      v66 = monitor;
      if ( size >= 1 )
      {
        v67 = 0;
        v68 = (GrandQuestFolderBoardItem_o *)(v7 + 24);
        while ( 1 )
        {
          if ( v67 >= size )
            goto LABEL_74;
          v69 = (_QWORD *)*((_QWORD *)&v66->fields._syncRoot + (int)v67);
          if ( !v69 )
            goto LABEL_75;
          if ( v69[2] )
          {
            v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v69[2];
            klass = (System_Func_int__int__o *)v68->klass;
            if ( !v68->klass )
            {
              klass = (System_Func_int__int__o *)sub_1C7BD34(System_Func_int__int__TypeInfo);
              System_Func_int__int____ctor(
                klass,
                v57,
                Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__,
                0);
              v57[1].monitor = klass;
              sub_1C7BA8C(v68, (int32_t)klass, v72, v73, v74, v75, v76, v77);
            }
            monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Sum_int_(
                                                                     v70,
                                                                     (System_Func_TSource__int__o *)klass,
                                                                     (const MethodInfo_31AD740 *)Method_System_Linq_Enumerable_Sum_int___);
            if ( (_DWORD)monitor )
            {
              v78 = v69[3];
              if ( !v78 )
                goto LABEL_75;
              v79 = *(_DWORD *)(v78 + 24);
              v80 = (int)monitor;
              if ( v79 >= 1 )
              {
                v81 = 0;
                v82 = 0;
                v83 = -1;
                do
                {
                  if ( v79 == v81 )
                    goto LABEL_74;
                  v84 = *(_QWORD *)(v78 + 8LL * v81 + 32);
                  if ( !v84 )
                    goto LABEL_75;
                  ++v81;
                  if ( v83 < *(_DWORD *)(v84 + 16) && *(_DWORD *)(v84 + 16) <= (int)monitor )
                  {
                    v83 = *(_DWORD *)(v84 + 16);
                    v82 = v84;
                  }
                }
                while ( v79 != v81 );
                if ( v82 )
                {
                  v85 = sub_1C7BD34(BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v85, 0);
                  if ( !v85 )
                    goto LABEL_75;
                  v92 = v69[2];
                  *(_QWORD *)(v85 + 16) = v92;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v85 + 16), v92, v86, v87, v88, v89, v90, v91);
                  v99 = v69[4];
                  *(_DWORD *)(v85 + 36) = 0;
                  *(_QWORD *)(v85 + 28) = v99;
                  v100 = *(_BYTE *)(v82 + 24)
                       ? *(float *)(v82 + 20)
                       : (float)((float)*(int *)(v82 + 28) / (float)v80) / 1000.0;
                  *(float *)(v85 + 24) = v100;
                  monitor = (System_Collections_Generic_List_object__o *)p_fields->fixedDropTimingDataList;
                  if ( !p_fields->fixedDropTimingDataList )
                    goto LABEL_75;
                  items = monitor->fields._items;
                  v102 = Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__;
                  ++monitor->fields._version;
                  if ( !items )
                    goto LABEL_75;
                  v103 = monitor->fields._size;
                  if ( (unsigned int)v103 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      monitor,
                      (Il2CppObject *)v85,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v104 = &items->obj.klass + v103;
                    monitor->fields._size = v103 + 1;
                    v104[4] = (Il2CppClass *)v85;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 4), v85, v93, v94, v95, v96, v97, v98);
                  }
                  v105 = *(_QWORD *)(v85 + 16);
                  v57 = v109;
                  if ( v105 )
                  {
                    v106 = *(_QWORD *)(v105 + 24);
                    if ( (int)v106 >= 1 )
                      break;
                  }
                }
              }
            }
          }
LABEL_72:
          size = v66->fields._size;
          if ( (int)++v67 >= size )
            return;
        }
        v107 = 0;
        while ( v107 < (unsigned int)v106 )
        {
          monitor = (System_Collections_Generic_List_object__o *)*p_giftIdToTimingDataMap;
          if ( !*p_giftIdToTimingDataMap )
            goto LABEL_75;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)monitor,
            *(_DWORD *)(v105 + 32 + 4 * v107),
            (Il2CppObject *)v85,
            (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
          LODWORD(v106) = *(_DWORD *)(v105 + 24);
          if ( (__int64)++v107 >= (int)v106 )
            goto LABEL_72;
        }
LABEL_74:
        sub_1C7BD48(monitor);
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
  float result; // s0

  effectDisplayCount = this->fields.effectDisplayCount;
  result = this->fields.firstEffectDelayTime + (float)(this->fields.effectIntervalTime * (float)effectDisplayCount);
  this->fields.effectDisplayCount = effectDisplayCount + 1;
  return result;
}


void BattleDropTimingAdjustment___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF10C4 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_4CF10C4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleDropTimingAdjustment___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropTimingAdjustment___c_TypeInfo->static_fields->__9 = (struct BattleDropTimingAdjustment___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleDropTimingAdjustment___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
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

  if ( (byte_4CF10C5 & 1) == 0 )
  {
    this = (BattleDropTimingAdjustment___c_o *)sub_1C7BAE8(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_4CF10C5 = 1;
  }
  if ( !g )
    sub_1C7BD40(this, g);
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
    v7 = sub_1C51E70(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropTimingAdjustment___c___Initialize_b__4_2(
        BattleDropTimingAdjustment___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_4CF10C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_4CF10C6 = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_DropInfo___);
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
  if ( (byte_4CF10C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_4CF10C7 = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_31641F4 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}