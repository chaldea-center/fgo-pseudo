void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A56E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_418A56E = 1;
  }
  this->fields.maxLine = 2;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.objList, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *Object; // x21
  const MethodInfo *v7; // x3
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  __int64 v11; // x0

  if ( (byte_418A569 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    byte_418A569 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v7);
  if ( !Object )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Object,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_9;
  if ( datalist->max_length <= index )
  {
    v11 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v11, 0LL);
  }
  if ( !Component_srcLineSprite
    || (BattleServantBuffIconComponent__setIcon_21208020(Component_srcLineSprite, datalist->m_Items[index], 0LL),
        (Component_srcLineSprite = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0LL) )
  {
LABEL_9:
    sub_B2C434(Component_srcLineSprite, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  unsigned int v6; // w20
  int32_t size; // w8
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v11; // w10
  unsigned int v12; // w11
  BattleBuffData_ShowBuffData_o *v13; // x12
  __int64 v14; // x0

  v2 = this;
  if ( (byte_418A56A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    this = (BattleServantShowBuffComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v4);
    byte_418A56A = 1;
  }
  objList = v2->fields.objList;
  if ( !objList )
    goto LABEL_20;
  v6 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v6];
    if ( !this )
      goto LABEL_20;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_20;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v2->fields.datalist;
      if ( !datalist )
        goto LABEL_20;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v11 = monitor[9];
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= max_length )
          {
            v14 = sub_B2C460(this);
            sub_B2C400(v14, 0LL);
          }
          v13 = datalist->m_Items[v12];
          if ( !v13 )
            break;
          if ( v11 == v13->fields.addOrder )
            goto LABEL_19;
          if ( (int)++v12 >= max_length )
            goto LABEL_18;
        }
LABEL_20:
        sub_B2C434(this, method);
      }
LABEL_18:
      BattleServantBuffIconComponent__setIcon_21208020((BattleServantBuffIconComponent_o *)this, 0LL, 0LL);
    }
LABEL_19:
    objList = v2->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x24
  __int64 v8; // x21
  int size; // w8
  unsigned int v10; // w22
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_GameObject__o *v13; // x23
  __int64 v14; // x0

  v4 = this;
  if ( (byte_418A56C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    this = (BattleServantShowBuffComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v6);
    byte_418A56C = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
    goto LABEL_12;
  v8 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(v4, index, method);
      return;
    }
    if ( size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v8);
    if ( !this )
      goto LABEL_12;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_12;
    if ( !this[1].monitor )
      break;
    objList = v4->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_12;
  }
  datalist = v4->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
  {
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
  }
  BattleServantBuffIconComponent__setIcon_21208020(
    (BattleServantBuffIconComponent_o *)this,
    datalist->m_Items[index],
    0LL);
  v13 = v4->fields.objList;
  if ( !v13 )
LABEL_12:
    sub_B2C434(this, *(_QWORD *)&index);
  if ( v13->fields._size <= v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v4,
    *((UnityEngine_GameObject_o **)&v13->fields._items->obj.klass + v8),
    index,
    v12);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  __int64 v6; // x20
  int size; // w8

  v2 = this;
  if ( (byte_418A56D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    this = (BattleServantShowBuffComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v4);
    byte_418A56D = 1;
  }
  objList = v2->fields.objList;
  if ( !objList )
LABEL_13:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v6];
    if ( this )
    {
      this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( this )
      {
        if ( this[1].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)this, 0LL);
        objList = v2->fields.objList;
        ++v6;
        if ( objList )
          continue;
      }
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w19
  BattleServantShowBuffComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x25
  __int64 v8; // x21
  int size; // w8
  unsigned int v10; // w24
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_GameObject__o *v15; // x22
  __int64 v16; // x0

  v3 = index;
  v4 = this;
  if ( (byte_418A56B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    this = (BattleServantShowBuffComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v6);
    byte_418A56B = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
    goto LABEL_16;
  v8 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= size )
      return 0;
    if ( size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v8);
    if ( !this )
      goto LABEL_16;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_16;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v4->fields.datalist;
      if ( !datalist )
        goto LABEL_16;
      if ( datalist->max_length <= v3 )
      {
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_16;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = v4->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_16;
  }
  BattleServantBuffIconComponent__setIcon_21208020(
    (BattleServantBuffIconComponent_o *)this,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0LL);
  v15 = v4->fields.objList;
  if ( !v15 )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&index);
  if ( v15->fields._size <= v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v4,
    *((UnityEngine_GameObject_o **)&v15->fields._items->obj.klass + v8),
    v3,
    v14);
  return 1;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B2C434(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *updated; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v18; // w21
  __int64 v19; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v22; // w10
  int v23; // w22
  struct System_Collections_Generic_List_GameObject__o *v24; // x26
  __int64 v25; // x24
  int v26; // w8
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v28; // x9
  BattleBuffData_ShowBuffData_o *v29; // x9
  __int64 v30; // x0

  if ( (byte_418A568 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, buffList);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    byte_418A568 = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.datalist,
    (System_Int32_array **)buffList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v13);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_35;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)&datalist->max_length;
    if ( v18 >= (int)v19 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_35;
    size = objList->fields._size;
    v22 = this->fields.maxLine * this->fields.maxCount;
    if ( v22 <= v18 )
      break;
    if ( size <= v18 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v18, v16);
    }
    else
    {
      updated = (UnityEngine_GameObject_o *)BattleServantShowBuffComponent__UpdateBuff(this, v18, v16);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v18, v16);
    }
    datalist = *p_datalist;
    ++v18;
    if ( !*p_datalist )
      goto LABEL_35;
  }
  v23 = size - v22;
  if ( size - v22 >= 1 && v18 < (int)v19 )
  {
    while ( 1 )
    {
      v24 = this->fields.objList;
      if ( !v24 )
        break;
      v25 = 0LL;
      while ( 1 )
      {
        v26 = v24->fields._size;
        if ( (int)v25 >= v26 )
          break;
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        updated = v24->fields._items->m_Items[v25];
        if ( !updated )
          goto LABEL_35;
        updated = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                updated,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_35;
        monitor = updated[3].monitor;
        if ( monitor )
        {
          v28 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_35;
          if ( v18 >= v28->max_length )
          {
            v30 = sub_B2C460(updated);
            sub_B2C400(v30, 0LL);
          }
          v29 = v28->m_Items[v18];
          if ( !v29 )
            goto LABEL_35;
          if ( monitor[9] == v29->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_21208020((BattleServantBuffIconComponent_o *)updated, 0LL, 0LL);
            --v23;
            break;
          }
        }
        v24 = this->fields.objList;
        ++v25;
        if ( !v24 )
          goto LABEL_35;
      }
      if ( !*p_datalist )
        break;
      if ( v23 >= 1 && ++v18 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_35:
    sub_B2C434(updated, v15);
  }
}