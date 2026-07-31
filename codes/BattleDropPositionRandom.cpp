void BattleDropPositionRandom___ctor(BattleDropPositionRandom_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropPositionRandom__Initialize(
        BattleDropPositionRandom_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  __int64 v7; // x27
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v11; // x23
  System_Collections_Generic_Dictionary_int__int__o *v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_Dictionary_int__object__o *v19; // x24
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  BattleDropPositionRandom___c_c *v28; // x0
  struct BattleDropPositionRandom___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__5_0; // x24
  Il2CppObject *v31; // x25
  struct BattleDropPositionRandom___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v39; // x0
  __int64 v40; // x1
  BattleDropPositionRandom___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  struct BattleDropPositionRandom___c_StaticFields *v43; // x9
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v45; // x25
  struct BattleDropPositionRandom___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct BattleDropPositionRandom___c_StaticFields *v53; // x9
  System_Func_object__int__o *_9__5_2; // x25
  Il2CppObject *v55; // x26
  struct BattleDropPositionRandom___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_List_object__o *klass; // x0
  __int64 v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w22
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v75; // x24
  System_Func_int__int__o *v76; // x25
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x1
  int32_t v84; // w8
  __int64 v85; // x1
  System_Collections_Generic_Dictionary_int__object__o *v86; // x25
  System_Collections_Generic_List_object__o *v87; // x26
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x0
  Il2CppClass *v91; // x20
  const char *namespaze; // x8
  unsigned __int64 v93; // x24
  int v94; // w24
  float v95; // s8
  int klass_high; // w27
  float v97; // s0
  int v98; // w8
  int v99; // w20
  float v100; // s10
  int i; // w24
  float v102; // s9
  float v103; // s15
  Il2CppClass *v104; // x26
  float v105; // s12
  float v106; // s13
  __int64 v107; // x25
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  __int64 v114; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v116; // x1
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  struct System_Object_array *items; // x8
  _QWORD *v124; // x9
  __int64 size; // x10
  Il2CppClass **v126; // x8
  __int64 v127; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_Dictionary_int__int__o **p_giftIdToGroupKeyMap; // [xsp+10h] [xbp-100h]
  float v129; // [xsp+1Ch] [xbp-F4h]
  int v130; // [xsp+20h] [xbp-F0h]
  int v131; // [xsp+24h] [xbp-ECh]
  float v132; // [xsp+28h] [xbp-E8h]
  float v133; // [xsp+34h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+38h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+50h] [xbp-C0h] BYREF

  if ( (byte_593B215 & 1) == 0 )
  {
    sub_21FFC50(&BattleDropPositionRandomSetting_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__get_Current__);
    sub_21FFC50(&BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
    sub_21FFC50(&System_Func_int__int__TypeInfo);
    sub_21FFC50(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_21FFC50(&System_Func_DropInfo__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattleDropPositionRandom___c__Initialize_b__5_0__);
    sub_21FFC50(&Method_BattleDropPositionRandom___c__Initialize_b__5_1__);
    sub_21FFC50(&Method_BattleDropPositionRandom___c__Initialize_b__5_2__);
    sub_21FFC50(&Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__);
    sub_21FFC50(&BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
    sub_21FFC50(&BattleDropPositionRandom___c_TypeInfo);
    byte_593B215 = 1;
  }
  memset(&v135, 0, sizeof(v135));
  v7 = sub_21FFEBC(BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    if ( scriptableObject
      && (naturalAligment = BattleDropPositionRandomSetting_TypeInfo->_2.naturalAligment,
          scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleDropPositionRandomSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropPositionRandomSetting_TypeInfo )
        v11 = (UnityEngine_Object_o *)scriptableObject;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v12,
        (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.giftIdToGroupKeyMap = v12;
      p_giftIdToGroupKeyMap = &this->fields.giftIdToGroupKeyMap;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.giftIdToGroupKeyMap,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v19,
        (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
      this->fields.fixedDropPointRandomList = (struct System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___o *)v19;
      p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
      sub_21FFBF4(p_fields, (int32_t)v19, v21, v22, v23, v24, v25, v26);
      v28 = BattleDropPositionRandom___c_TypeInfo;
      if ( !*(&BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo, v27);
        v28 = BattleDropPositionRandom___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__5_0 = (System_Func_object__int__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !*(&v28->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v28, v27);
          static_fields = BattleDropPositionRandom___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__5_0, v31, Method_BattleDropPositionRandom___c__Initialize_b__5_0__, 0);
        v32 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v32->__9__5_0 = (struct System_Func_DropInfo__int__o *)_9__5_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->__9__5_0, (int32_t)_9__5_0, v33, v34, v35, v36, v37, v38);
      }
      v39 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__5_0,
              (const MethodInfo_384FD10 *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v41 = BattleDropPositionRandom___c_TypeInfo;
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
      if ( !*(&BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo, v40);
        v41 = BattleDropPositionRandom___c_TypeInfo;
      }
      v43 = v41->static_fields;
      _9__5_1 = (System_Func_object__int__o *)v43->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v40);
          v43 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        }
        v45 = (Il2CppObject *)v43->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_1, v45, Method_BattleDropPositionRandom___c__Initialize_b__5_1__, 0);
        v46 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v46->__9__5_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__5_1, (int32_t)_9__5_1, v47, v48, v49, v50, v51, v52);
        v41 = BattleDropPositionRandom___c_TypeInfo;
      }
      if ( !*(&v41->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v41, v40);
        v41 = BattleDropPositionRandom___c_TypeInfo;
      }
      v53 = v41->static_fields;
      _9__5_2 = (System_Func_object__int__o *)v53->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v40);
          v53 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        }
        v55 = (Il2CppObject *)v53->__9;
        _9__5_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_2, v55, Method_BattleDropPositionRandom___c__Initialize_b__5_2__, 0);
        v56 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v56->__9__5_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v56->__9__5_2, (int32_t)_9__5_2, v57, v58, v59, v60, v61, v62);
      }
      klass = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                             v42,
                                                             (System_Func_TSource__TKey__o *)_9__5_1,
                                                             (System_Func_TSource__TElement__o *)_9__5_2,
                                                             (const MethodInfo_3868FB0 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      if ( !v7
        || (*(_QWORD *)(v7 + 16) = klass,
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)klass, v65, v66, v67, v68, v69, v70),
            !v11)
        || (klass = (System_Collections_Generic_List_object__o *)v11[1].klass) == 0 )
      {
        sub_21FFECC(klass, v64);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v134,
        klass,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
      v135 = v134;
      v71 = 0;
      v134.fields._list = 0;
      *(_QWORD *)&v134.fields._index = &v135;
      while ( 1 )
      {
        v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v135,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
        if ( !v72 )
          break;
        current = v135.fields._current;
        if ( !v135.fields._current )
          sub_21FFECC(v72, v73);
        v75 = v135.fields._current[1].klass;
        if ( v75 )
        {
          v76 = *(System_Func_int__int__o **)(v7 + 24);
          if ( !v76 )
          {
            v76 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo);
            System_Func_int__int____ctor(
              v76,
              (Il2CppObject *)v7,
              Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__,
              0);
            *(_QWORD *)(v7 + 24) = v76;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v76, v77, v78, v79, v80, v81, v82);
          }
          v84 = System_Linq_Enumerable__Sum_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v75,
                  (System_Func_TSource__int__o *)v76,
                  (const MethodInfo_3866A50 *)Method_System_Linq_Enumerable_Sum_int___);
          if ( v84 )
          {
            if ( !p_fields->klass )
              sub_21FFECC(0, v83);
            v131 = v84;
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__object__o *)p_fields->klass,
                    v71,
                    (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__) )
            {
              v86 = (System_Collections_Generic_Dictionary_int__object__o *)p_fields->klass;
              v87 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v87,
                (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
              if ( !v86 )
                sub_21FFECC(v88, v89);
              System_Collections_Generic_Dictionary_int__object___Add(
                v86,
                v71,
                (Il2CppObject *)v87,
                (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
              v91 = current[1].klass;
              if ( v91 )
              {
                namespaze = v91->_1.namespaze;
                if ( (int)namespaze >= 1 )
                {
                  v93 = 0;
                  do
                  {
                    if ( v93 >= (unsigned int)namespaze )
                      sub_21FFED4(v90);
                    if ( !*p_giftIdToGroupKeyMap )
                      sub_21FFECC(0, v85);
                    System_Collections_Generic_Dictionary_int__int___set_Item(
                      *p_giftIdToGroupKeyMap,
                      *((_DWORD *)&v91->_1.byval_arg.data + v93),
                      v71,
                      (const MethodInfo_3F5F464 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    LODWORD(namespaze) = v91->_1.namespaze;
                    ++v93;
                  }
                  while ( (__int64)v93 < (int)namespaze );
                }
              }
            }
            v94 = v131;
            v95 = *(float *)&current[2].monitor;
            v127 = v7;
            if ( SHIDWORD(current[3].klass) <= 0 )
              klass_high = v131;
            else
              klass_high = HIDWORD(current[3].klass);
            v129 = *((float *)&current[2].klass + 1);
            if ( !byte_5931FBB )
            {
              sub_21FFC50(&System_Math_TypeInfo);
              byte_5931FBB = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v85);
            v97 = (float)v131 / (float)klass_high;
            v98 = vcvtps_s32_f32(v97);
            if ( ceilf(v97) == INFINITY )
              v98 = 0x80000000;
            if ( v98 > 0 )
            {
              v99 = 1;
              v130 = v98;
              v100 = *(float *)&current[3].klass;
              v133 = *((float *)&current[2].monitor + 1);
              v132 = v95 + (float)((float)((float)(v95 / (float)v98) * -0.5) * (float)v98);
              do
              {
                if ( v99 == v98 && v94 % klass_high )
                  klass_high = v94 % klass_high;
                if ( klass_high >= 1 )
                {
                  for ( i = 0; i != klass_high; ++i )
                  {
                    v102 = *(float *)&current[1].monitor;
                    v103 = *((float *)&current[1].monitor + 1);
                    v104 = current[1].klass;
                    v105 = UnityEngine_Random__Range(-v133, v133, 0);
                    v106 = UnityEngine_Random__Range(-v100, v100, 0);
                    v107 = sub_21FFEBC(BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v107, 0);
                    *(_QWORD *)(v107 + 16) = v104;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v107 + 16),
                      (int32_t)v104,
                      v108,
                      v109,
                      v110,
                      v111,
                      v112,
                      v113);
                    *(float *)(v107 + 24) = (float)((float)((float)((float)(v129 / (float)klass_high) * 0.5)
                                                          + (float)((float)((float)(v129 / (float)klass_high) * (float)i)
                                                                  - (float)(v129 * 0.5)))
                                                  + v102)
                                          + v105;
                    *(float *)(v107 + 28) = (float)(v132 + v103) + v106;
                    if ( !p_fields->klass )
                      sub_21FFECC(0, v114);
                    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                          (System_Collections_Generic_Dictionary_int__object__o *)p_fields->klass,
                                                                          v71,
                                                                          (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
                    if ( !Item
                      || (items = Item->fields._items,
                          v124 = Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__,
                          ++Item->fields._version,
                          !items) )
                    {
                      sub_21FFECC(Item, v116);
                    }
                    size = Item->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        Item,
                        (Il2CppObject *)v107,
                        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v126 = &items->obj.klass + size;
                      Item->fields._size = size + 1;
                      v126[4] = (Il2CppClass *)v107;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v126 + 4),
                        v107,
                        v117,
                        v118,
                        v119,
                        v120,
                        v121,
                        v122);
                    }
                  }
                }
                v98 = v130;
                v94 = v131;
                ++v99;
              }
              while ( v99 <= v130 );
            }
            v7 = v127;
            ++v71;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v135,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
    }
  }
}


BattleDropPositionRandom_FixedDropPositionRandom_o *BattleDropPositionRandom__RandomGetPositionDataAndRemove(
        BattleDropPositionRandom_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *giftIdToGroupKeyMap; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *fixedDropPointRandomList; // x0
  BattleDropPositionRandom_FixedDropPositionRandom_o *v8; // x20
  int32_t v9; // w19
  System_Collections_ICollection_o *self; // [xsp+0h] [xbp-30h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B216 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
    byte_593B216 = 1;
  }
  giftIdToGroupKeyMap = this->fields.giftIdToGroupKeyMap;
  value = 0;
  self = 0;
  if ( !giftIdToGroupKeyMap
    || !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          giftIdToGroupKeyMap,
          giftId,
          &value,
          (const MethodInfo_3F60DE4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return 0;
  }
  fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.fixedDropPointRandomList;
  if ( !fixedDropPointRandomList )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          fixedDropPointRandomList,
          value,
          (Il2CppObject **)&self,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__) )
    return 0;
  fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)BasicHelper__IsNullOrEmpty(self, 0);
  v8 = 0;
  if ( ((unsigned __int8)fixedDropPointRandomList & 1) == 0 )
  {
    if ( self )
    {
      fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Random__Range_83187376(
                                                                                           0,
                                                                                           (int32_t)self[1].monitor,
                                                                                           0);
      if ( self )
      {
        v9 = (int)fixedDropPointRandomList;
        fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                             (System_Collections_Generic_List_object__o *)self,
                                                                                             (int32_t)fixedDropPointRandomList,
                                                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
        if ( self )
        {
          v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)fixedDropPointRandomList;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)self,
            v9,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
          return v8;
        }
      }
    }
LABEL_14:
    sub_21FFECC(fixedDropPointRandomList, v6);
  }
  return v8;
}


System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___o *BattleDropPositionRandom__get_FixedDropPointRandomList(
        BattleDropPositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.fixedDropPointRandomList;
}


void BattleDropPositionRandom_FixedDropPositionRandom___ctor(
        BattleDropPositionRandom_FixedDropPositionRandom_o *this,
        System_Int32_array *idArray,
        float x,
        float y,
        const MethodInfo *method)
{
  BattleDropPositionRandom_FixedDropPositionRandom_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.giftIdArray = idArray;
  v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)((char *)v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)idArray, v9, v10, v11, v12, v13, v14);
  *(float *)&v8->monitor = x;
  *((float *)&v8->monitor + 1) = y;
}


void BattleDropPositionRandom___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B217 & 1) == 0 )
  {
    sub_21FFC50(&BattleDropPositionRandom___c_TypeInfo);
    byte_593B217 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleDropPositionRandom___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropPositionRandom___c_TypeInfo->static_fields->__9 = (struct BattleDropPositionRandom___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleDropPositionRandom___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDropPositionRandom___c___ctor(BattleDropPositionRandom___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_0(
        BattleDropPositionRandom___c_o *this,
        DropInfo_o *dropInfo,
        const MethodInfo *method)
{
  if ( !dropInfo )
    sub_21FFECC(this, 0);
  return dropInfo->fields.mstGiftId;
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_1(
        BattleDropPositionRandom___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__DropInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_593B218 & 1) == 0 )
  {
    this = (BattleDropPositionRandom___c_o *)sub_21FFC50(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_593B218 = 1;
  }
  if ( !g )
    sub_21FFECC(this, g);
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
    v7 = sub_2237E2C(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_2(
        BattleDropPositionRandom___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_593B219 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_593B219 = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_DropInfo___);
}


void BattleDropPositionRandom___c__DisplayClass5_0___ctor(
        BattleDropPositionRandom___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropPositionRandom___c__DisplayClass5_0___Initialize_b__3(
        BattleDropPositionRandom___c__DisplayClass5_0_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_593B21A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_593B21A = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_37EAB28 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}