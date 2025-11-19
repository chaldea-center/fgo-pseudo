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

  if ( (byte_4CB8D5D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
    byte_4CB8D5D = 1;
  }
  value = 0;
  giftIdToTimingDataMap = this->fields.giftIdToTimingDataMap;
  if ( !giftIdToTimingDataMap )
    sub_1C6BC60(0, *(_QWORD *)&giftId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)giftIdToTimingDataMap,
    giftId,
    &value,
    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TryGetValue__);
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
  const MethodInfo *v13; // x3
  BattleDropTimingAdjustment___c_c *v14; // x0
  System_Func_object__int__o *_9__4_0; // x24
  Il2CppObject *v16; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v20; // x0
  BattleDropTimingAdjustment___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  System_Func_object__int__o *_9__4_1; // x24
  Il2CppObject *v24; // x25
  struct BattleDropTimingAdjustment___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Func_object__int__o *_9__4_2; // x25
  Il2CppObject *v29; // x26
  struct BattleDropTimingAdjustment___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x27
  System_Collections_Generic_List_object__o *v38; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int size; // w8
  System_Collections_Generic_List_object__o *v42; // x24
  unsigned int v43; // w28
  CGThumbnailListItem_o *v44; // x22
  _QWORD *v45; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_int__int__o *klass; // x25
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  int v51; // w9
  int v52; // w26
  int v53; // w10
  __int64 v54; // x19
  int v55; // w11
  __int64 v56; // x12
  __int64 v57; // x25
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // d0
  float v64; // s0
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x8
  __int64 v69; // x19
  __int64 v70; // x8
  unsigned __int64 v71; // x23
  BattleDropTimingAdjustment_Fields *p_fields; // [xsp+0h] [xbp-70h]
  Il2CppObject *v73; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB8D5C & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropTimingAdjustmentSetting_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Sum_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_1C6BA08(&BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
    sub_1C6BA08(&System_Func_int__int__TypeInfo);
    sub_1C6BA08(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_1C6BA08(&System_Func_DropInfo__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__);
    sub_1C6BA08(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__);
    sub_1C6BA08(&Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__);
    sub_1C6BA08(&Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__);
    sub_1C6BA08(&BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
    sub_1C6BA08(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_4CB8D5C = 1;
  }
  v7 = sub_1C6BC54(BattleDropTimingAdjustment___c__DisplayClass4_0_TypeInfo);
  BattleDropTimingAdjustment___c__DisplayClass4_0___ctor((BattleDropTimingAdjustment___c__DisplayClass4_0_o *)v7, 0);
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
      v73 = (Il2CppObject *)v7;
      v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v10,
        (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.giftIdToTimingDataMap = (struct System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__o *)v10;
      p_giftIdToTimingDataMap = &this->fields.giftIdToTimingDataMap;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.giftIdToTimingDataMap, (int32_t)v10, v12, v13);
      v14 = BattleDropTimingAdjustment___c_TypeInfo;
      if ( !BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo);
        v14 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__int__o *)v14->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__4_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__4_0, v16, Method_BattleDropTimingAdjustment___c__Initialize_b__4_0__, 0);
        static_fields = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_DropInfo__int__o *)_9__4_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__4_0,
              (const MethodInfo_316581C *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v21 = BattleDropTimingAdjustment___c_TypeInfo;
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
      if ( !BattleDropTimingAdjustment___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropTimingAdjustment___c_TypeInfo);
        v21 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_1 = (System_Func_object__int__o *)v21->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__4_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_1, v24, Method_BattleDropTimingAdjustment___c__Initialize_b__4_1__, 0);
        v25 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v25->__9__4_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v25->__9__4_1, (int32_t)_9__4_1, v26, v27);
        v21 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleDropTimingAdjustment___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__int__o *)v21->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleDropTimingAdjustment___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v21->static_fields->__9;
        _9__4_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__4_2, v29, Method_BattleDropTimingAdjustment___c__Initialize_b__4_2__, 0);
        v30 = BattleDropTimingAdjustment___c_TypeInfo->static_fields;
        v30->__9__4_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__4_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v30->__9__4_2, (int32_t)_9__4_2, v31, v32);
      }
      monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (System_Func_TSource__TElement__o *)_9__4_2,
                                                               (const MethodInfo_317BB0C *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      v37 = (Il2CppObject *)v7;
      if ( !v7 )
        goto LABEL_75;
      *(_QWORD *)(v7 + 16) = monitor;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)monitor, v35, v36);
      v38 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v38,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData___ctor__);
      this->fields.fixedDropTimingDataList = (struct System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__o *)v38;
      p_fields = &this->fields;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v38, v39, v40);
      if ( !v9
        || (monitor = (System_Collections_Generic_List_object__o *)v9[1].monitor) == 0
        || (monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                     monitor,
                                                                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__ToArray__),
            this->fields.waitDropTime = *(float *)&v9[1].klass,
            !monitor) )
      {
LABEL_75:
        sub_1C6BC60(monitor, v34);
      }
      size = monitor->fields._size;
      v42 = monitor;
      if ( size >= 1 )
      {
        v43 = 0;
        v44 = (CGThumbnailListItem_o *)(v7 + 24);
        while ( 1 )
        {
          if ( v43 >= size )
            goto LABEL_74;
          v45 = (_QWORD *)*((_QWORD *)&v42->fields._syncRoot + (int)v43);
          if ( !v45 )
            goto LABEL_75;
          if ( v45[2] )
          {
            v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v45[2];
            klass = (System_Func_int__int__o *)v44->klass;
            if ( !v44->klass )
            {
              klass = (System_Func_int__int__o *)sub_1C6BC54(System_Func_int__int__TypeInfo);
              System_Func_int__int____ctor(
                klass,
                v37,
                Method_BattleDropTimingAdjustment___c__DisplayClass4_0__Initialize_b__3__,
                0);
              v37[1].monitor = klass;
              sub_1C6B9AC(v44, (int32_t)klass, v48, v49);
            }
            monitor = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Sum_int_(
                                                                     v46,
                                                                     (System_Func_TSource__int__o *)klass,
                                                                     (const MethodInfo_3179870 *)Method_System_Linq_Enumerable_Sum_int___);
            if ( (_DWORD)monitor )
            {
              v50 = v45[3];
              if ( !v50 )
                goto LABEL_75;
              v51 = *(_DWORD *)(v50 + 24);
              v52 = (int)monitor;
              if ( v51 >= 1 )
              {
                v53 = 0;
                v54 = 0;
                v55 = -1;
                do
                {
                  if ( v51 == v53 )
                    goto LABEL_74;
                  v56 = *(_QWORD *)(v50 + 8LL * v53 + 32);
                  if ( !v56 )
                    goto LABEL_75;
                  ++v53;
                  if ( v55 < *(_DWORD *)(v56 + 16) && *(_DWORD *)(v56 + 16) <= (int)monitor )
                  {
                    v55 = *(_DWORD *)(v56 + 16);
                    v54 = v56;
                  }
                }
                while ( v51 != v53 );
                if ( v54 )
                {
                  v57 = sub_1C6BC54(BattleDropTimingAdjustment_FixedDropTimingData_TypeInfo);
                  BattleDropTimingAdjustment_FixedDropTimingData___ctor(
                    (BattleDropTimingAdjustment_FixedDropTimingData_o *)v57,
                    0);
                  if ( !v57 )
                    goto LABEL_75;
                  v60 = v45[2];
                  *(_QWORD *)(v57 + 16) = v60;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 16), v60, v58, v59);
                  v63 = v45[4];
                  *(_DWORD *)(v57 + 36) = 0;
                  *(_QWORD *)(v57 + 28) = v63;
                  v64 = *(_BYTE *)(v54 + 24)
                      ? *(float *)(v54 + 20)
                      : (float)((float)*(int *)(v54 + 28) / (float)v52) / 1000.0;
                  *(float *)(v57 + 24) = v64;
                  monitor = (System_Collections_Generic_List_object__o *)p_fields->fixedDropTimingDataList;
                  if ( !p_fields->fixedDropTimingDataList )
                    goto LABEL_75;
                  items = monitor->fields._items;
                  v66 = Method_System_Collections_Generic_List_BattleDropTimingAdjustment_FixedDropTimingData__Add__;
                  ++monitor->fields._version;
                  if ( !items )
                    goto LABEL_75;
                  v67 = monitor->fields._size;
                  if ( (unsigned int)v67 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      monitor,
                      (Il2CppObject *)v57,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v68 = &items->obj.klass + v67;
                    monitor->fields._size = v67 + 1;
                    v68[4] = (Il2CppClass *)v57;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 4), v57, v61, v62);
                  }
                  v69 = *(_QWORD *)(v57 + 16);
                  v37 = v73;
                  if ( v69 )
                  {
                    v70 = *(_QWORD *)(v69 + 24);
                    if ( (int)v70 >= 1 )
                      break;
                  }
                }
              }
            }
          }
LABEL_72:
          size = v42->fields._size;
          if ( (int)++v43 >= size )
            return;
        }
        v71 = 0;
        while ( v71 < (unsigned int)v70 )
        {
          monitor = (System_Collections_Generic_List_object__o *)*p_giftIdToTimingDataMap;
          if ( !*p_giftIdToTimingDataMap )
            goto LABEL_75;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)monitor,
            *(_DWORD *)(v69 + 32 + 4 * v71),
            (Il2CppObject *)v57,
            (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__BattleDropTimingAdjustment_FixedDropTimingData__set_Item__);
          LODWORD(v70) = *(_DWORD *)(v69 + 24);
          if ( (__int64)++v71 >= (int)v70 )
            goto LABEL_72;
        }
LABEL_74:
        sub_1C6BC68(monitor);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB8D5E & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropTimingAdjustment___c_TypeInfo);
    byte_4CB8D5E = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleDropTimingAdjustment___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropTimingAdjustment___c_TypeInfo->static_fields->__9 = (struct BattleDropTimingAdjustment___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleDropTimingAdjustment___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB8D5F & 1) == 0 )
  {
    this = (BattleDropTimingAdjustment___c_o *)sub_1C6BA08(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_4CB8D5F = 1;
  }
  if ( !g )
    sub_1C6BC60(this, g);
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
    v7 = sub_1C41D90(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropTimingAdjustment___c___Initialize_b__4_2(
        BattleDropTimingAdjustment___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_4CB8D60 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_4CB8D60 = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_DropInfo___);
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
  if ( (byte_4CB8D61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_4CB8D61 = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_312F168 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}