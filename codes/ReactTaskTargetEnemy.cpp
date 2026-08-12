BattleServantData_array *ReactTaskTargetEnemy__TargetServants(
        ReactTaskTargetEnemy_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ReactTaskTargetEnemy_o *v4; // x20
  ReactTaskTargetFilter_o *Filter_k__BackingField; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_BattleServantData__o *v7; // x0

  v4 = this;
  if ( (byte_5973CDE & 1) == 0 )
  {
    this = (ReactTaskTargetEnemy_o *)sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_5973CDE = 1;
  }
  if ( !data
    || (Filter_k__BackingField = v4->fields._Filter_k__BackingField,
        this = (ReactTaskTargetEnemy_o *)BattleData__getFieldEnemyServantList(data, 1, 0),
        !Filter_k__BackingField) )
  {
    sub_2213CDC(this, data);
  }
  v7 = ReactTaskTargetFilter__Apply(
         Filter_k__BackingField,
         (System_Collections_Generic_IEnumerable_BattleServantData__o *)this,
         v6);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}